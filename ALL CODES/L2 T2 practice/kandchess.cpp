#include<iostream>
using namespace std;

int main()
{
    char arr[8][8];
    int count=0,cnt=0,i;
    for(int k=0; k<8; k++)
    {
        for(int j=0; j<8; j++)
            cin>>arr[k][j];
    }
    for(i=0; i<8; i++)
    {
        count=0;
        for(int j=0; j<8; j++)
        {
            if(arr[i][j]=='B')
            {
                count++;
            }
        }
        //cout<<count<<" ";
        if(count==8)
        {
            cnt++;
        }
    }
    //cout<<"1st cnt "<<cnt<<" "<<i<<endl;

    if(cnt!=8)
    {
        for(int k=0; k<8; k++)
        {
            count=0;
            for(int j=0; j<8; j++)
            {
                if(arr[j][k]=='B')
                    count++;
            }
            //cout<<count<<" ";
            if(count==8)
            {
                cnt++;
            }

        }
    }


    cout<<cnt<<endl;

}

/*
BBBBBBBB
BBBBBBBB
BBBBBBBB
BBBBBBBB
BBBBBBBB
BBBBBBBB
BBBBBBBB
BBBBBBBW
*/
