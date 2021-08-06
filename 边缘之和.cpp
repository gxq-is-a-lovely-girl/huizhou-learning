#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[100][100];
int main()
{
int m,n;
memset(a,0,sizeof(a));
scanf("%d %d",&m,&n);
int sum=0;
for(int i=1;i<=m;i++)
{
for(int j=1;j<=n;j++)
{
cin>>a[i][j];
}
}
for(int i=1;i<=m;i++)
{
for(int j=1;j<=n;j++)
{
if(i==1||i==m||j==1||j==n)
sum+=a[i][j];
}
}
printf("%d",sum);
return 0;
}

