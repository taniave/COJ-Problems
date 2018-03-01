#include <stdio.h>
int main(){
	int l,r,i;
	
	while(scanf("%d %d",&l,&r) && (l!=0)){
		i=l+r;
		if(l!=0){
			printf("%d\n",i);	
		}
	}

	return 0;
}
