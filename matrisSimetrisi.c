#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mtr;
    int i,j,n;
    int simetri;
    int A=0,B;

    printf("Matris boyutu giriniz:\n");
    scanf("%d",&n);
    mtr = (int **)calloc(n, sizeof(int *));
    if (mtr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
	}
	  for (i = 0; i < n; i++) {
        mtr[i] = (int *)calloc(n, sizeof(int));
        if (mtr[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
    }
	
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("Matris mtr[%d][%d]elemani giriniz:", i+1,j+1);
                scanf("%d", &mtr[i][j]);
            }
    }
    simetri=1;
    while(A<n && simetri!=0){
        B=A+1;
        while(B<n && simetri!=0){
            if(mtr[A][B]!=mtr[B][A]){
                simetri=0;
            }
            else B=B+1;
        }
        A=A+1;
    }
    if(simetri==1){
         printf("Matris simetriktir.\n");
    }
    else  printf("Matris simetrik degildir.\n");

    return 0;
    
}
