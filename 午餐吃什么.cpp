#include<iostream>
#include<algorithm>
using namespace std;
struct p{
	char a[20];
	int jia;
	int like;
};
bool tmp(p a,p b){
	return a.jia<b.jia;
}
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	p a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].jia>>a[i].like;
	}
	sort(a+1,a+n+1,tmp);
	int flag=-1,x=-1;
	 for(int i=1;i<=n;i++){
	 	if(a[i].jia<=m&&a[i].like>=flag){
	 		flag=a[i].like;
	 		x=i;
		 }
	 }
	 if(x==-1){
	 	cout<<"...>_<...";
	 }else{
	 	cout<<a[x].a<<" "<<a[x].jia<<" "<<a[x].like; 
	 }
}
