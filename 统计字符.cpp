#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int la=a.length();
	int later=0;
	int num=0;
	int ale=0;
	for(int i=0;i<la;i++){
		if(a[i]=='?'){
			break;
		}
		else if('a'<=a[i]&&a[i]<='z'||'A'<=a[i]&&a[i]<='Z'){
			later++;
		}
		else if('0'<=a[i]&&a[i]<='9'){
			num++;
		}else{
			ale++;
		}
	}
	cout<<"Letters="<<later<<endl;
	cout<<"Digits="<<num<<endl;
	cout<<"Others="<<ale;
}
