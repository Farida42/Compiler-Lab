#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter test case:";
    cin>>t;
    while(t--)
    {
        string s;
        cout<<"Enter string:";
        cin>>s;
        int length,i,a=0,b=0,c=0,d=0,m,n;
        cout<<"Enter number:";
        cin>>m;
        n=m+2;
        length=s.size()-1;
        for(i=0; i<length; i++)
        {
            if(s[i]=='a')
                a++;
            if(s[i+n]=='b')
                b++;
            if(s[i+m+n]=='c')
                c++;
            if(s[i+n+m]=='d')
                d++;
        }

        if(a==n&&b==n&&c==m&&d==m)
            cout<<"Accepted"<<endl;
        else
            cout<<"Not Accepted"<<endl;
    }
    return 0;
}
