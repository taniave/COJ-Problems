#include <stdio.h>
#include <string.h>

int main(){
	int n,x=0,y=0;
	char c[120];
	scanf("%d %s",&n,c);
	for(int i=0;i<n;i++){
		if(c[i]>='a' && c[i]<='z'){
			x++;
		}
		else if(c[i]>='A' && c[i]<='Z'){
			y++;
		}
	}
	printf("%d %d\n",y,x);
	
	return 0;
}
