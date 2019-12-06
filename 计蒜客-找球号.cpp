#include<iostream>
using namespace std;
int main()
{
	int m,n,num;//m表示这堆球里有m个球，n表示这个游戏进行n次。
	int b[10000],a[100000];
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	for(int j=0;j<n;j++)
	{
		num=0;
		for(int i=0;i<m;i++)
		{
			if(b[j]==a[i])
			{
				cout<<"YES"<<endl;
				num++;
				break;
			}
		}
		if(num==0)
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
} 
