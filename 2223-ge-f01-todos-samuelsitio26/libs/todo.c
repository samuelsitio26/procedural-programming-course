// 12S22024 - Pimpin Ahasweros Loi
// 12S22032 - Samuel Janring Saragi Sitio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "todo.h"

activity_t activities[100];
int numActivities = 0;

void processActivity(int id, const char* time, const char* activity, status_t status) {
    activity_t newActivity;
    newActivity.id = id;
    strcpy(newActivity.time, time);
    strcpy(newActivity.activity, activity);
    newActivity.status = status;

    activities[numActivities++] = newActivity;
}

void addNewActivity(const char* time, const char* activity) {
    int id = numActivities + 1;
    status_t status = NONE;
    processActivity(id, time, activity, status);
}

void changeActivityStatus(int id, const char* status) {
    for (int i = 0; i < numActivities; i++) {
        if (activities[i].id == id && activities[i].status == NONE) {
            if (strcmp(status, "done") == 0) {
                activities[i].status = DONE;
            } else if (strcmp(status, "canceled") == 0) {
                activities[i].status = CANCELED;
            }
            break;
        }
    }
}

void printAllActivities() {
    for (int i = 0; i < numActivities; i++) {
        printf("%d|%s|%s|", activities[i].id, activities[i].time, activities[i].activity);
        switch (activities[i].status) {
            case NONE:
                printf("none\n");
                break;
            case DONE:
                printf("done\n");
                break;
            case CANCELED:
                printf("canceled\n");
                break;
        }
    }
}
