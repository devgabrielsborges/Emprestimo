#include <stdio.h>
#include <time.h>

int data() {
    // Obter o tempo atual
    time_t t = time(NULL);
    // Converter para a hora local
    struct tm tm = *localtime(&t);

    // Imprimir a data no formato dd/mm/aaaa
    printf("Data atual: %02d/%02d/%04d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    return 0;
}