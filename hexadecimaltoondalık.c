#include<stdio.h>
#include<stdlib.h>

int main(){
	char num[100];
	int count=0;
	int i;
	int carpan;
	int toplam;

printf("Hexadecimal sekliyle sayiyi giriniz:\n");
	gets(num);
	i=0;
    while(num[i]!='\0'){
    i++;
    }
    count=i;
//	printf("%d\n",count);

	for(i=0;i<count;i++){
		if(num[i]>='0'&& num[i]<='9' ){
			num[i]=num[i]-'0';
		}else {
		num[i]=num[i]-'A'+10;
	}
}

		toplam=0;
		carpan=1;
		for(i=count-1;i>=0;i--){
			toplam =toplam +num[i]*carpan;
			carpan= carpan*16;
		}

		printf("Sayi=%d\n", toplam);
	return 0;
}
