#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[1000000];
	memset(a,0,sizeof(a));
	scanf("%s",&a);
	int x=strlen(a);
	for(int i=x-1;i>=0;i--){
		if(a[i]=='0'&&a[i+1]=='0'&&a[i+1]=='\0'){
			continue;
		}else{
			cout<<a[i];
		}
	}
}
