#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
struct node{
	int to;//�յ�
	int next;//������iΪ�������б��У��ڼ��뵱ǰ��һ����֮ǰ���һ���ߵı�� 
}a[1000105];//��ʾ�ߵı�� 
int head[100105]; //�������йأ��洢��iΪ�������б������һ���ߵı�� 
int n,m,cnt;//cntΪ�ߵı�� 
void add(int u,int v){
	cnt++;
	a[cnt].to=v;
	a[cnt].next=head[u];
	head[u]=cnt;
}
int main(){
		cin>>n>>m;
		for(int i=0;i<m;i++){
			int u,v;
			cin>>u>>v;
			add(u,v);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<"->";
			for(int j=head[i];j;j=a[j].next){
				cout<<a[j].to<<' ';
			}
			cout<<endl;
		}
	return 0; 
}

