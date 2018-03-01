#include <cstdio>
#include <cstdlib>

int main(){
	int c,b[10];
	float sum=0.0;
	
	scanf("%d",&c);
	
	while(c--){
		
		sum=0.0;
		for(int i=0;i<10;i++){
			scanf("%d",&b[i]);
			sum+=b[i];
		}
		printf("%.3f\n",sum*.85);
			
	}
	
	return 0;
}
