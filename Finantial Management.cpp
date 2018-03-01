#include <stdio.h>
int main(){
	float a[12],s,p;
	
	for(int i=0;i<12;i++){
		scanf("%f",&a[i]);
		s=s+a[i];
	}
	p=s/12;
	printf("$%.2f\n",p);
	return 0;
}
