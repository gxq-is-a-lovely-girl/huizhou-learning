#include<iostream>
#include<cstdio>
using namespace std;
void hn(int n,string a,string b,string c){
	if(n>0){
		hn(n-1,a,c,b);//将n-1个盘从A柱通过C柱去到B柱 
		cout<<a<<" -> "<<c<<endl;//接着把最下面那个盘移动到C注 
		hn(n-1,b,a,c);//最后将B柱的盘子通过A柱空柱回到C柱完成 
	}
}
int main(){
	int n;
	cin>>n;
	hn(n,"A","B","C");
} 
