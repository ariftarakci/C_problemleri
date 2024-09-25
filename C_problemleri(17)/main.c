#include <stdio.h>
#include <stdlib.h>
int sayi;
int main()
{
    printf("dizi sayisi: \n");
    scanf("%d",&sayi);
    printf("%d adet sayi giriniz: \n",sayi);
    int dizi[sayi];
    for(int i=0; i<sayi; i++){
        scanf("%d",&dizi[i]);
    }
    for(int i=0; i<sayi; i++){
        printf("%3d",dizi[i]);
    }
    printf("\ntersten yazilmis hali:\n");
    for(int i=sayi-1; i>-1; i--){
        printf("%3d",dizi[i]);
    }

    return 0;
}
