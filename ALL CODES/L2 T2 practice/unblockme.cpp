#include<iostream>
#include<string>
#include<string.h>
using namespace std;

char arrr[7][7];
int step=0;

void prnting()
{
    int pos;
    for(int i=1;i<4;i++)
    {
        if(arrr[3][i]==5)
        {
            pos=i+2;
            for(int j=pos;j<=6;j++)
            {
                if(arrr[3][j]!='.')
                {
                    pos=j;
                    break;
                }
                else
                {
                    pos++;
                    step++;
                }
            }
            if(pos==6)
            {
                cout<<step<<endl;
                break;
            }

        }
    }
}


int main()
{
    char arr[100000];
    int count=0;
    int zz=0;
    cin>>arr;
    count= strlen(arr);
    cout<<count<<endl;
    count = count-3;
    count=count/36;
    cout<<count<<endl<<endl;


    for(int k=1; k<=count; k++)
    {
        cout<<k<<endl;
        for(int i=1; i<=6; i++)
        {
            for(int j=1; j<=6; j++)
            {
                arrr[i][j]=arr[zz++];
            }
        }
        int red=0;
        for(int j=1; j<=6; j++)
        {
            if(arrr[3][j]=='A')
            {
                arrr[3][j]='5';
                red=j;
                break;
            }
        }
        for(int i=1; i<=6; i++)
        {
            for(int j=1; j<=6;j++)
            {
                if(arrr[i][j]!='.' && j<6)
                {
                    if(arrr[i][j]==arrr[i][j+1])
                    {
                        if(j<=4)
                        {
                            if(arrr[i][j+1]==arrr[i][j+2])
                            {
                                arrr[i][j]='1';
                                j=j+2;
                            }
                            else
                            {
                                arrr[i][j]='0';
                                j=j+1;
                            }
                        }
                        else
                            {
                                arrr[i][j]='0';
                                j=j+1;
                            }

                    }

                }
            }
        }
        for(int i=1; i<=6; i++)
        {
            for(int j=1; j<=6;j++)
            {
                if(arrr[j][i]!='.' && arrr[j][i]!='0' && j<6)
                {
                    if(arrr[j][i]==arrr[j+1][i])
                    {
                        if(j<=4)
                        {
                            if(arrr[j+1][i]==arrr[j+2][i])
                            {
                                arrr[j][i]='3';
                                j=j+2;
                            }
                            else
                            {
                                arrr[j][i]='2';
                                j=j+1;
                            }
                        }
                        else
                            {
                                arrr[j][i]='2';
                                j=j+1;
                            }

                    }

                }
            }
        }

        for(int i=1; i<=6; i++)
        {
            for(int j=1; j<=6; j++)
            {
                cout<<arrr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        for(int j=red+2;j<=6;j++)
        {
            if(arrr[3][j]=='0' || arrr[3][j]=='1')
                {
                    cout<<"NO SOLUTION EXIST"<<endl;
                    break;
                }
        }
        for(int j=red+2;j<=6;j++)
        {
            if(arrr[1][j]=='3' && arrr[4][j]=='3')
                {
                    cout<<"NO SOLUTION EXIST"<<endl;
                    break;
                }
            else if(arrr[1][j]=='2' && arrr[3][j]=='2' && arrr[5][j]=='2')
                {
                    cout<<"NO SOLUTION EXIST"<<endl;
                    break;
                }
        }

    }
}
