#include <stdio.h>
#include <stdlib.h>
int sayi;
int eleman;
int main()
{
    printf("Bir sayi giriniz :\n");
    scanf("%d",&sayi);
    printf("dizi icin eleman sayisi giriniz :\n");
    scanf("%d",&eleman);
    printf("elemanlari giriniz :\n");
    int dizi[eleman];
    int sayac=0;
    int gecici;
    int index;
    for(int i=0; i<eleman; i++)
    {
        scanf("%d",&dizi[i]);
    }
    int dizi_1[eleman];
    for(int i=0; i<eleman; i++)
    {
        gecici = sayi-dizi[i];
        gecici= abs(gecici);
        dizi_1[sayac]=gecici;
        sayac++;
    }
    int kucuk=dizi_1[0];
    for(int i=0; i<eleman; i++)
    {
        if(dizi_1[i]<kucuk)
        {
            kucuk=dizi_1[i];
            index=i;
        }
    }
    printf("\n\n");
    printf("dizinin sectiginiz sayiya en yakin olan sayisi : %d",dizi[index]);
    return 0;
}
