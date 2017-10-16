#include<iostream>
using namespace std;

int main()
{
    int indicator[101];
    int counter=0;
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
            if(indicator[x]!=20)
            {
                indicator[x]=20;
                counter++;
                if(counter==bulb)
                    break;
            }
        }

    }

    if(counter==(bulb))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
