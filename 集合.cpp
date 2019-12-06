#include<iostream>
#include<set>
#define maxn 100
using namespace std;
int main()
{
	set<int>s;
	int n,a[maxn];
	cin>>n;
	for(int i=1;i<=2*n-1;i++){
		a[i]=i;
		s.insert(a[i]);
	}
	for(int i=1;i<=2*n-2;i++)
	{
		for(int j=i+1;j<=2*n-1;j++)
		{
			for(int k=1;k<=2*n-1;k++)
			{
				if(a[i]+a[j]==k&&i!=j)
				{
					s.erase(a[i]+a[j]);
				}
			}
		}
	}
	cout<<s.size()<<endl;;
	for(set<int>::iterator it=s.begin();it!=s.end();++it)
	{
		cout<<*it<<endl;
	}
}
