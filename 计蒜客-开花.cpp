#include<iostream>
using namespace std;
int main()
{
	int n,m,maxn,minx;//n,m�ֱ��ʾ��ѧ���㽱���������㽱�Ļ�����
	int a[100000],b[100000];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<m;j++){
		cin>>b[j];
	}
	if(m>n) maxn=m,minx=n;
	else    maxn=n,minx=m;
	for(int i=0;i<maxn;i++) 
	{
		for(int j=0;j<minx;j++)
		{
			if(a[i]==b[j])
			{
				cout<<a[i]<<" ";
			}
		}
	}
}
