//first come first serve with arrival time
//21co28

#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int n,i,j,p[10],bt[10],wt[10],tt[10],arrt[10],sum=0;
    float awt=0,att=0;

    cout<<"enter the total number of processes"<<endl;
    cin>>n;

    cout<<"enter the process number,burst time and arrival time"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>p[i];
        cin>>bt[i];
        cin>>arrt[i];
    }

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(arrt[i]>arrt[j])
            {
                    swap(&arrt[i],&arrt[j]);
                    swap(&bt[i],&bt[j]);
                    swap(&p[i],&p[j]);
            }
        }
    }



    wt[1]=0;
    for(i=2;i<=n;i++)
    {
        sum=sum+bt[i-1];
        wt[i]=sum-arrt[i];
    }

   for(i=1;i<=n;i++)
    {
        tt[i]=bt[i]+wt[i];
    }


    for(i=1;i<=n;i++)
    {
        awt=awt+wt[i];
        att=att+tt[i];
    }
    cout<<"process\t\tburst time\tarrival time\twaiting time\tturnaround time"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<p[i]<<"\t\t"<<bt[i]<<"\t\t"<<arrt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i]<<endl;
    }
    cout<<"\n";
    cout<<"average waiting time="<<awt/n<<endl;
    cout<<"average turnaround time="<<att/n<<endl;

    return 0;

}