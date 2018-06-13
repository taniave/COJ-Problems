#include <bits/stdc++.h>

int main(){
	long long int tc, num,x,N;

	scanf("%lld",&tc);

	for(int i=0;i<tc;i++){

		scanf("%lld",&num);

		num=num*2;

		x = sqrt(num);
		
		N = (x*x) + x;

		if(N == num)
			printf("%d\n",x);
		else
			printf("-1\n");

	}

	return 0;
}
