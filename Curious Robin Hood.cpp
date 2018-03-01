#include <bits/stdc++.h>

using namespace std;

int fen[100001];

void add(int index, int lim, int num){
	while(index <= lim){
		fen[index] += num;
		index += index & (-index);
	}
}

int query(int index){
	int res = 0;
	while(index){
		res += fen[index];
		index -= index & (-index);
	}
	return res;
}

int main(){
	
	int sack[100001];
	int tc, n,q,op,money,index,inf,sup,up,sum,c=1;
	
	scanf("%d",&tc);
	
	for(int j=1;j<=tc;j++){ // casos de prueba
		
		fill(fen,fen+100001,0);
		
		scanf("%d %d",&n,&q);
		
		for(int i=1;i<=n;i++){
			scanf("%d",&sack[i]);
			add(i,n,sack[i]);
		}
		printf("Case %d:\n",j);
		
		for(int i=1;i<=q;i++){
			scanf("%d",&op);
			
			if(op == 1){
				scanf("%d",&index);
				printf("%d\n",sack[index+1]);
				add(index+1, n,-sack[index+1]);
				sack[index+1]=0;
			}
			else if(op == 2){
				scanf("%d %d",&index,&money);
				sack[index+1] += money;
				add(index+1, n, money);
			}
			else{
				scanf("%d %d", &inf,&sup);
				sum = query(sup+1)-query(inf);
				printf("%d\n",sum);
			}
		}
	}
	
	return 0;
}
