#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,sumtime,i,j,k,sum2=0,sum3;
    cin>>d>>sumtime;
    int low[d],high[d],ans[d];
    for(i=0; i<d; i++)
    {
        cin>>low[i]>>high[i];
        ans[i]=low[i];
        sum2+= low[i];
    }
    sum3=sumtime-sum2;
    if(sum3<0) cout<<"NO";
    else
    {

        for(i=0; i<d; i++)
        {
            int diff=high[i]-low[i];
            if(sum3<=diff)
            {
                ans[i]=ans[i]+sum3;
                //break;
                sum3=0;
                break;
            }
            else if(sum3>diff)
            {
                ans[i]=high[i];
                sum3-=diff;
            }

        }

        if(sum3==0)

        {
            cout<<"YES"<<endl;
            for(i=0; i<d; i++)
            {
                cout<<ans[i]<<" ";
            }
        }
        else cout<<"NO";
    }
}
