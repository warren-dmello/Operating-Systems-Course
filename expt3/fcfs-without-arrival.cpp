#include <iostream>
using namespace std;
void waitingTime(int bt[], int n)
{
    int tt[10], wt[10];
    float awt, att;
    //waiting time of first process will be zero
    wt[0] = 0;
    for(int i=1; i<n; i++)
    {
        wt[i] = bt[i-1] + wt[i-1];
    }
    //tt[0] = wt[0] + bt[0];
    for(int i=0; i<n; i++)
    {
        tt[i] = wt[i] + bt[i];
    }
    cout << "Process\t\tBurst Time\tWaiting Time\tTurn around time" << endl;
    for(int i=0; i<n; i++)
    {
        cout << "  P" << i+1 << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tt[i] << endl;
        awt += wt[i]; att += tt[i];
    }
    cout << "Average Waiting Time : " << awt/n << endl;
    cout << "Average Turn around Time : " << att/n << endl;
}
int main()
{
    int n, pn[10], bt[10];
    
    cout << "Enter the number of processes : ";
    cin >> n;  // Read the number of processes from the user

    cout << "Enter burst time of each process" << endl;
    for(int i=0; i<n; i++) {
        cin >> bt[i];  
    }
    waitingTime(bt, n);
}

