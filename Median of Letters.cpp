#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	char arr[t];
	
	scanf("%s",arr);
	
	sort(arr,arr+t);
	
	printf("%c\n",arr[t/2]);
	
	
	return 0;
}
