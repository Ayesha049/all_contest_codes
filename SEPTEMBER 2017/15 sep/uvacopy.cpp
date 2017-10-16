#include<iostream>

using namespace std;

const int MAX=1000000;//由于题目没告诉数据范围,所以将时间的上限定得大一些,暴力求解

int main()

{

    int a[15],b[15],c[15];

    int stnum;//学生人数

    int casenumber=1;//数据序号

    while(cin>>stnum&&stnum!=0)

    {

        for(int i=0;i<stnum;i++)

        {

            cin>>a[i]>>b[i]>>c[i];

        }

        int time=1;

        for(;time<MAX;time++)//开始遍历时间

        {

            int wake=0;//醒的人数每次必须清零

            for(int i=0;i<stnum;i++)

            {

                if(c[i]<=a[i])

                {

                    wake++;

                }

            }

            if(wake==stnum)

            {

                break;

            }

            for(int i=0;i<stnum;i++)

            {

               if(c[i]==a[i]+b[i]||(c[i]==a[i]&&wake>=stnum-wake))

//周期结束后或者想睡觉但是醒的人数不小于睡的人数的时候,C[i]重设为1

                {

                    c[i]=1;

                }

                else

                {

                    c[i]++;

                }

            }

        }

        if(time==MAX)//不出现目标情况

        {

            cout<<"Case "<<casenumber<<": -1\n";

            casenumber++;

        }

        else

        {

            cout<<"Case "<<casenumber<<": "<<time<<endl;

            casenumber++;

        }

    }

}
