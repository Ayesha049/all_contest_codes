#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    char xx1,xx2;
    int y1,y2;
    cin>>xx1>>y1>>xx2>>y2;
    int x1=(int)xx1;
    x1=x1-96;
    int x2=(int)xx2;
    x2=x2-96;
    queue<string>moves;
    int count=0;
    if(x1<x2)
    {
        if(y1<y2)
        {
            while(1)
            {
                x1++;
                y1++;
                count++;
                moves.push("RU");
                if(x1==x2)
                {
                    if(y1==y2)
                        break;
                    else
                    {
                        count=count+(y2-y1);
                        for(int i=0; i<(y2-y1); i++)
                        {
                            moves.push("U");
                        }
                        break;
                    }
                }
                else if(y1==y2)
                {
                    count=count+(x2-x1);
                    for(int i=0; i<(x2-x1); i++)
                    {
                        moves.push("R");
                    }
                    break;
                }
            }
        }
        else if(y1>y2)
        {
            while(1)
            {
                x1++;
                y1--;
                count++;
                moves.push("RD");
                if(x1==x2)
                {
                    if(y1==y2)
                        break;
                    else
                    {
                        count=count+(y1-y2);
                        for(int i=0; i<(y1-y2); i++)
                        {
                            moves.push("D");
                        }
                        break;
                    }
                }
                else if(y1==y2)
                {
                    count=count+(x2-x1);
                    for(int i=0; i<(x2-x1); i++)
                    {
                        moves.push("R");
                    }
                    break;
                }
            }
        }
        else if(y1==y2)
        {
            count=count+(x2-x1);
            for(int i=0; i<(x2-x1); i++)
            {
                moves.push("R");
            }

        }
    }
    else if(x1==x2)
    {
        if(y2>y1)
        {
            count=count+(y2-y1);
            for(int i=0; i<(y2-y1); i++)
            {
                moves.push("U");
            }
        }
        else
        {
            count=count+(y1-y2);
            for(int i=0; i<(y1-y2); i++)
            {
                moves.push("D");
            }
        }
    }
    else if(x1>x2)
    {
        if(y1==y2)
        {
            count=count+(x1-x2);
            for(int i=0; i<(x1-x2); i++)
            {
                moves.push("L");
            }
        }
        else if(y1>y2)
        {
            while(1)
            {
                x1--;
                y1--;
                count++;
                moves.push("LD");
                if(x1==x2)
                {
                    if(y1==y2)
                        break;
                    else
                    {
                        count=count+(y1-y2);
                        for(int i=0; i<(y1-y2); i++)
                        {
                            moves.push("D");
                        }
                        break;
                    }
                }
                else if(y1==y2)
                {
                    count=count+(x1-x2);
                    for(int i=0; i<(x1-x2); i++)
                    {
                        moves.push("L");
                    }
                    break;
                }
            }
        }
        else if(y1<y2)
        {
            while(1)
            {
                x1--;
                y1++;
                count++;
                moves.push("LU");
                if(x1==x2)
                {
                    if(y1==y2)
                        break;
                    else
                    {
                        count=count+(y2-y1);
                        for(int i=0; i<(y2-y1); i++)
                        {
                            moves.push("U");
                        }
                        break;
                    }
                }
                else if(y1==y2)
                {
                    count=count+(x1-x2);
                    for(int i=0; i<(x1-x2); i++)
                    {
                        moves.push("L");
                    }
                    break;
                }
            }
        }
    }

    //cout<<x1<<x2;
    cout<<count<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<moves.front()<<endl;
        moves.pop();
    }
}
