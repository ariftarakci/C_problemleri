#include <stdio.h>
#include <stdlib.h>
int N,M;
int onay=1;
//int onay_1=0;
int main()
{
    printf("NxN boyutlu matris icin N boyutu giriniz :\n");
    scanf("%d",&N);
    printf("N boyutu giriniz :\n");
    scanf("%d",&M);
    if(N!=M)
    {
        printf("boyutlar esit olmali !\n");
        int R,L;
        printf("N boyutu giriniz :\n");
        scanf("%d",&R);
        printf("N boyutu giriniz :\n");
        scanf("%d",&L);
        N=R;
        M=L;
    }
    int dizi[N][M];
    printf("elemanlari giriniz :\n");
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
     for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(dizi[i][j]!=dizi[j][i])
            {
                onay=0;
                break;
            }
        }
        if (onay!=1) {
            break;
        }
    }
     if(onay==1)
    {
        printf("\nBu bir simetrik matristir\n");
    }
    else if(onay!=1)
    {
        printf("\nBu bir simetrik matris degildir\n");
    }

    return 0;
}



/*int a=0;
    int b=1;
    int c=1;
    int d=2;

    for(int i=0; i<N; i++)
    {
            if(dizi[a][b]==dizi[b][a])
            {
                if(b==N)
                {
                onay = 1;
                }
                b++;
            }
            else if(dizi[a][b]!=dizi[b][a])
            {
                onay = 0;
            }
    }
    for(int i=0; i<N; i++)
    {
            if(dizi[c][d]==dizi[d][c])
            {
                if(d==N)
                {
                     if(dizi[c][d]==dizi[d][c])
                        {
                          if(c==N-1)
                          {
                              onay_1=1;
                          }
                          c++;
                        }
                }
                d++;
            }
            else if(dizi[c][d]!=dizi[d][c])
            {
                onay = 0;
            }
    }
    if(onay==1 && onay_1==1)
    {
        printf("\nBu bir simetrik matristir\n");
    }
    else if(onay!=1 || onay_1!=1)
    {
        printf("\nBu bir simetrik matris degildir\n");
    }
    else
    {
        printf("\ndscsdsdc\n");
    }*/
