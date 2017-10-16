#include<bits/stdc++.h>
using namespace std;

int main()
{
    int input[5][5];
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            cin>>input[i][j];
        }
    }
    int flag=0;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<4;j++)
        {
            if(input[i][j]==1)
            {
                if(j==1)//left
                {
                    if(i==1)
                    {
                        if(input[1][4]==1 || input[4][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==2)
                    {
                        if(input[1][4]==1 || input[2][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==3)
                    {
                        if(input[2][4]==1 || input[3][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==4)
                    {
                        if(input[3][4]==1 || input[4][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                else if(j==2)//straight
                {
                    if(i==1)
                    {
                        if(input[1][4]==1 || input[3][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==2)
                    {
                        if(input[2][4]==1 || input[4][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==3)
                    {
                        if(input[1][4]==1 || input[3][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==4)
                    {
                        if(input[2][4]==1 || input[4][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                else//right
                {
                    if(i==1)
                    {
                        if(input[2][4]==1 || input[1][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==2)
                    {
                        if(input[2][4]==1 || input[3][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==3)
                    {
                        if(input[3][4]==1 || input[4][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==4)
                    {
                        if(input[1][4]==1 || input[4][4]==1)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}

