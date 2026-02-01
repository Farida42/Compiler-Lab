#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int i,c=0,f=0;
    for (i=0; i<s.size()-1; i++)
    {
        if (s[i]=='a')
        {
            c++;
            if(s[i+1]!='b')
            {
                f=1;
                break;
            }
        }
    }
    if(f==0 || c%2==0)
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
        return 0;
}
