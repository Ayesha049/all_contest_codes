#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ch=0,bc=0,bk=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(i%3==0) bk+=a;
        else if(i%3==1) ch+=a;
        else bc+=a;
    }
    int mx=max(ch,bc);
    mx=max(mx,bk);
    if(mx==ch) cout<<"chest"<<endl;
    else if(mx==bc) cout<<"biceps"<<endl;
    else if(mx==bk) cout<<"back"<<endl;
}


