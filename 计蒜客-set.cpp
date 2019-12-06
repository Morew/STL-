#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    map<int,int> rec;
    cin>>n;
    string s;
    for(int recv;n--;)
    {
        cin>>s>>recv;
        if(s=="add")	++rec[recv],cout<<rec[recv]<<endl;
        else if(s=="del")
        {
            if(rec.find(recv)!=rec.end())
           	 cout<<rec[recv]<<endl,rec[recv]=0;
            else cout<<0<<endl;
        }
        else
        {
            if(rec.find(recv)!=rec.end())
                cout<<1<<' '<<rec[recv]<<endl;
            else	cout<<"0 0"<<endl;
        }
    }
    return 0;
}


