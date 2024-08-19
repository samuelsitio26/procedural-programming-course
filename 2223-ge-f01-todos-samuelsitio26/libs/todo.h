// 12S22024 - Pimpin Ahasweros Loi
// 12S22032 - Samuel Janring Saragi Sitio

#ifndef TODO_H
#define TODO_H

typedef enum {
    NONE,
    DONE,
    CANCELED
} status_t;

typedef struct {
    int id;
    char time[6];
    char activity[100];
    status_t status;
} activity_t;

void processActivity(int id, const char* time, const char* activity, status_t status);
void addNewActivity(const char* time, const char* activity);
void changeActivityStatus(int id, const char* status);
void printAllActivities();

#endif  // TODO_H
