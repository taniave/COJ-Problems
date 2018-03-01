#include <cstdio>
#include <algorithm>
using namespace std;
int main(){

int ele, w,tc,i,peso[105000],c=0,sum;

scanf("%d",&tc);

while(tc--){
    scanf("%d %d",&ele,&w);

    sum = c = 0;


    for(i=0;i<ele;i++){

        scanf("%d",&peso[i]);//sum+=arr[i];
    }
    sort(peso,peso+ele);

    for(i=0;i<ele;i++){
        sum+=peso[i];
        if(sum<=w){
            c++;
        }
        else
            break;

    }

    printf("%d\n",c);


}

return 0;
}

