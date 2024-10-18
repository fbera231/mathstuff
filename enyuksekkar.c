#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i,j;
    int temp;
    int alis,satis;
    int kar=0;

    printf("Gun sayisi giriniz: \n");
    scanf("%d", &N);

    int fiyat[N];

    for(i = 0; i < N; i++) {
        printf("Gun %d icin fiyati giriniz: ", i + 1);
        scanf("%d", &fiyat[i]);
    }

    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){

            temp= fiyat[j]-fiyat[i];
            if(temp>=kar){
            kar=temp;
            alis=i+1;
            satis=j+1;
            }
        }
        }

    printf("Alinan gun:%d. gun %d lira \n",alis, fiyat[alis-1] );
    printf("Satilan gun:%d. gun %d lira \n",satis, fiyat[satis-1] );
    printf("Kar:%d lira",kar );


         return 0;
    }


