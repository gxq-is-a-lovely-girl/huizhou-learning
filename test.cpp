#include<iostream>
#include<algorithm>
using namespace std;
int n,m[105],s[50000]={0},tmp=0,j=1,cnt;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i];
		m[i]*=10;
		tmp+=m[i];
	}
	cnt=tmp;
	while(tmp){
		for(int i=1;i<=n;i++){
			if(m[i]!=0){
				s[j]=i;
				j++;
				tmp--;
				m[i]--;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<"#"<<i<<endl;
		tmp=1;
		for(int j=1;j<=10005;j++){
			if(s[j]==i && s[j-1]!=i){
				cout<<j<<" ";
				if(tmp%10==0)cout<<endl;
				tmp++;
			}else if(s[j]==i && s[j-1]==i){
				cout<<j+1<<" ";
				if(tmp%10==0)cout<<endl;
				tmp++;
			}
		}
	}
	return 0;
}
