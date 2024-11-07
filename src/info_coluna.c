#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void get_age_of_alice(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Não foi possível abrir o arquivo");
        return;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file)) {
        // Dividir a linha em colunas
        char *name = strtok(line, ",");
        char *age = strtok(NULL, ",");
        char *city = strtok(NULL, ",");

        // Verificar se o nome é "Alice"
        if (name && strcmp(name, "Alice") == 0) {
            printf("A cideade de Alice é: %s\n", city);
            break;
        }
    }

    fclose(file);
}

int main() {
    const char *filename = "exemplo.csv";

    // Obter a idade de Alice
    get_age_of_alice(filename);

    return 0;
}