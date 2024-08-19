// 12S22032 - Samuel Sitio 
// 12S22024 - Pimpin Ahaswerosl 

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int x,y,z;
  int shift_angka, banding; 
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

shift_angka = x<<y ;

banding = shift_angka == z;
system("cls");
printf("%d\n", shift_angka);
printf("%d", banding);
  
  
  return 0;
}
