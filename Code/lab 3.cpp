#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int i,c=0,len=s.size();
        if (s[0]=='a')
        {
           for(i=1;i<len;i++){
            if(s[i]=='b')
                c++;
            }
       if(c%2)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
        return 0;
}
