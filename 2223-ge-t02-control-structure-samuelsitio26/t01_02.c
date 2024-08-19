// 12S22032 - Samuel Sitio 
// 12S22024 - Pimpin Ahasweros Loi

#include <stdio.h>
#include <math.h>

int main() {
    int x1, antrianA = 0, waktuAntrianA = 0;
    int x2, antrianB = 0, waktuAntrianB = 0;
    int totalAntrian = 0, totalWaktuAntrian = 0;

    scanf("%d", &x1);
    scanf("%d", &x2);

    if (x1 == 0 && x2 == 0) {
        // kasus khusus x1=x2=0
        printf("0\n0\n0\n");
    } else if (x1 == 0) {
        // kasus khusus x1=0 dan x2>0
        antrianB = ceil((double) x2 / 3); // membulatkan ke atas hasil pembagian x2 dengan 3
        waktuAntrianB = antrianB * 3; // waktu antrian B
        printf("0\n%d\n%d\n", waktuAntrianB, waktuAntrianB);
    } else if (x2 == 0) {
        // kasus khusus x1>0 dan x2=0
        antrianA = ceil((double) x1 / 3); // membulatkan ke atas hasil pembagian x1 dengan 3
        waktuAntrianA = antrianA * 3; // waktu antrian A
        printf("%d\n0\n%d\n", waktuAntrianA, waktuAntrianA);
    } else {
        // kasus umum x1>0 dan x2>0
        if (x1 % 3 == 0) {
            antrianA = x1 / 3;
        } else {
            antrianA = x1 / 3 + 1;
        }

        if (x2 % 3 == 0) {
            antrianB = x2 / 3;
        } else {
            antrianB = x2 / 3 + 1;
        }

        totalAntrian = antrianA + antrianB;

        if (antrianA > antrianB) {
            waktuAntrianA = totalAntrian * 3;
            waktuAntrianB = (antrianB * 2) * 3;
        } else if (antrianA == antrianB) {
            waktuAntrianA = (totalAntrian - 1) * 3;
            waktuAntrianB = totalAntrian * 3;
        } else {
            waktuAntrianA = ((antrianA * 2) - 1) * 3;
            waktuAntrianB = totalAntrian * 3;
        }

        totalWaktuAntrian = waktuAntrianA + waktuAntrianB;
        printf("%d\n%d\n%d\n", waktuAntrianA, waktuAntrianB, totalWaktuAntrian);
    }

    return 0;
}

/*Dalam hal ini, ceil((double) x2 / 3) mengkonversi nilai x2 menjadi tipe data double, 
kemudian membaginya dengan 3, dan hasilnya dibulatkan ke atas menggunakan ceil.
Contoh penggunaan: Jika x2 adalah 5, maka ekspresi ceil((double) x2 / 3) akan menghasilkan nilai 2.0, 
karena hasil pembagian 5 oleh 3 adalah 1.6666666..., yang dibulatkan ke atas menjadi 2.*/