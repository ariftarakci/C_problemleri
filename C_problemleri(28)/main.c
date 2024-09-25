#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taban;
    int tavan;
    us_alma(taban,tavan);
    return 0;
}

void us_alma(int a,int b)
{
    printf("ussunu alacaginiz sayiyi giriniz :\n");
    scanf("%d",&a);
    printf("us degerini giriniz :\n");
    scanf("%d",&b);
    int us=1;
    for(int i=b; i>0; i--)
    {
        us=us*a;
    }
    printf("sonuc = %d",us);
}
