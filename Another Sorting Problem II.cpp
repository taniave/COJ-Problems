#include <bits/stdc++.h>

int main(){
	int tc,s,a[51],temp,i,j,c=0,arr[51],x,l;
	
	scanf("%d",&tc);
	
	while(tc--){
		
		scanf("%d",&s);
		
		for(int k=0;k<s;k++){
			
			scanf("%d",&a[k]);
			arr[k]=a[k];
		}
		
		for(i=0;i<=s-1;i++){
			
			for(j=i+1; j<=s-1; j++){
				
				if(arr[i]>arr[j]){
					
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				
				}
			}
		}
		
		c=0;
		
		for(x=0; x<s; x++){
				a[s]=x;
				
			for(l=0; l<s; l++){
				
				arr[s]=l;
				
				if(a[x]==arr[l])
					c+=abs(x-l);
			}
		}
		printf("%d\n",c);
	}
	
	return 0;
}
