// 12S22032 - Samuel Sitio 
// 12S22024 - Pimpin Ahasweros loi

 
#include <stdio.h>

int main(int _argc, char **_argv) {
  int masuk;

    scanf("%d", &masuk);

    if (masuk == 1){
        printf ("January\nFebruary\nMarch\n");
    }
    else if (masuk == 2){
        printf ("February\nMarch\nApril\n");
    }
    else if (masuk == 3){
        printf ("March\nApril\nMay\n");
    }
    else if (masuk == 4){
        printf ("April\nMay\nJune\n");
    }
    else if (masuk == 5){
      printf ("May\nJune\nJuly\n");
    }
    else if (masuk == 6){
      printf ("June\nJuly\nAugust\n");
    }
    else if (masuk == 7){
    printf ("July\nAugust\nSeptember\n");
    }
    else if (masuk == 8){
    printf ("August\nSeptember\nOctober\n");
    }
    else if (masuk == 9){
    printf ("September\nOctober\nNovember\n");
    }
    else if (masuk == 10){
    printf ("Oktober\nNovember\nDecember\n");
    }
    else if (masuk == 11){
    printf ("November\nDecember\nNew year\nJanuary\n");
    }
    else if (masuk == 12){
    printf ("December\nNew year\nJanuary\nFebruary\n");
    }
  
    return 0;
}