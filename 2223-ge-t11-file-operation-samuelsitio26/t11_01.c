// 12S22024 - Pimpin Ahasweros Loi
// 12S22032 - Samuel Janring Saragi Sitio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"

int main(int _argc, char **_argv) 
{
    int looping = 0;
    char command[100];
    struct student_t *murid = malloc(100 * sizeof(struct student_t));
    struct dorm_t *asrama = malloc(100 *sizeof(struct dorm_t));
    int banyak_murid = 0;
    int banyak_asrama = 0;
    
    char DORM[100];
    char MAHASISWA[100];

    FILE *drm;
    FILE *std;
    drm = fopen("./storage/dorm-repository.txt", "r");  // r untuk membaca, a untuk menulis
    std = fopen("./storage/student-repository.txt", "r");

    while (looping != 1 )
    {
        command[0] = '\0';
        short k = 0;
        while (1 == 1)
        {
            char i = getchar();
            if (i == '\n')
            {
                break;
            }
            if (i == '\r')
            {
                continue;
            }
            command[k] = i;
            command[++k] = '\0';
        }

        char *input = strtok(command, "#");

        if (strcmp(input, "student-print-all-detail") == 0)
        {
            while(fgets(MAHASISWA, 100 , std) != NULL){
            input = strtok(MAHASISWA, "|");
            strcpy(murid[banyak_murid].id, input);
            input = strtok(NULL, "|");
            strcpy(murid[banyak_murid].name, input);
            input = strtok(NULL, "|");
            strcpy(murid[banyak_murid].year, input);
            input = strtok(NULL, "|");
            if (strcmp(input, "male\n") == 0)
            {
                murid[banyak_murid].gender = 0;
            }
            else if (strcmp(input, "female\n") == 0)
            {
                murid[banyak_murid].gender = 1;
            }
            banyak_murid++;    
            }

            for (int i = 0; i < banyak_murid; i++)
            {
                if (murid[i].gender != 1)
                {
                    printf("%s|%s|%s|male|unassigned\n", murid[i].id, murid[i].name, murid[i].year);
                }
                else 
                {
                    printf("%s|%s|%s|female|unassigned\n", murid[i].id, murid[i].name, murid[i].year);
                }   
            }
        }

        
        if (strcmp(input, "dorm-print-all-detail") == 0)
        {
            while(fgets(DORM, 100 , drm) != NULL)
            {
                input = strtok(DORM, "|");
                strcpy(asrama[banyak_asrama].name, input);
                input = strtok(NULL, "|");
                asrama[banyak_asrama].capacity = atoi(input);
                input = strtok(NULL, "|");
                if (strcmp(input, "male\n") == 0)
                    {
                        asrama[banyak_asrama].gender = 0;
                    }   else if (strcmp(input, "female\n") == 0)
                        {
                            asrama[banyak_asrama].gender = 1;
                        }
                banyak_asrama++;
            }

            for (int i = 0; i < banyak_asrama; i++)
            {
                if (asrama[i].gender != 1)
            {
                printf("%s|%d|male|%d\n", asrama[i].name, asrama[i].capacity, asrama[i].residents_num);
                
            }
            else 
            {
                printf("%s|%d|female|%d\n", asrama[i].name, asrama[i].capacity, asrama[i].residents_num);
            }
            } 
        }
        
        if (strcmp(input, "---") == 0)
        {
            looping = 1;
        }
    }

    fclose(std);
    fclose(drm);

    return 0;
}