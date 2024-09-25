#include <stdio.h>
#include <stdlib.h>

int boyut;
int main()
{
    printf("dizi boyutu giriniz :\n");
    scanf("%d",&boyut);
    printf("dizi elemanlarini giriniz :\n");
    int dizi[boyut];
    for(int i=0; i<boyut; i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("hangi sayidan baslamak istersiniz ?\n");
    int baslangic;
    scanf("%d",&baslangic);
    int gecici;
    for(int i=0; i<boyut; i++)
    {
        for(int j=0; j<boyut-1; j++)
        {
            if(dizi[j+1]<dizi[j])
            {
                gecici=dizi[j+1];
                dizi[j+1]=dizi[j];
                dizi[j]=gecici;
            }
        }
    }
    printf("\n");
    for(int i=0; i<boyut; i++)
    {
        printf("%5d",dizi[i]);
    }







    return 0;
}
