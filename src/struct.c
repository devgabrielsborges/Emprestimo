#include <stdio.h>

typedef struct
{
    char *nome;
    char *data; // [dd//mm/aaaa]
    char *hora_inicio; // [hh:mm]
    char *hora_fim; // [hh:mm]
    char *turma;
} sala;

// int main()
// {
//     sala s1;
//     s1.nome = "Sala 1";
//     s1.data = "01/01/2021";
//     s1.hora_inicio = "08:00";
//     s1.hora_fim = "10:00";
//     s1.turma = "Turma 1";

//     printf("Nome: %s\n", s1.nome);
//     printf("Data: %s\n", s1.data);
//     printf("Hora de inicio: %s\n", s1.hora_inicio);
//     printf("Hora de fim: %s\n", s1.hora_fim);
//     printf("Turma: %s\n", s1.turma);

//     return 0;
// }