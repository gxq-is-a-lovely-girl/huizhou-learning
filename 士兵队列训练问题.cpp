#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		queue<int>que;
		int b=1,m=2,c;
		cin>>a;
		c=a; 
		for(int j=1;j<=a;j++){
			que.push(j);
		}
		while(que.size()>3){
			int y=c;
			for(int k=1;k<=y;k++){
				if(k%m==0){
					que.pop();
					c--;
				}
				else{
					que.push(que.front());
					que.pop();
				}
				
			}
			m=5-m;
		}
		while(!que.empty()){
			cout<<que.front()<<" ";
			que.pop();
		}
		cout<<endl;
	}

	return 0;
}
