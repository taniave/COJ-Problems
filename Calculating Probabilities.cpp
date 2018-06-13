#include <stdio.h>
int main(){
	int c;
	float a,b,p;
	scanf("%d",&c);
	for(int i=0;i<c;i++){
		scanf("%f %f",&a,&b);
		p=a/b;
		printf("%.2f\n",p);
	}
	return 0;
}
