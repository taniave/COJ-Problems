#include <stdio.h>


void rectangle(int width, int height){
	
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			printf("*");
		}
		printf("\n");
	}	
}

void triangle(int tam){
	int esp,ast;
	
	esp = tam-1;
	ast = 1;
	
    for(int i = 0; i < tam; i++){
    	
        for(int i = 0; i < esp; i++)
        	printf(" ");
        	
        for(int i = 0; i < ast; i++)
        	printf("*");
			 
        ast += 2;
        esp--;
        printf("\n");
    }	
}

void parallelogram(int width, int height){
	
	int sp;
	
	 sp = height - 1;
	 
    for(int i = 0; i < height; i++){
    	
        for(int i = 0; i < sp; i++)
        printf(" ");
        
        for(int i = 0; i < width; i++)
        printf("*");
        
        sp--;
        printf("\n");
    }

}
	

int main(){
	
	int w,h,size,c;
	
	scanf("%d",&c);
	
	while(c != -1){
		switch(c){
			case 1:{
				scanf("%d",&size);
				triangle(size);	
				break;
			}
			case 2:{
				scanf("%d %d",&w,&h);
				parallelogram(w,h);
				break;
			}
			case 3:{
				scanf("%d %d",&w,&h);
				rectangle(w,h);
				break;
			}
		}
		scanf("%d",&c);
		if(c!=-1)
		 printf("\n");
		
	}
	
	
	return 0;
}
