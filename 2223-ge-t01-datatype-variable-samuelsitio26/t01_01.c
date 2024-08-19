// 12S22032 - Samuel Sitio 
// 12S22024 - Pimpin Ahaswerosl 

#include <stdio.h>

int main() // int main untuk start
{
  int numerik;  // declar int (unutk bilangan bulat)
  char a; // Char unutk variabel unik ( 1, a, @)
  signed int bol; 
  unsigned int angka;
  float nilai;
  
  scanf("%d", &numerik); 
  scanf(" %c", &a);
  scanf("%d", &bol);
  scanf("%d", &angka);
  scanf("%f", &nilai);
system("cls");
  printf("%d\n", numerik);
  printf("%c\n", a);
  printf("%d\n", bol);
  printf("%d\n", angka);
  printf("%.2f\n", nilai);

  return 0;
}
