#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int num,tc,s,i,root;
	
	scanf("%lld",&tc);
	
	while(tc--){
		
		scanf("%lld",&num);
		
		root = sqrt(num); 
		
		s=0;
		
		for(i=1; i<=root; i++){
			
			if(num % i == 0){
				
				s += i;
				  
				  if( (num/i) != i )
				  
				   s += num/i;
			}
		}
		printf("%lld\n", s-num);
	}
	return 0;
}

