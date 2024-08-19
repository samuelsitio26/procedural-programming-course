// 12S22032 - Samuel Sitio 
// 12S22024 - Pimpin Ahaswerosl 

#include <stdio.h> 

int main(int _argc, char **_argv)
{
    float value1;       
    scanf("%f", &value1); // inputan  yang akan di masukan 

    float value2; 
    scanf("%f", &value2);

    float value3;
    scanf("%f", &value3);

    float value4; 
    scanf("%f", &value4);

    float value5; 
    scanf("%f", &value5);


    float jumlah = value1 + value2 + value3 + value4 + value5;
    float mean = jumlah / 5;
    system("cls");
    printf("%.3f\n", jumlah);
    printf("%.3f\n", mean);
    return 0;
}