#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
	int tc, n, m, v, win=0 , sum[5];
	
	scanf("%d",&tc);
	
	while(tc--){
		
		scanf("%d %d",&n,&m);
		
		/*for(int x=0; x<n; x++)
			sum[x]=0;*/
		
		for(int j=0;j<m;j++){
			
			for(int i=0; i<n;i++){
				scanf("%d",&v);
				sum[i] += v;
				//printf("%d",&sum[i]);
			}
		}
		
		
		win=0;
		for(int i=0;i<n;i++){
			
			if(sum[win]>sum[i]){
				win=i;		
			}
			
			else{
				win=i+1;
			}
		}
		printf("%d\n",win);
			
	}
	
	return 0;
}
