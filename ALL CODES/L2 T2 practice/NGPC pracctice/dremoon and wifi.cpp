#include<bits/stdc++.h>
using namespace std;

double fact1(int a,int b)
{
    double ans=1;
    for(int i=a+1; i<=b; i++)
    {
        ans*=i;
    }
    return ans;

}

double fact2(int a)
{
    double ans=1;
    for(int i=2; i<=a; i++)
    {
        ans*=i;
    }
    return ans;
}

int main()
{
    double ans;

    string s1,s2;
    cin>>s1>>s2;
    int pls=0;
    int mns=0;
    int p2=0;
    int m2=0;
    int ques=0;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]=='+')
            pls++;
        if(s1[i]=='-')
            mns++;
        if(s2[i]=='+')
            p2++;
        if(s2[i]=='-')
            m2++;
        if(s2[i]=='?')
            ques++;
    }
    //cout<<pls<<" "<<mns<<" "<<p2<<" "<<m2<<" "<<ques<<endl;



    if((p2>pls) || (m2>mns))
        ans=0;
    else
    {
        double aa=1;
        for(int i=1; i<=ques; i++)
            aa*=2;
        pls=pls-p2;
        mns=mns-m2;

        int mx=max(pls,mns);
        int mn=min(pls,mns);

        //cout<<pls<<" "<<mns<<endl;

        //cout<<mx<<" "<<mn<<" "<<aa<<endl;

        double xx=fact1(mx,ques);
        xx=xx/fact2(mn);

        ans=xx/aa;

        //cout<<fact1(mx,ques)<<" "<<fact2(mn)<<" "<<xx<<endl;
    }

    printf("%.12lf\n",ans);
}
