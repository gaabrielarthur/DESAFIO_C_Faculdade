#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char sobrenome[50];
    int vivo;
    int idade;
    char endereco[100];
} Pessoa;

// ----------- LIMPAR STRING -----------
void limpar(char *str) {
    str[strcspn(str, ",\n")] = '\0';
}

// ----------- LER JSON -----------
void ler_json(char *arquivo, Pessoa *p) {
    FILE *f = fopen(arquivo, "r");
    if (!f) {
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }

    char linha[200];
    char chave[50], valor[100];

    while (fgets(linha, sizeof(linha), f)) {

        // STRING: "chave": "valor"
        if (sscanf(linha, " \"%[^\"]\" : \"%[^\"]\"", chave, valor) == 2) {

            limpar(valor);

            if (strcmp(chave, "nome") == 0)
                strcpy(p->nome, valor);

            else if (strcmp(chave, "sobrenome") == 0)
                strcpy(p->sobrenome, valor);

            else if (strcmp(chave, "endereco") == 0)
                strcpy(p->endereco, valor);
        }

        // NUMERO: "chave": valor
        else if (sscanf(linha, " \"%[^\"]\" : %[^,\n]", chave, valor) == 2) {

            limpar(valor);

            if (strcmp(chave, "vivo") == 0)
                p->vivo = atoi(valor);

            else if (strcmp(chave, "idade") == 0)
                p->idade = atoi(valor);
        }
    }

    fclose(f);
}

// ----------- SALVAR JSON -----------
void salvar_json(char *arquivo, Pessoa p) {
    FILE *f = fopen(arquivo, "w");

    if (!f) {
        printf("Erro ao salvar arquivo\n");
        return;
    }

    fprintf(f, "{\n");
    fprintf(f, "  \"nome\": \"%s\",\n", p.nome);
    fprintf(f, "  \"sobrenome\": \"%s\",\n", p.sobrenome);
    fprintf(f, "  \"vivo\": %d,\n", p.vivo);
    fprintf(f, "  \"idade\": %d,\n", p.idade);
    fprintf(f, "  \"endereco\": \"%s\"\n", p.endereco);
    fprintf(f, "}\n");

    fclose(f);
}

// ----------- MOSTRAR -----------
void mostrar(Pessoa p) {
    printf("\nNome: %s %s\n", p.nome, p.sobrenome);
    printf("Vivo: %d\n", p.vivo);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: %s\n", p.endereco);
}

// ----------- EDITAR -----------
void editar(Pessoa *p) {
    printf("\nNovo nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Novo sobrenome: ");
    scanf(" %[^\n]", p->sobrenome);

    printf("Vivo (1/0): ");
    scanf("%d", &p->vivo);

    printf("Idade: ");
    scanf("%d", &p->idade);

    printf("Endereco: ");
    scanf(" %[^\n]", p->endereco);
}

// ----------- MAIN -----------
int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Use: %s arquivo.json\n", argv[0]);
        return 1;
    }

    Pessoa p = {0};

    ler_json(argv[1], &p);

    printf("\n--- DADOS ---\n");
    mostrar(p);

    char op;
    printf("\nEditar dados? (s/n): ");
    scanf(" %c", &op);

    if (op == 's') {
        editar(&p);
        salvar_json(argv[1], p);
        printf("\nArquivo atualizado!\n");
    }

    return 0;
}