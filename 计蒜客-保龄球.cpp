#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,q;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;++i) cin>>v[i];
	cin>>q;
	while(q--)
	{
		int recv;
		cin>>recv;
		vector<int>::iterator it=find(v.begin(),v.end(),recv);
		if(it!=v.end())
			cout<<(it-v.begin()+1)<<endl;
		else cout<<'0'<<endl;
	}
	return 0;
}
/*#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,q;
	cin>>n;
	map<int,int> rec;
	for(int i=1,recv;i<=n;++i)
		cin>>recv,rec[recv]=i;
	cin>>q;
	for(int recv;q--;)
	{
		cin>>recv;
		map<int,int>::iterator it=rec.find(recv);
		cout<<(it==rec.end()?0:it->second)<<endl;
	}
	return 0;
}
*/
