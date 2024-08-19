// 12S22024 - Pimpin Ahasweros Loi
// 12S22032 - Samuel Janring Saragih Sitio

#include <stdio.h>
#include <string.h>

// Enum untuk representasi perintah
enum Cmd {
    REG,
    FIND,
    EX
};

// Struktur untuk menyimpan kosa kata
struct Vocab {
    char eng[21];
    char ind[81];
};

// Fungsi untuk mengecek apakah dua string sama atau tidak (case insensitive)
int stricmp(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i] && (str1[i] + 32) != str2[i] && (str1[i] - 32) != str2[i]) {
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    struct Vocab vocab[5];
    int cnt = 0;

    while (1) {
        // Membaca perintah
        char cmd[10];
        scanf("%s", cmd);

        // Memproses perintah
        if (stricmp(cmd, "register") == 0) {
            // Menambahkan kosa kata baru
            if (cnt < 5) {
                scanf("%s %[^\n]", vocab[cnt].eng, vocab[cnt].ind);
                cnt++;
            }
        } else if (stricmp(cmd, "find") == 0) {
            // Mencari arti kata
            char eng[21];
            scanf("%s", eng);

            int found = 0;
            for (int i = 0; i < cnt; i++) {
                if (stricmp(vocab[i].eng, eng) == 0) {
                    printf("%s#%s\n", vocab[i].eng, vocab[i].ind);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                // Tidak menemukan kosa kata
            }
        } else if (stricmp(cmd, "---") == 0) {
            // Keluar dari program
            break;
        }
    }

    return 0;
}