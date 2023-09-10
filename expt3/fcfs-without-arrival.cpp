#include <iostream>
using namespace std;
void waitingTime(int bt[], int pN)
{
    int tt[10], wt[10];
    float awt, att;
    //waiting time of first process will be zero
    wt[0] = 0;
    for(int i=1; i<pN; i++)
    {
        wt[i] = bt[i-1] + wt[i-1];
    }
    //tt[0] = wt[0] + bt[0];
    for(int i=0; i<pN; i++)
    {
        tt[i] = wt[i] + bt[i];
    }
    cout << "Process\t\tBurst Time\tWaiting Time\tTurn around time" << endl;
    for(int i=0; i<pN; i++)
    {
        cout << "  P" << i+1 << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tt[i] << endl;
        awt += wt[i]; att += tt[i];
    }
    cout << "Average Waiting Time : " << awt/pN << endl;
    cout << "Average Turn around Time : " << att/pN << endl;
}
int main()
{
    int pN = 3;
    int bt[3] = {24, 3, 3};
    waitingTime(bt, pN);
}

