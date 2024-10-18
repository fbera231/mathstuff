#include <stdio.h>
#include <stdlib.h>

int main()
{
  int yaricap;
  float cevre,alan;
  float pi= 3.14;

  printf("daire yaricapi giriniz\n");
  scanf ("%d",&yaricap);


  alan=pi*yaricap*yaricap;
  printf("Dairenin alani:%.2f\n",alan);

  cevre=pi*yaricap*2;
  printf("Dairenin cevresi:%.2f\n",cevre);

    return 0;
}

