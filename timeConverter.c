#include <stdio.h>
#include <stdlib.h>

int main()
{
	short int play=1;
	long x,a,b,c;
	int seconds,hours,minutes;

	while(play){
	printf("1. Do you want to convert x seconds to days, hours,minutes and seconds format?\n");
	printf("2. Or do you want to calculate how many seconds do x days, a hours, b minutes and c seconds make?\n");	
	printf("Choose 1 or 2: ");
	scanf("%d", &play);
		if(play== 1){
	printf("Write the time in seconds: ");
    scanf("%ld",&a);
	
	x= a/86400; //how many days
	a%=86400;
    
	b=a/3600;	// how many hours
    a%=3600;

    c=a/60;		// how many minutes
    a%=60;

   printf("\n Given time is:");
   printf("\n %d days",x);
   printf("\n %d hours",b);
   printf("\n %d minutes",c);
   printf("\n %d seconds",a);
   printf("______________________________________________________________\n");
   
		}
		else if(play== 2)
		{
			printf("Please write x,a,b,c:(days, hours, minutes, seconds)\n");
			scanf("%ld %ld %ld %ld", &x, &a, &b, &c);
			long answer= 86400*x +3600*a + 60*b +c;
			printf("%ld days %ld hours %ld minutes %ld seconds is %ld seconds.\n", x,a,b,c, answer);  
		}else
		{
			printf("There is no option for the key you pressed.Wanna try typing again?\n");
		}
		printf(1Do you want to make another calculation?\n");
   		printf("Press 0 to exit or choose the calculation type\n");
   		scanf("%d", &play);
	}



    return 0;
}
