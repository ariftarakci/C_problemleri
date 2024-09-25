#include <stdio.h>
#include <stdlib.h>

int buyuk;
int satir;
int sutun;
int i_satir;
int j_sutun;
int main()
{
    printf("dizi satir boyutunu giriniz :\n");
    scanf("%d",&satir);
    printf("dizi sutun boyutunu giriniz :\n");
    scanf("%d",&sutun);
    int dizi[satir][sutun];
    printf("dizi elemanlarini giriniz :\n");

    for(int i=0; i<satir; i++)
    {
        for(int j=0; j<sutun; j++)
        {
            scanf("%2d",&dizi[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<satir; i++)
    {
        for(int j=0; j<sutun; j++)
        {
            printf("%2d",dizi[i][j]);
        }
        printf("\n");
    }
    buyuk=dizi[0][0];

    for(int i=0; i<satir; i++)
    {
        for(int j=0; j<sutun; j++)
        {
            if(buyuk<dizi[i][j])
            {
                buyuk=dizi[i][j];
                i_satir=i;
                j_sutun=j;
            }
        }
    }
    printf("\ndizi[%d][%d] (buyuk sayi) = %d",i_satir,j_sutun,buyuk);

    return 0;
}
