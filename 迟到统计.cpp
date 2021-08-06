#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
struct p{
	int id;
	char g[11]={0};
	char b[11]={0};
	int cishu=0;
};
bool tmp(p a,p b){
	return a.id<b.id;
}
using namespace std;
int main(){
      int n;
      cin>>n;
      int m;
      cin>>m;
      p a[n+1];
      for(int i=1;i<=n;i++){
      	cin>>a[i].id>>a[i].g>>a[i].b;
	  }
	  int q,l;
	  while(m--){
	  	cin>>q>>l;
	  	if(l>9){
	  		for(int i=1;i<=n;i++){
	  			if(a[i].id==q){
	  				a[i].cishu++;
	  				break;
					  			}
			  }
		  }
	  }
	  sort(a+1,a+1+n,tmp);
	  for(int i=1;i<=n;i++){
	  	cout<<a[i].id<<" "<<a[i].g<<" "<<a[i].b<<" "<<a[i].cishu<<endl;
	  }
}

