#include<bits/stdc++.h>
using namespace std;

int mn(int a,int b)
{
    if(a<=b)
        return a;
    return b;
}

int mx(int a,int b)
{
    if(a>=b)
        return a;
    return b;
}

int main()
{
    int a1,a2;
    cin>>a1>>a2;
    if(a1==1 && a2==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int m=mn(a1,a2);
        int mm=mx(a1,a2);
        int cnt=0;
        while(1)
        {
            m+=1;
            mm-=2;
            int temp=mn(m,mm);
            int temp2=mx(m,mm);
            m=temp;
            mm=temp2;
            cnt++;
            if(m<=0)
                break;

        }
        cout<<cnt<<endl;
    }

}
