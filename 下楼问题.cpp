#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	z=z-15;
	if(z>=x+5||z>=y+10){
		cout<<"on time";
}
else if(z>=17){
	cout<<"on time";
}
else{
	cout<<"late";
}
}
