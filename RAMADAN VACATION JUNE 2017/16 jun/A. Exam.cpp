#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1 || n==2) cout<<"1"<<endl<<"1"<<endl;
    else if(n==3) cout<<"2"<<endl<<"1 3"<<endl;
    else if(n==4) cout<<"4"<<endl<<"3 1 4 2"<<endl;
    else
    {
        cout<<n<<endl;
        vector<int>vc;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1) cout<<i<<" ";
            else vc.push_back(i);
        }
        for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
    }

}

