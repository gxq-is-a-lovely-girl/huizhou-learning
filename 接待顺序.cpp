#include<iostream>
#include<algorithm>
using namespace std;
struct p{
	char a[20];
	int old;
	int num;
};
bool tmp(p a,p b){
   return a.num<b.num;
}
int main(){
	int n;
	cin>>n;
	p a[n+1];
	int k=1000000;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].old>>a[i].num;
		if(a[i].old>60) {
			a[i].num-=k;

		}
	}
	sort(a+1,a+1+n,tmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].a<<endl;
	}
}
