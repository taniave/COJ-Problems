#include <stdio.h>

int main(){
	int num,a=0;
	scanf("%d",&num);
	while(num){
		num=num/2;
		a++;
	}
	printf("%d\n",a);
	return 0;
}
