#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mn=INFINITY;
    int mx=-INFINITY;
    int mnid=-1;
    int mxid=-1;
    int arr[n+1];
    int lsum=0;
    int rsum=0;
    int mna=-1,mxa=-1,mnb=-1,mxb=-1;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        lsum+=a;
        rsum+=b;
        arr[i]=a-b;
        if(arr[i]>mx)
        {
            mx=arr[i];
            mxid=i;
            mxa=a;
            mxb=b;
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
            mnid=i;
            mna=a;
            mnb=b;
        }
    }

    //cout<<lsum<<"  "<<rsum<<endl;
    if(mnid==mxid)
        cout<<"0"<<endl;
    else
    {
        int aa=abs(lsum-rsum);
        int mnnl=lsum-mna;
        mnnl+=mnb;

        int mnnr=rsum-mnb;
        mnnr+=mna;
        int bb=abs(mnnr-mnnl);
        //cout<<mnnr<<" "<<mnnl;

        //cout<<"mn   "<<mna<<" "<<mnb<<endl;
        //cout<<"mx  "<<mxa<<" "<<mxb<<endl;
        int mxxl,mxxr;
        mxxl=lsum-mxa;
        mxxl+=mxb;
        mxxr=rsum-mxb;
        mxxr+=mxa;
        int cc=abs(mxxl-mxxr);
        int maxx=max(aa,bb);
        maxx=max(maxx,cc);

        //cout<<aa<<" "<<bb<<" "<<cc<<endl<<mxid<<" "<<mnid<<endl;;
        if(maxx==aa)
            cout<<"0"<<endl;
        else if(maxx==bb)
            cout<<mnid<<endl;
        else
            cout<<mxid<<endl;

    }
}
