#include <bits/stdc++.h>

using namespace std;
                                                       
int main(){
    
	int tc,i,j,num,sum=1;
	scanf("%d",&tc);

	for(i=0;i<tc;i++){
		scanf("%d",&num);
		sum=1;
		for(j=2;j<=num/2;j++){
			if(num%j==0){
				sum+=j;
			}
		}
		if(sum<num){
			printf("Deficient\n");
		}
		else if(sum>num){
			printf("Abundant\n");
		}
			
		else if(sum==num){
			printf("Perfect\n");
		}
			
	}

	return 0;
}
