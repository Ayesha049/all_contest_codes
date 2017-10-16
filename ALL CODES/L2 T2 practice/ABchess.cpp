#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <char> white;
    stack <char> black;

    char arr[8][8];
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(arr[i][j]!= '.')
            {
                if(arr[i][j]>=65 && arr[i][j]<90)
                    white.push(arr[i][j]);
                else
                    black.push(arr[i][j]);
            }
        }
    }
    int bsum=0;
    int wsum=0;
    while(!white.empty())
    {
        char c=white.top();
        switch(c)
        {
        case 'Q':
            wsum=wsum+9;
            break;
        case 'R':
            wsum=wsum+5;
            break;
        case 'B':
            wsum=wsum+3;
            break;
        case 'N':
            wsum=wsum+3;
            break;
        case 'P':
            wsum=wsum+1;
            break;
        }

        white.pop();
    }
    while(!black.empty())
    {
        char c=black.top();
        switch(c)
        {
        case 'q':
            bsum=bsum+9;
            break;
        case 'r':
            bsum=bsum+5;
            break;
        case 'b':
            bsum=bsum+3;
            break;
        case 'n':
            bsum=bsum+3;
            break;
        case 'p':
            bsum=bsum+1;
            break;
        }

        black.pop();
    }
   // cout<<"wsum"<<wsum<<"\n"<<"bsum"<<bsum<<"\n";

    if(wsum>bsum)
        cout<<"White";
    else if(wsum==bsum)
        cout<<"Draw";
    else
        cout<<"Black";
}

/*
...QK...
........
........
........
........
........
........
...rk...
*/
