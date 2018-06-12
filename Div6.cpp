#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int tc,tam,suma,ban;
	char n[1003];
	
	scanf("%d",&tc);
	
	while(tc--){
		scanf("%s",n);
		
		tam=strlen(n);
		suma=0;
		
		if((n[tam-1]-'0')%2==0){
			ban=1;	
		}
		
		else{
			ban=0;
		}
		
		for(int i=0;i<tam;i++){
			suma+=n[i]+'0';
		}
		
		if(suma%3==0 && ban==1)
			printf("YES\n"); 
		else
			printf("NO\n");
			
	}
	
	return 0;
}
