#include<iostream>
using namespace std;

int main()
{
    char str[101];
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        if(str[i]=='o')
        {

            for(int j=i+1;;j++)
            {
                if(str[j]=='g' && str[j+1]=='o')
                {
                    flag=1;
                    i=i+2;
                    j=j+1;
                }
                else
                {
                    if(flag==1)
                    {
                        cout<<"***";
                    }
                    break;
                }
            }
        }
        else
            cout<<str[i];
    }
}
