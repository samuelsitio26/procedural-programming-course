#include <stdio.h>

int main() {
    int ucok, butet, nucok, nbutet, nkecil, total;
    
    scanf("%d", &ucok);
    scanf("%d", &butet); // tambahkan tanda '&' sebelum variabel butet
    
    nucok = 0;
    nbutet = 0;
    
    while (ucok != 0) {
        if (ucok > 3) {
            ucok = ucok - 3;
            nucok = nucok + 1;
        } else {
            ucok = ucok - ucok;
            nucok = nucok + 1;
        }
    }
    
    while (butet != 0) {
        if (butet > 3) {
            butet = butet - 3;
            nbutet = nbutet + 1;
        } else {
            butet = butet - butet;
            nbutet = nbutet + 1;
        }
    }
    
    if (nucok < nbutet) {
        nkecil = nucok;
        if (nucok == 0) {
            // tambahkan tanda kurung kurawal pada blok kosong
        } else {
            nucok = nkecil * 6 - 3;
        }
        nbutet = nkecil * 6 + (nbutet - nkecil) * 3;
    } else {
        nkecil = nbutet;
        nbutet = nkecil * 6;
        nucok = nkecil * 6 + (nucok - nkecil) * 3;
    }
    
    total = nucok + nbutet;
    
    printf("%d\n", nucok); // tambahkan karakter '\n' untuk memberikan baris baru setelah setiap printf
    printf("%d\n", nbutet); // tambahkan karakter '\n' untuk memberikan baris baru setelah setiap printf
    printf("%d\n", total); // tambahkan karakter '\n' untuk memberikan baris baru setelah setiap printf
    
    return 0;
}
