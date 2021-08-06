#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int mp[105][105]={0};//学校，学生 
    int max1=INT_MIN;
    for(int i=0;i<n;i++){
    	cin>>a;
    	for(int j=0;j<a*10;j++){
    		mp[i][j]=1;
		}
		max1=max(max1,a); 
	}
	int k[105][105]={0};
	int  num=1,f=10000;
	for(int i=0;i<max1*10;i++){
		for(int j=0;j<n;j++){
			if(mp[j][i]){
			   if(f==j){
			   	num++;
			   	k[j][i]=num++;
			   	f=j;
			   }else{
			   	k[j][i]=num++;
			   	f=j;
			   }
			}
		} 
	}
    for(int i=0;i<n;i++){
    	cout<<"#"<<i+1<<endl;
    	for(int j=0;j<max1*10;j++){
    		if(k[i][j]){
    		cout<<k[i][j];
    		if((j+1)%10==0){
    			cout<<endl;
			}else{
				cout<<" ";
			}
			}
		}
	}
}
