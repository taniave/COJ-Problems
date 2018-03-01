#include <stdio.h>
#include <string.h>
int main(){
	char f[10];
	int a,b;
	scanf("%s",&f);

	if(f[0]=='s'){
		scanf("%d",&a);
		printf("%d\n",a*a);
	}
	else if(f[0]=='r'){
		scanf("%d %d",&a,&b);
		printf("%d\n",a*b);
	}
	return 0;
}
