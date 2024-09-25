#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[3][3];
    /*printf("1utfen matrisin ilk satiri icin 3 sayi giriniz :\n");
    for(int i=0;i<3;i++){
        scanf("%d",&matris[1][i+1]);
    }
    printf("1utfen matrisin ikinci satiri icin 3 sayi giriniz :\n");
    for(int j=0;j<3;j++){
        scanf("%d",&matris[2][j+1]);
    }*/
    printf("1utfen matrisin ucuncu satiri icin 3 sayi giriniz :\n");
    for(int k=0;k<3;k++){
        scanf("%d",&matris[3][k+1]);
    }
    for(int l=1;l<=3;l++){
        for(int m=1;m<=3;m++){
            printf("%d",matris[l][m]);
        }
        printf("\n");
    }
    return 0;
}
