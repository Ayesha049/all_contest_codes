#include<iostream>
using namespace std;

int main()
{
    int indicator[101];
    int swtch,bulb;
    cin>>swtch>>bulb;
    for(int i=0; i<swtch; i++)
    {
        int num;
        cin>>num;
        for(int j=0; j<num; j++)
        {
            int x;
            cin>>x;
            indicator[x]=20;
        }

    }
    int i;
    for(i=1; i<=bulb; i++)
    {
        if(indicator[i]!=20)
            break;
    }
    if(i==(bulb+1))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
