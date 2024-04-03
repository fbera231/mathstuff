#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 20
int main() {
	int sayi1,sayi2,i,j;
	printf("Birinci polinomun terim sayisini giriniz:");
	scanf("%d", &sayi1);
	printf("Ikinci polinomun terim sayisini giriniz:");
	scanf("%d", &sayi2);

	int pol1[2][MAX_TERMS];		// 2 yerine MAX_TERMS vardi
	int pol2[2][MAX_TERMS];
	// int sonuc[MAX_TERMS]={0};
	// int *ptr=sonuc;

for(i = 0; i < sayi1; i++) {
    printf("Birinci polinomun sirasiyla us(azalarak) ve katsayilarini giriniz:\n");
    for(j = 0; j < 2; j++) {
        scanf("%d", &pol1[j][i]);
    }
}

for(i = 0; i < sayi2; i++) {
    printf("Ikinci polinomun sirasiyla us (azalarak) ve katsayilarini giriniz:\n");
    for(j = 0; j < 2; j++) {
        scanf("%d", &pol2[j][i]);
    }
}
int *sonuc;
	sonuc=(int*)calloc((pol1[0][0]+pol2[0][0] +1), sizeof(int));
int us, katsayi, max=0;
for(i=0;i<sayi1;i++){

    for(j=0;j<sayi2;j++){
        us= pol1[0][i]+pol2[0][j];
        katsayi= (pol1[1][i])*(pol2[1][j]);
        if(us>max){
            max=us;
        }

        *(sonuc+us)+= katsayi;
    }
}
 for (i = max; i >= 0; i--) {
        if (sonuc[i] != 0) {
                if(i!=0){
            printf("%dx^%d+", *(sonuc+i), i);
    }else{
        printf("%d",*(sonuc+i));
    }
        }
 }
    free(sonuc);
	return 0;
}
