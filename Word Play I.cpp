#include <stdio.h>

int main(){
	
	float l,c,r=0.0,max=0;
	int n;

	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		r=0.0;
		scanf("%f %f",&l,&c);
		r=((l*0.7)+(c*0.3));
		if(r > max )
			max=r;
			
	}	
		
		printf("%.2f\n",max);
		
	return 0;
}
