#include<iostream>
using namespace std;
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    //int pn[10], bt[10];  
    int wt[10], tt[10];        
    int n = 4;                   

    // cout << "Enter the number of processes : ";
    // cin >> n;  

    // cout << "Enter process number and burst time" << endl;
    // for(int i=0; i<n; i++) {
    //     cin >> pn[i] >> bt[i];  
    // }

    int pn[] = {1, 2, 3, 4};
    int bt[] = {8, 4, 8, 5};

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(bt[j] < bt[i]) {
                swap(&bt[i], &bt[j]);
                swap(&pn[i], &pn[j]);
            }
            if(bt[j] == bt[i]) {
                if(pn[j] < pn[i]) {
                    swap(&bt[i], &bt[j]);
                    swap(&pn[i], &pn[j]);
                }
            }
        }
    }

    wt[0] = 0;
    for(int i=1; i<n; i++) {
        wt[i] = bt[i-1] + wt[i-1];
    }
    for(int i=0; i<n; i++) {
        tt[i] = wt[i] + bt[i];
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(pn[j] < pn[i]) {
                swap(&bt[i], &bt[j]);
                swap(&pn[i], &pn[j]);
                swap(&wt[i], &wt[j]);
                swap(&tt[i], &tt[j]);
            }
        }
    }

    cout << "Pr no\tBT\tWT\tTT" << endl;
    for(int i=0; i<n; i++) {
        cout << pn[i] << "\t" << bt[i] << "\t" << wt[i] << "\t" << tt[i] << endl;
    }
}