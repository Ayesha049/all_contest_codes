#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[5][5];
    for(int i=1; i<5; i++)
    {
        for(int j=1; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }
    int flag=0;
    for(int i=1; i<5; i++)
    {
        for(int j=1; j<5; j++)
        {

            if(i==1)
            {
                if(j==1)
                {
                    if((arr[i][j+1]=='#' && arr[i+1][j+1]=='#' && arr[i+1][j]=='#') || (arr[i][j+1]=='.' && arr[i+1][j+1]=='.' && arr[i+1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
                else if(j==4)
                {
                    if((arr[i][j-1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j]=='#') || (arr[i][j-1]=='.' && arr[i+1][j-1]=='.' && arr[i+1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if((arr[i][j+1]=='#' && arr[i+1][j+1]=='#' && arr[i+1][j]=='#') || (arr[i][j-1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j]=='#') ||(arr[i][j+1]=='.' && arr[i+1][j+1]=='.' && arr[i+1][j]=='.') || (arr[i][j-1]=='.' && arr[i+1][j-1]=='.' && arr[i+1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else if(i==4)
            {

                if(j==1)
                {
                    if((arr[i][j+1]=='#' && arr[i-1][j+1]=='#' && arr[i-1][j]=='#') || (arr[i][j+1]=='.' && arr[i-1][j+1]=='.' && arr[i-1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
                else if(j==4)
                {
                    if((arr[i][j-1]=='#' && arr[i-1][j-1]=='#' && arr[i-1][j]=='#') || (arr[i][j-1]=='.' && arr[i-1][j-1]=='.' && arr[i-1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if((arr[i][j+1]=='#' && arr[i-1][j+1]=='#' && arr[i-1][j]=='#') || (arr[i][j-1]=='#' && arr[i-1][j-1]=='#' && arr[i-1][j]=='#') || (arr[i][j+1]=='.' && arr[i-1][j+1]=='.' && arr[i-1][j]=='.') || (arr[i][j-1]=='.' && arr[i-1][j-1]=='.' && arr[i-1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else
            {
                if(j==1)
                {
                    if((arr[i][j+1]=='#' && arr[i-1][j+1]=='#' && arr[i-1][j]=='#') || (arr[i][j+1]=='#' && arr[i+1][j+1]=='#' && arr[i+1][j]=='#') || (arr[i][j+1]=='.' && arr[i-1][j+1]=='.' && arr[i-1][j]=='.') || (arr[i][j+1]=='.' && arr[i+1][j+1]=='.' && arr[i+1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
                else if(j==4)
                {
                    if((arr[i][j-1]=='#' && arr[i-1][j-1]=='#' && arr[i-1][j]=='#') || (arr[i][j-1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j]=='#') || (arr[i][j-1]=='.' && arr[i-1][j-1]=='.' && arr[i-1][j]=='.') || (arr[i][j-1]=='.' && arr[i+1][j-1]=='.' && arr[i+1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if((arr[i][j-1]=='#' && arr[i-1][j-1]=='#' && arr[i-1][j]=='#') || (arr[i][j-1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j]=='#') ||(arr[i][j+1]=='#' && arr[i-1][j+1]=='#' && arr[i-1][j]=='#') || (arr[i][j+1]=='#' && arr[i+1][j+1]=='#' && arr[i+1][j]=='#') || (arr[i][j-1]=='.' && arr[i-1][j-1]=='.' && arr[i-1][j]=='.') || (arr[i][j-1]=='.' && arr[i+1][j-1]=='.' && arr[i+1][j]=='.') ||(arr[i][j+1]=='.' && arr[i-1][j+1]=='.' && arr[i-1][j]=='.') || (arr[i][j+1]=='.' && arr[i+1][j+1]=='.' && arr[i+1][j]=='.') )
                    {
                        flag=1;
                        break;
                    }
                }
            }

        }
        if(flag==1)
            break;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

