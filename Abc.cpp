#include <stdio.h>
#include <string.h>

int main(){
	int j,s=3,temp,a[3];
	char c[3],f;
	
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	getchar();
		scanf("%s",c);
	
	for(int i=0;i<s;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
	}
	
	if(c[0] == 'A'){
		if(c[1] == 'B')
		printf("%d %d %d\n", a[0], a[1], a[2]);
		else if(c[1] == 'C')
		printf("%d %d %d\n", a[0], a[2], a[1]);
	}
	else if(c[0] == 'B'){
	if(c[1] == 'A')
		printf("%d %d %d\n", a[1], a[0], a[2]);
		else if(c[1] == 'C')
		printf("%d %d %d\n", a[1], a[2], a[0]);
	}

	else if(c[0] == 'C'){
		if(c[1] == 'A')
		printf("%d %d %d\n", a[2], a[0], a[1]);
		
		else if(c[1] == 'B')
		printf("%d %d %d\n", a[2], a[1], a[0]);				
		}
	
	return 0;
}
