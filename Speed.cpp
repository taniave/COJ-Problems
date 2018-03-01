#include <stdio.h>

int main(){
	int p,im,n,c,num;
	scanf("%d",&c);
	while(c--){
		im=p=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&num);
				while(num--){
					if (num%2==0) {
						p++;
					}
					
					else{
						im++;
					}
				}
			
			   
		}
	printf("%d even and %d odd\n",p,im);
	}

return 0;
}
