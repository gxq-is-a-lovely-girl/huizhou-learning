#include<iostream>
#include<cstdio>
using namespace std;
void hn(int n,string a,string b,string c){
	if(n>0){
		hn(n-1,a,c,b);//��n-1���̴�A��ͨ��C��ȥ��B�� 
		cout<<a<<" -> "<<c<<endl;//���Ű��������Ǹ����ƶ���Cע 
		hn(n-1,b,a,c);//���B��������ͨ��A�������ص�C����� 
	}
}
int main(){
	int n;
	cin>>n;
	hn(n,"A","B","C");
} 
