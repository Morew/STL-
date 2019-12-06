#include<iostream>
#include<vector>
using namespace std;
int main() 
{	
	vector<int>a;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		a.push_back(i);
	}
	int sum=1;
	while(a.size()>1)
	{
		vector<int>::iterator it;
		for(it = a.begin();it!=a.end();it++)
		{
			if(sum%k==0||sum%10==k)
			{
				a.erase(it);
				it--;
			}
			sum++;
		}	
	}
	cout<<a[0]<<endl;
}
