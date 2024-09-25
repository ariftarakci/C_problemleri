#include <stdio.h>
#include <stdlib.h>
int toplam = 1;
int taban = 1;
int a,b;
int main()
{
    permutasyon(a,b);
    return 0;
}

void permutasyon(int n,int r)
{
    printf("permutasyon icin n ve r degerlerini seciniz:\n");
    scanf("%d",&n);
    scanf("%d",&r);
    for(int i=n; i>0; i--)
    {
        toplam=toplam*i;
        //printf("\ntoplam = %d",toplam);
    }
    //printf("\ntoplam = %d",toplam);
    int fark=n-r;
    for(int i=fark; i>0; i--)
    {
        taban=taban*(i);
       // printf("\ntaban = %d",taban);
    }
    //printf("\ntaban = %d",taban);
    int perm = toplam/taban;
    printf("\npermutasyon = %d",perm);
}
