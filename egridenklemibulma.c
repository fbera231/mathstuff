#include <stdio.h>

int main()
{
    float x1,x2,y1,y2;
    float m,n;

    printf("Birinci noktanin x koordinati giriniz:\n");
    scanf("%f",&x1);
    printf("Birinci noktanin y koordinati giriniz:\n");
    scanf("%f",&y1);
    printf("Ikinci noktanin x koordinati giriniz:\n");
    scanf("%f",&x2);
    printf("Ikinci noktanin y koordinati giriniz:\n");
    scanf("%f",&y2);

    m=(y2-y1)/(x2-x1);
    n= y2- m *x2;
    if(m!=1&&n!=0){
        printf("Dogru denklemi:\ny=%.3fx+%.3f\n",m,n);
        }
        else if(m!=1&&n==0){
         printf("Dogru denklemi:\ny=%.3fx\n",m);
        }
        else  printf("Dogru denklemi:\ny=x+%.3f\n",n);

    return 0;

}
