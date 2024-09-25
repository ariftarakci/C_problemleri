#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("dizi eleman sayisi giriniz :\n");
    int eleman;
    int boyut_1;
    int boyut_2;
    scanf("%d",&eleman);
    printf("elemanlari giriniz :\n");
    int dizi[eleman];
    for(int i=0; i<eleman; i++)
    {
        scanf("%d",&dizi[i]);
    }
    int bolunen;
    int gecici_1=0;
    int gecici_2=0;
    if(eleman%2==0)
    {
        boyut_1=eleman/2;
        boyut_2=boyut_1;
        dizi[boyut_2];
    }
    else
    {
        boyut_1=(eleman-1)/2;
        boyut_2=boyut_1+1;
        dizi[boyut_2];
    }
    int dizi_1[boyut_1];
    for(int i=0; i<eleman; i++)
    {
        if(i%2==1)
        {
            dizi_1[gecici_1]=dizi[i];
            gecici_1++;
        }
        else
        {
            dizi[gecici_2]=dizi[i];
            gecici_2++;
        }
    }
    printf("\nilk dizi:\n");
    for(int i=0; i<boyut_2; i++)
    {
        printf("%3d",dizi[i]);
    }
    printf("\nikinci dizi:\n");
    for(int i=0; i<boyut_1; i++)
    {
        printf("%3d",dizi_1[i]);
    }
    return 0;
}
