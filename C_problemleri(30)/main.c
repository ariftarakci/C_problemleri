#include <stdio.h>
#include <conio.h>  // Bu kütüphane sadece Windows üzerinde çalýþýr, farklý bir kütüphane kullanmanýz gerekebilir.

int main() {
    char tus;
    printf("baslamak icin bir tusa basiniz\n");
    while (1) {
        int N,M;
        if(_kbhit()){
        tus = _getch();

        if (tus == 27) {  // 27 ASCII kodu ESC tuþunu temsil eder
            printf("Program sonlandiriliyor...\n");
            return 0;  // Döngüden çýk ve programý sonlandýr
        }

        printf("NxM boyutlu dizi icin N boyutunu giriniz:\n");
        scanf("%d",&N);
        printf("M boyutunu giriniz\n");
        scanf("%d",&M);
        int dizi[N][M];
        while(N!=M)
        {
            printf("N ve M esit olmali\n");
            int R,L;
            printf("NxM boyutlu dizi icin N boyutunu giriniz:\n");
            scanf("%d",&R);
            printf("M boyutunu giriniz\n");
            scanf("%d",&L);
            N=R;
            M=L;
            int dizi[N][M];
        }
        printf("dizi elemanlarini giriniz:\n");
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
        int toplam=0;
        for(int i=0; i<N; i++)
        {
            toplam=toplam+dizi[i][i];
        }
        printf("kosegen matris toplami = %d\n#########\n",toplam);
        printf("cikmak icin 'esc' tusuna, deva etmek icin 'enter' tusuna basiniz\n");
    }
    }

    return 0;
}
