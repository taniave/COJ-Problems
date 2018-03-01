#include <stdio.h>
int main(){
 long long x,s=0;
	 
	scanf("%lld",&x);
	
		if(x<=0){
				for(x; x<=1; x++){
					s=s+x;
				}
			printf("%lld\n",s);
		}
		
	else {
			for(long long i=0;i<=x;i++){
				s=s+i;
			}
		printf("%lld\n",s);
	}
	
	return 0;
}


