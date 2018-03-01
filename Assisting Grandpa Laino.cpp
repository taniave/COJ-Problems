#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	
	char arr[21];
	int n,a;
	
	scanf("%s",arr);
	n=strlen(arr);
	
	a=0;
	
	for(int i=0;i<=n;i++){
		
		if(arr[i] =='i')
			a++;
	}
	
	if(a>=1)
		printf("N\n");
	
	else
		printf("S\n");
	
	return 0;
}
