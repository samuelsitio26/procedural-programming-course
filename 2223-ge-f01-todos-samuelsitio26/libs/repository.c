// 12S22024 - Pimpin Ahasweros Loi
// 12S22032 - Samuel Janring Saragi Sitio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "repository.h"
#include "todo.h"

void loadInitialData(const char* filePath) {
    FILE* file = fopen(filePath, "r");
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        char *input = strtok(line, "|");
        int id = atoi(input);

        input = strtok(NULL, "|");
        char *time = strdup(input);

        input = strtok(NULL, "|");
        char *activity = strdup(input);

        input = strtok(NULL, "|");
        char *statusStr = strdup(input);

        // Menghapus karakter newline pada akhir status
        statusStr[strcspn(statusStr, "\n")] = 0;

        status_t status;
        if (strcmp(statusStr, "none") == 0) {
            status = NONE;
        } else if (strcmp(statusStr, "done") == 0) {
            status = DONE;
        } else if (strcmp(statusStr, "canceled") == 0) {
            status = CANCELED;
        }

        processActivity(id, time, activity, status);

        free(time);
        free(activity);
        free(statusStr);
    }
    fclose(file);
}