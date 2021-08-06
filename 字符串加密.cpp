#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char a[51]={0};
	gets(a);
	int i;
  for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='A'&&a[i]<='W'||a[i]>='a'&&a[i]<='w')
		   a[i]=a[i]+3;
		else
		   a[i]=a[i]-23;
	}

    

for(i=0;i<strlen(a);i++)
    {
    	if(a[i]>='a'&&a[i]<='z')
    	   a[i]=a[i]-('a'-'A');
    	else
		   a[i]=a[i]+('a'-'A');   
	}

	for(int i=strlen(a)-1;i>=0;i--){
		cout<<a[i];
	}	
}
