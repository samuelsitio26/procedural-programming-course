// 12S22024 - Pimpin Ahasweros Loi
// 12S22032 - Samuel Janring Saragih Sitio

#include <stdio.h>

int main()
{
    int baris;
    int nilai;
    int i;
    int nilaiRendah = 0, nilaiTinggi = 0;
    
    scanf("%d", &baris);

    for(i = 0; i < baris; i++){
        scanf("%d", &nilai);
        
        if(i==0){
            nilaiRendah = nilai;
            nilaiTinggi = nilai;
        }else{
            if(nilai > nilaiTinggi){
                nilaiTinggi = nilai;
            } 
            
            if(nilai < nilaiRendah){
                nilaiRendah = nilai;
            }   
        }
    }
    
    printf("%d\n", nilaiRendah);
    printf("%d\n", nilaiTinggi);

    return 0;
}