#include <stdio.h>
int main(){
	int a[1000],n,j,temp;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	
	for(int i=0;i<n;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
	}
	
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	
	
	
	return 0;
}
