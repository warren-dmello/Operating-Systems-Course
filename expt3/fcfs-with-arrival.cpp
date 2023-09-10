#include<iostream>
using namespace std;

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int pn[10], bt[10], at[10];  // Arrays to store process number, burst time, and arrival time
    int wt[10], tt[10];          // Arrays to store waiting time and turnaround time
    int n = 4;                   // Default number of processes (you can change this later)

    cout << "Enter the number of processes : ";
    cin >> n;  // Read the number of processes from the user

    cout << "Enter process number, burst time, and arrival time" << endl;
    for(int i=0; i<n; i++) {
        cin >> pn[i] >> bt[i] >> at[i];  // Read process number, burst time, and arrival time for each process
    }

    // Sort processes based on arrival time using Bubble Sort
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(at[j] < at[i]) {
                // Swap the arrival time, burst time, and process number
                swap(&at[i], &at[j]);
                swap(&bt[i], &bt[j]);
                swap(&pn[i], &pn[j]);
            }
        }
    }

    int ct = 0;      // Initialize completion time
    float awt = 0, att = 0;  // Initialize average waiting time and average turnaround time
    wt[0] = 0;  // Waiting time for the first process is 0
    for(int i=1; i<=n; i++) {
        ct = ct + bt[i-1];  // Calculate completion time
        wt[i] = ct - at[i];  // Calculate waiting time for the current process
        tt[i-1] = wt[i-1] + bt[i-1];  // Calculate turnaround time for the current process
        awt += wt[i-1];  // Update the sum of waiting times
        att += tt[i-1];  // Update the sum of turnaround times
    }

    // Display the process details and results
    cout << "Process\tBT\tAT\tWT\tTT" << endl;
    for(int i=0; i<n; i++) {
        cout << pn[i] << "\t" << bt[i] << "\t" << at[i] << "\t" << wt[i] << "\t" << tt[i] << endl;
    }
    cout << "\nAverage waiting time = " << awt/n << endl;
    cout << "Average turnaround time = " << att/n << endl;

    return 0; 
}
