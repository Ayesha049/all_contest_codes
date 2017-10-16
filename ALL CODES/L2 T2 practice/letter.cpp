#include<iostream>
using namespace std;

int main()
{
    char arr[51][51];
    int mni=100,mnj=100,mxi=-1,mxj=-1;
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='*')
            {
                if(mni>i)
                    mni=i;
                if(mnj>j)
                    mnj=j;
                if(mxi<i)
                    mxi=i;
                if(mxj<j)
                    mxj=j;
            }
        }
    }
    for(int i=mni;i<=mxi;i++)
    {
        for(int j=mnj;j<=mxj;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
