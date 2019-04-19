#include "bits/stdc++.h"
#define hi cout<<
using namespace std;
int t=0;
void bye()
{
    string s,a,b="1";
    int flag=0;
    cin>>s;
    a="";
    b="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4')
        {
            a+=(char)'3';
            b+=(char)'1';
            flag=1;
        }
        else
        {
            a+=(char)s[i];
            if(flag)
                b+=(char)'0';
        }
    }
    cout<<"Case #"<<++t<<": "<<a<<" "<<b;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc;
	cin>>tc;
	while(tc--)
    {
        bye();
        cout<<endl;
    }
    return 0;
}
