#include <stdio.h>
#include <stdlib.h>

int main()
{
 int boyut1;
 int boyut2;

 printf("1. dizi boyutunu giriniz : \n");
 scanf("%d",&boyut1);
 int dizi1[boyut1];
 printf("%d adet sayi giriniz : \n",boyut1);
 for(int i=0 ; i<boyut1 ; i++){
    scanf("%d",&dizi1[i]);
 }
 printf("2. dizi boyutunu giriniz : \n");
 scanf("%d",&boyut2);
 int dizi2[boyut2];
 printf("%d adet sayi giriniz : \n",boyut2);
 for(int i=0;i<boyut2;i++){
    scanf("%d",&dizi2[i]);
 }
for(int i=0 ; i<boyut1;i++){
    printf("%d - ",dizi1[i]);
}
for(int j=0;j<boyut2;j++){
    printf("%d",dizi2[j]);
    if(j!=boyut2-1 ){
        printf(" - ");
    }
}



    return 0;
}
