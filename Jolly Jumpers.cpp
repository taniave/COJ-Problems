#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){

	int tam, arr[3005],num = 0,n,res,c = 0,jolly = 0;

	while(scanf("%d",&tam)!=EOF){

        fill(arr,arr+tam,0);

        num = n = res = 0;

		for(int i=0;i<tam;i++){
            n = num;
            scanf("%d",&num);

            if(i>0){
		    	res = abs(num-n);
		    	arr[res] = 1;
            }

		}

    jolly = 0;
    for(int j=1;j<=tam;j++){
        if(arr[j] == 1){
            jolly++;
        }
    }

    if(jolly == tam-1)
        printf("Jolly\n");
    else
        printf("Not jolly\n");

 	}
	return 0;
}
