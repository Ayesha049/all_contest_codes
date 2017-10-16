#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x,y;
    while(cin>>x>>y)
    {
        if((x=='a' && y=='8')||(x=='h' && y=='8')||(x=='a' && y=='1')||(x=='h' && y=='1')) cout<<"3"<<endl;
        else if(x=='a' || x=='h' || y=='1' || y=='8') cout<<"5"<<endl;
        else cout<<"8"<<endl;
    }
}

