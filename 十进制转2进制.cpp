#include<iostream>
using  namespace std;
int decToBin(int dec){
	int result = 0, temp = dec, j = 1;
	while(temp){
		result = result + j * (temp % 2);
		temp = temp / 2;
		j = j * 10;
	}
	return result;
}
int main(){
	int n;
	cin>>n;
	cout<<decToBin(n); 
}
