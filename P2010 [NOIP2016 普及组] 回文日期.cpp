#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
bool run(int n){
	if(n%4==0&&n%100!=0||n%400==0){
		return true;
	}else{
		return false;
	}
}
bool tmp(int n){
	int a[100]={0};
	int i=0;
	while(n){
		a[++i]=n%10;
		n/=10;
	}
	for(int j=1;j<=i;j++){
		if(a[j]!=a[i-j+1]){
			return false;
		}
	}
	return true;
}
int main(){
	int a,b;
	cin>>a>>b;
	int sum=0;
	for(int i=a;i<=b;i++){
		int nian=i/10000;
		int yue=i/100%100;//20211056
		int ri=i%100;
		if(yue==4||yue==9||yue==11||yue==6){
		if(ri>30){
			continue;
		}
		}
		if(yue==1||yue==3||yue==5||yue==7||yue==8||yue==10||yue==12){
			if(ri>31){
				continue;
			}
		}
		if(yue>12||yue==0||ri==0)continue;
		if(run(nian)==true){
			if(yue==2){
			
			if(ri>29){
				continue;
			}
			}
		}
		
		if(run(nian)==false&&yue==2&&ri>28)continue;
		
		if(tmp(i)){
			sum++;
		}
		
	}
	cout<<sum;
}

