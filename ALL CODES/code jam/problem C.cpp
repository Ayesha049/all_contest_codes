#include<bits/stdc++.h>
using namespace std;

char arr[50][50];

int main()
{

    freopen("C-small-attempt0.in","r",stdin);
    freopen("C-small-attempt0.out","w",stdout);
    char zero[][5]= {'O','O','O','O','O',
                     'O','O','O','O','O',
                     'O','O','O','O','O',
                     'O','O','O','O','O',
                     'O','O','O','O','O',
                    };

    char one[][5]= {'O','O','O','O','O',
                    'O','O','O','O','O',
                    'O','O','I','/','O',
                    'O','O','O','O','O',
                    'O','O','O','O','O',
                   };

    char two[][5]= {'O','O','O','O','O',
                    'O','O','I','/','O',
                    'O','O','/','O','O',
                    'O','O','O','O','O',
                    'O','O','O','O','O',
                   };

    char three[][5]= {'O','O','O','O','O',
                      'O','/','I','/','O',
                      'O','O','/','O','O',
                      'O','O','O','O','O',
                      'O','O','O','O','O',
                     };

    char four[][5]= {'O','O','O','O','O',
                     'O','/','I','/','O',
                     'O','O','I','O','O',
                     'O','O','O','O','O',
                     'O','O','O','O','O',
                    };

    char five[][5]= {'O','O','O','O','O',
                     'O','/','I','/','O',
                     'O','O','I','O','O',
                     'O','O','/','O','O',
                     'O','O','O','O','O',
                    };

    char six[][5]= {'O','O','O','O','O',
                    'O','/','I','/','O',
                    'O','O','I','O','O',
                    'O','O','/','I','O',
                    'O','O','O','O','O',
                   };


    char seven[][5]= {'O','O','O','O','O',
                      'O','/','/','/','O',
                      'O','/','I','/','O',
                      'O','O','/','/','O',
                      'O','O','O','O','O',
                     };


    char eight[][5]= {'O','O','O','O','O',
                      'O','/','/','/','O',
                      'O','/','I','/','O',
                      'O','/','/','/','O',
                      'O','O','O','O','O',
                     };

    int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        int d,n;
        cin>>d>>n;

        int ei=n/8;
        int rest=n%8;
        int x=0;
        int xx=0;
        for(int ii=0; ii<10; ii++)
        {
            for(int jj=0; jj<10; jj++)
            {
                if(x<ei)
                {
                    for(int i=(ii*5); i<5+(ii*5); i++)
                    {
                        for(int j=(jj*5); j<5+(jj*5); j++)
                        {
                            arr[i][j]=eight[i-(ii*5)][j-(jj*5)];
                        }
                    }
                    x++;
                }
                else if(xx==0)
                {
                    xx++;
                    if(rest==0)
                    {
                        for(int i=(ii*5); i<5+(ii*5); i++)
                        {
                            for(int j=(jj*5); j<5+(jj*5); j++)
                            {
                                arr[i][j]=zero[i-(ii*5)][j-(jj*5)];
                            }
                        }
                    }
                    else if(rest==1)
                    {
                        for(int i=(ii*5); i<5+(ii*5); i++)
                        {
                            for(int j=(jj*5); j<5+(jj*5); j++)
                            {
                                arr[i][j]=one[i-(ii*5)][j-(jj*5)];
                            }
                        }
                    }
                    else if(rest==2)
                    {
                        for(int i=(ii*5); i<5+(ii*5); i++)
                        {
                            for(int j=(jj*5); j<5+(jj*5); j++)
                            {
                                arr[i][j]=two[i-(ii*5)][j-(jj*5)];
                            }
                        }
                    }

                    else if(rest==3)
                    {
                        for(int i=(ii*5); i<5+(ii*5); i++)
                        {
                            for(int j=(jj*5); j<5+(jj*5); j++)
                            {
                                arr[i][j]=three[i-(ii*5)][j-(jj*5)];
                            }
                        }
                    }

                    else if(rest==4)
                    {
                        for(int i=(ii*5); i<5+(ii*5); i++)
                        {
                            for(int j=(jj*5); j<5+(jj*5); j++)
                            {
                                arr[i][j]=four[i-(ii*5)][j-(jj*5)];
                            }
                        }
                    }

                    else if(rest==5)
                    {
                        for(int i=(ii*5); i<5+(ii*5); i++)
                        {
                            for(int j=(jj*5); j<5+(jj*5); j++)
                            {
                                arr[i][j]=five[i-(ii*5)][j-(jj*5)];
                            }
                        }
                    }

                    else if(rest==6)
                    {
                        for(int i=(ii*5); i<5+(ii*5); i++)
                        {
                            for(int j=(jj*5); j<5+(jj*5); j++)
                            {
                                arr[i][j]=six[i-(ii*5)][j-(jj*5)];
                            }
                        }
                    }

                    else if(rest==7)
                    {
                        for(int i=(ii*5); i<5+(ii*5); i++)
                        {
                            for(int j=(jj*5); j<5+(jj*5); j++)
                            {
                                arr[i][j]=seven[i-(ii*5)][j-(jj*5)];
                            }
                        }
                    }
                }

                else
                {
                    for(int i=(ii*5); i<5+(ii*5); i++)
                    {
                        for(int j=(jj*5); j<5+(jj*5); j++)
                        {
                            arr[i][j]=zero[i-(ii*5)][j-(jj*5)];
                        }
                    }
                }

            }
        }

        cout<<"Case #"<<tt<<": "<<endl;
        for(int i=0; i<50; i++)
        {
            for(int j=0; j<50; j++)
                cout<<arr[i][j];
            cout<<endl;
        }
    }

    /*for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            cout<<three[i][j];
        cout<<endl;
    }*/

}
