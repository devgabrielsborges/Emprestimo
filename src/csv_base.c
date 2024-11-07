#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void read_csv(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Não foi possível abrir o arquivo");
        return;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file)) {
        // Processar cada linha
        printf("Linha lida: %s", line);
    }

    fclose(file);
}

void write_csv(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Não foi possível abrir o arquivo");
        return;
    }

    // Exemplo de dados a serem escritos
    const char *data[] = {
        "Nome,Idade,Cidade",
        "Alice,30,São Paulo",
        "Bob,25,Rio de Janeiro",
        "Carol,27,Belo Horizonte"
    };

    for (int i = 0; i < 4; i++) {
        fprintf(file, "%s\n", data[i]);
    }

    fclose(file);
}

int main() {
    const char *filename = "exemplo.csv";

    // Ler o arquivo CSV
    read_csv(filename);

    // Escrever no arquivo CSV
    write_csv(filename);

    return 0;
}

// NULL, NULL, NULL, NULL, NULL
// nome_sala, data, hora_inicio, hora_fim, turma