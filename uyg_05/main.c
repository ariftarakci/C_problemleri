#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut1;
    int bulunacak_sayi;
    printf("dizi boyutu giriniz :");
    scanf("%d",&boyut1);
    int dizi1[boyut1];
    printf("\n%d adet sayi giriniz : \n",boyut1);
    for(int i = 0 ;i<boyut1;i++){
        scanf("%d",&dizi1[i]);
    }
    for(int i=0 ; i<boyut1 ; i++){
        printf("%d  ",dizi1[i]);
    }
        printf("\nhangi sayinin indisini bulmak istersiniz giriniz : ");
        scanf("%d",&bulunacak_sayi);
        for(int i=0 ; i<boyut1 ; i++){
            if(dizi1[i]==bulunacak_sayi){
                printf("\nsayinin indisi : '%d'",i+1);
            }
        }
    return 0;
}
