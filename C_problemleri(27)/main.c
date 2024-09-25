#include <stdio.h>
#include <stdlib.h>
int a,b;
int main()
{
    kombinasyon(a,b);
    return 0;
}

void kombinasyon(int n,int r)
{
    printf("kombinasyon icin n sayisi giriniz :\n");
    scanf("%d",&n);
    printf("kombinasyon icin r sayisi giriniz :\n");
    scanf("%d",&r);
    int fark = n-r;
    int payda=1;
    int taban=1;
    int carpan=1;
    //
    for(int i=n; i>0; i--)
    {
        payda=payda*i;
    }
    for(int i=fark; i>0; i--)
    {
        taban=taban*i;
    }
    for(int i=r; i>0; i--)
    {
        carpan=carpan*i;
    }
    int komb=payda/(carpan*taban);
    printf("kombinasyon sonucu = %d",komb);
}
