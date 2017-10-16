#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;


class player
{
public:
    char name[40];
    int score;
    void sett(char *n,int s)
    {
        strcpy(name,n);
        score=s;
    }
    void printt()
    {
        cout<<name<<" "<<score<<endl;
    }
};

int main()
{
    int done=0;


    player obj[1001];
    player inputs[1001];
    int countt=0;
    player winners[1001];
    int win= -1001;
    int n;
    cin>>n;
    int i=0;
    for(i=1; i<=n; i++)
    {
        char nm[40];
        int sc;
        cin>>nm>>sc;
        inputs[i].sett(nm,sc);


        if(i==1)
        {
            countt++;
            obj[i].sett(nm,sc);
        }
        else
        {
            int j;
            for(j=1; j<i; j++)
            {
                if(strcmp(obj[j].name,nm)==0)
                {
                    obj[j].score=obj[j].score+sc;
                    break;
                }

            }
            if(j==i)
            {
                countt++;
                obj[countt].sett(nm,sc);
            }
        }
    }

    int cc=0;
    for(int j=1; j<=countt; j++)
    {
        if(obj[j].score>win)
        {
            win=obj[j].score;
        }

    }
    //cout<<win<<endl;

    for(int j=1; j<=countt; j++)
    {
        if(obj[j].score==win)
        {
            //obj[j].printt();
            obj[j].score=0;
            winners[cc]=obj[j];
            cc++;

        }

    }
    if(cc==1)
    {
        cout<<winners[0].name;
    }
    else
    {
        char nm[40];
        int sc;
        int j;
        for(int i=1; i<=n; i++)
        {
            //cout<<inputs[i]<<"ppppppppppppp"<<endl;
            strcpy(nm,inputs[i].name);
            sc=inputs[i].score;
            //cout<<nm<<sc<<endl;
            for(j=0; j<cc; j++)
            {
                if(strcmp(winners[j].name,nm)==0)
                {
                    winners[j].score=winners[j].score+sc;
                    //winners[j].printt();
                    if(winners[j].score>=win)
                    {
                        done=1;
                        break;
                    }
                    break;
                }

            }
            if(done==1)
            {
                cout<<winners[j].name;
                break;
            }

        }
    }

}

