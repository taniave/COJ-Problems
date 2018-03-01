#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
	
	double sum = 0.0, r = 0.0, m[30];;
	for(int i=0;i<30;i++){
		scanf("%lf",&m[i]);
		sum+=m[i];
	}
	 r = sum/30;
	 
	printf("%.3lf\n",sum+r);
	
	return 0;
}

