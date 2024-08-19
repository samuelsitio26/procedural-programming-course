// 12S22024 - Pimpin Ahasweros Loi
// 12S22032 - Samuel Janring Saragih Sitio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
   if (argc != 2) // memeriksa jumlah argumen yang diberikan
    {
        return 1;
    }

    int l = atoi(argv[1]); //mendapatkan panjang string yang diminta dari argumen command line dan merubah tipe data string menjadi integer
    char str[101]; //mendeklarasikan array untuk menyimpan string input
    fgets(str, sizeof(str), stdin); //mendapatkan input string dari user
    str[strcspn(str, "\n")] = '\0'; //menghilangkan newline character pada string

    int nkata = strlen(str)  -1 ; //mendapatkan panjang string input
    int baris = nkata/l; //mendapatkan jumlah substring yang harus dibuat
    if(nkata%l != 0) //jika panjang string tidak habis dibagi l, maka perlu satu substring lagi
        baris++;

    int total = 0; //variabel untuk menyimpan indeks karakter pada string input
    for( int i=0; i<baris; i++) //loop sebanyak substring yang harus dibuat panjang ke bawah
    {
        for( int j=0; j<l; j++) //loop sebanyak panjang kesamping 
        {
            if(total >= nkata) //jika sudah melebihi panjang string input
                printf("#"); //mencetak karakter "#" untuk melengkapi substring
            else
                printf("%c", str[total]); //mencetak karakter pada indeks idx dari string input
            total++; //menambah indeks karakter
        }
        printf("\n"); //pindah ke baris baru untuk mencetak substring berikutnya
    }

    return 0;
}