// 12S22024 - Pimpin Ahasweros Loi
// 12S22032 - Samuel Janring Saragih Sitio

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 120

// Fungsi untuk menghasilkan boxed string
void boxedString(int l, char* s) {
    // Menghitung jumlah baris yang diperlukan pada output
    int n = (strlen(s) - 1) / l + ((strlen(s) - 1) % l != 0);

    // Membuat array dua dimensi untuk menyimpan karakter-karakter pada string
    char kata[n][l];
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            if (k < strlen(s) - 1) {
                kata[i][j] = s[k++];
            } else {
                kata[i][j] = '#';
            }
        }
    }

    // Mencetak output pada baris
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            int index = i * l + j;
            if (index < strlen(s) - 1) {
                printf("%c", s[index]);
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    // Mencetak output pada kolom
    for (int j = 0; j < l; j++) {
        for (int i = 0; i < n; i++) {
            printf("%c", kata[i][j]);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <length>\n", argv[0]);
        return 1;
    }

    int l = atoi(argv[1]);
    if (l < 1) {
        printf("Length must be positive integer\n");
        return 1;
    }

    char s[MAX_LEN];
    if (!fgets(s, sizeof(s), stdin)) {
        printf("Failed to read input\n");
        return 1;
    }

    // Hapus karakter newline pada akhir input
    s[strcspn(s, "\n")] = '\0';

    // Memanggil fungsi boxedString dengan parameter l dan s
    boxedString(l, s);

    return 0;
}
