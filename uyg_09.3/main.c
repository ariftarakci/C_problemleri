#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[3][3];
    printf("matris icin 3 sayi giriniz :\n");
    for(int i=0;i<3;i++){
        scanf("%d",&matris[1][i+1]);
    }
    printf("matris icin 3 sayi giriniz :\n");
    for(int i=0;i<3;i++){
        scanf("%d",&matris[2][i+1]);
    }
    printf("matris icin 3 sayi giriniz :\n");
    for(int i=0;i<3;i++){
        scanf("%d",&matris[3][i+1]);
    }
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            printf("%d",matris[i][j]);
        }
        printf("\n");
    }

    /*if(matris[1][2] == matris[2][1] && matris[2][3] == matris[3][2]){
        printf("bu bir simetrik matristir");
    }
    else {
        printf("bu bir simetrik matris degildir");
    }*/
    printf("-----\n\n %d \n",matris[3][2]);
    printf("-----\n\n %d \n",matris[3][3]);
    return 0;
}
