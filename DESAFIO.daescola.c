#include <stdio.h>
#include <stdbool.h>

int main() {

unsigned char salas_de_aula = 12; // Quantidade de salas de aula (tipo pequeno)
short alunos_matriculados = 320;  // Quantidade de alunos
int livros_na_biblioteca = 1500;  // Total de livros disponíveis
long long acessos_ao_sistema = 1289033; // Total de acessos ao sistema
float media_notas = 7.5f;         // Média geral das notas
double taxa_evasao = 2.34;        // Taxa de evasão em percentual
bool vagas_abertas = true;        // Indica se há vagas abertas
char turma_principal = 'A';       // Letra da turma principal
//calculando a media de alunos por sala
float media_alunos_por_sala = (float) alunos_matriculados / salas_de_aula;
// calculando o numero de livros por aluno
float livros_por_aluno = (float)livros_na_biblioteca / alunos_matriculados;
//=== saida formatada ===
printf ("=== ESTATISTICAS DA ESCOLA === \n\n");

 printf("=== Estatisticas da Escola ===\n\n");

    printf("Salas de aula: %d\n", salas_de_aula);
    printf("Alunos matriculados: %d\n", alunos_matriculados);
    printf("Livros na biblioteca: %d\n", livros_na_biblioteca);
    printf("Acessos ao sistema: %lld\n", acessos_ao_sistema);
    printf("Média geral da turma: %.2f\n", media_notas);
    printf("Taxa de evasao: %.2f%%\n", taxa_evasao);
    printf("Turma principal: %c\n", turma_principal);
    printf("Vagas abertas: %s\n", vagas_abertas ? "true" : "false");

    printf("\n--- Calculos ---\n\n");

    printf("Media de alunos por sala: %.2f\n", media_alunos_por_sala);
    printf("Livros por aluno: %.2f\n", livros_por_aluno);

    return 0;


}