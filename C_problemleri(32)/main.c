#include <stdio.h>
#include <stdlib.h>
int N,M;
int toplam=0;
int main()
{
    printf("NxM boyutlu matris icin\nN boyutu giriniz :\n");
    scanf("%d",&N);
    printf("M boyutu giriniz :\n");
    scanf("%d",&M);
    int dizi[N][M];
    printf("dizi elemanlarini giriniz\n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d",&dizi[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%3d",dizi[i][j]);
        }
        printf("\n");
    }
    int dizi_1[M];
    for(int i=0; i<M; i++)
    {
        toplam=0;
       for(int j=0; j<N; j++)
       {
           toplam=toplam+dizi[j][i];
       }
       dizi_1[i]=toplam;
    }
    printf("\n###########\n");

    for(int i=0; i<M; i++)
    {
        printf("%3d",dizi_1[i]);
    }
    return 0;
}
