#include "bits/stdc++.h"
#define hi cout<<
using namespace std;
int t=0;
void big()
{
    long n;
    long a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
    int flag=1,fl=1;
    string s;
    cin>>n;
    c1=n-1;
    c2=n-1;
    cin>>s;
    cout<<"Case #"<<++t<<": ";
    for(int i=0;i<((2*n)-2);i++)
    {
        if(s[i]=='S')
        {
            ++b1;
        }
        else
            ++b2;
        if((a1==b1 || a2==b2) && flag==1)
        {
            if(s[i]=='S')
            {
                cout<<"E";
                ++a2;
                fl=1;
                flag=0;
            }
            else
            {
                cout<<"S";
                ++a1;
                fl=0;
                flag=0;
            }
        }
        else
        {
            if(fl)
            {
                ++a1;
                fl=0;
                cout<<"S";
                if(a1==b1 || a2==b2)
                    flag=1;
            }
            else
            {
                ++a2;
                fl=1;
                cout<<"E";
                if(a1==b1 || a2==b2)
                    flag=1;
            }
        }
    }
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
        big();
        cout<<endl;
    }
    return 0;
}
