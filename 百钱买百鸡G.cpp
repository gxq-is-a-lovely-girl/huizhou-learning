#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<=n;i++){
    	int x=4*i;
    	int y=n/4-(7*i);
    	int z=n*0.75+3*i;
    	if(x+y+z==n){
    		sum++;
		}
	} 
	cout<<sum;
    return 0;
}
