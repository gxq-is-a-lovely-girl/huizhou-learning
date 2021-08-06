#include<iostream>
using namespace std;
int  main(){
	bool a[9];
	int z=0,f=0;
	for(int i=1;i<=8;i++){
		cin>>a[i];
		if(a[i]==1){
			z++;
		}else{
			f++;
		}
	}
	int sum=0;
	if(z>f){
		while(z!=f){
			z-=1;
			f+=1;
			sum++;
		}
	}
	else if(z<f){
		while(z!=f){
		z+=1;
		f-=1;
		sum++;
	}
	}
	else{
		cout<<0;
		return 0;
	}
	if(sum%2==1){
		cout<<sum/2+1;
	}else{
			cout<<sum/2;
	}

} 
