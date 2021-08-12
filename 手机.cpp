#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#define s long long
using namespace std;
char one[9]={"adgjmptw"};
char two[9]={"behknqux"};
char three[9]={"cfilorvy"};
int main(){
	char a[300]={0};
	gets(a);
	int sum=0;
	for(int i=0;i<strlen(a);i++){
		for(int j=0;j<9;j++){
			if(one[j]==a[i]){
				sum++;
				break;
			}else if(two[j]==a[i]){
				sum+=2;
				break;
			}else if(three[j]==a[i]){
			   sum+=3;
			   break;
			}else if(a[i]=='s'||a[i]=='z'){
				sum+=4;
				break;
			}else if(a[i]==' '){
				sum++;
				break;
			}
		}
	}
	cout<<sum;
}

