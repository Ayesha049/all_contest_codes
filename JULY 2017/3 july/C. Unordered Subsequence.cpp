#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    if(n<=2) cout<<"0"<<endl;
    else
    {
        int a=arr[0];
        int b,c;
        int flag=0;
        int inf=0;
        int pos=1;
        int p1=0;
        int p2,p3;
        while(pos<n)
        {
            if(a!=arr[pos])
            {
                b=arr[pos];
                p2=pos;
                break;
            }
            pos++;
        }
        if(pos>=(n-1)) cout<<"0"<<endl;
        else
        {
            if(b>a) inf=1;
            for(int i=pos; i<n; i++)
            {
                c=arr[i];
                if(inf==1)
                {
                    if(c>=b)
                    {
                        b=c;
                        p2=i;
                    }
                    else
                    {
                        flag=1;
                        p3=i;
                        break;
                    }
                }
                else
                {
                    if(c<=b)
                    {
                        b=c;
                        p2=i;
                    }
                    else
                    {
                        flag=1;
                        p3=i;
                        break;
                    }
                }
            }
            if(flag==0) cout<<"0"<<endl;
            else cout<<"3"<<endl<<p1+1<<" "<<p2+1<<" "<<p3+1<<endl;
        }
    }
}
