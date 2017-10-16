#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c1,c2;
    cin>>c1>>c2;
    int n;
    cin>>n;
    n=n%4;
    if(n==2 || n==0) cout<<"undefined"<<endl;
    else
    {
        if(n==1)
        {
            if(c1=='v')
            {
                if(c2=='<') cout<<"cw"<<endl;
                else cout<<"ccw"<<endl;
            }
            else if(c1=='<')
            {
                if(c2=='^') cout<<"cw"<<endl;
                else cout<<"ccw"<<endl;
            }
            else if(c1=='^')
            {
                if(c2=='>') cout<<"cw"<<endl;
                else cout<<"ccw"<<endl;
            }
            else if(c1=='>')
            {
                if(c2=='v') cout<<"cw"<<endl;
                else cout<<"ccw"<<endl;
            }

        }
        else
        {
            if(c1=='v')
            {
                if(c2=='<') cout<<"ccw"<<endl;
                else cout<<"cw"<<endl;
            }
            else if(c1=='<')
            {
                if(c2=='^') cout<<"ccw"<<endl;
                else cout<<"cw"<<endl;
            }
            else if(c1=='^')
            {
                if(c2=='>') cout<<"ccw"<<endl;
                else cout<<"cw"<<endl;
            }
            else if(c1=='>')
            {
                if(c2=='v') cout<<"ccw"<<endl;
                else cout<<"cw"<<endl;
            }

        }

    }
}

