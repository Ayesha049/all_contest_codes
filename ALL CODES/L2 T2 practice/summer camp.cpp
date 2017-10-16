#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char>vt;
    for(int i=1;i<400;i++)
    {
        if(i<10)
        {
            vt.push_back(i+48);
        }
        else if(i<100)
        {
            int a=i/10;
            int b=i%10;
            vt.push_back(a+48);
            vt.push_back(b+48);
        }
        else
        {
            int a=i/100;
            int b=i%100;
            int c=b/10;
            b=b%10;
            vt.push_back(a+48);
            vt.push_back(c+48);
            vt.push_back(b+48);

        }
    }
    int n;
    cin>>n;
    cout<<vt[n-1]<<endl;
}
