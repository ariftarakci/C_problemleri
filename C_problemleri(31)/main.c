#include <stdio.h>
#include <stdlib.h>
int N,M;
int R,L;
int K,T;
int Y,Z;
int main()
{
    printf("NxM boyutlu matris icin\n1. dizi icin N boyutunu giriniz :\n");
    scanf("%d",&N);
    printf("1. dizi icin M boyutunu giriniz\n");
    scanf("%d",&M);
    int dizi[N][M];
    printf("Diger NxM boyutlu matris icin\nNboyutunu giriniz :\n");
    scanf("%d",&R);
    printf("M boyutunu giriniz\n");
    scanf("%d",&L);
    int dizi_1[R][L];
    while(N!=R || M!=L)
    {
        printf("Dizi boyutlari esit olmali !\n");
        printf("Tekrar boyut giriniz :\n1. dizi N boyutu :\n");
        scanf("%d",&K);
        printf("1. dizi M boyutu :\n");
        scanf("%d",&T);
        printf("2. dizi N boyutu :\n");
        scanf("%d",&Y);
        printf("2. dizi M boyutu :\n");
        scanf("%d",&Z);
        N=K;
        M=T;
        R=Y;
        L=Z;
        dizi[N][M];
        dizi_1[R][L];
    }

    printf("1. dizi elemanlarini giriniz\n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d",&dizi[i][j]);
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%3d",dizi[i][j]);
        }
        printf("\n");
    }
    printf("2. dizi elemanlarini giriniz\n");
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<L; j++)
        {
            scanf("%d",&dizi_1[i][j]);
        }
    }
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<L; j++)
        {
            printf("%3d",dizi_1[i][j]);
        }
        printf("\n");
    }
    int toplam=0;
    printf("\n\n############\n\nmatris toplami : \n\n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            dizi[i][j]=dizi[i][j]+dizi_1[i][j];
        }
    }
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<L; j++)
        {
            printf("%3d",dizi[i][j]);
        }
        printf("\n");
    }


    return 0;
}
