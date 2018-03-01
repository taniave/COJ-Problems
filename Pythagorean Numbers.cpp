#include <stdio.h>
#include <math.h>

int main (){
	int a, b, c, r;
	while(scanf("%d",&a) && a != 0){
		scanf("%d %d",&b, &c);
		
		if(a>b && b>c){
			r = pow(b,2) + pow(c,2);
			if(r == pow(a,2))
				printf("right\n");
			else
				printf("wrong\n");		
		}
		else if(b>a && b>c){
			r = pow(a,2) + pow (c,2);
			if(r == pow(b,2))
				printf("right\n");
			else
				printf("wrong\n");
		}
		else if(c>a && c>b){
			r = pow(a,2) + pow (b,2);
			if(r==pow(c,2))
				printf("right\n");
			else
				printf("wrong\n");	
		}
		
		else
			printf("wrong\n");
		
	}
	
	return 0;
}
