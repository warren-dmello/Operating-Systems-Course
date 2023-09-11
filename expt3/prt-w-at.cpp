#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n = 4;

    int pn[] = {1, 2, 3, 4};
    int bt[] = {10, 1, 2, 1};
    int at[] = {0, 1, 2, 3};
    int priority[] = {3, 1, 1, 2};
    int wt[10], tt[10];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (at[j] <= at[i] && priority[j] < priority[i]) {
                swap(&priority[i], &priority[j]);
                swap(&bt[i], &bt[j]);
                swap(&pn[i], &pn[j]);
                swap(&at[i], &at[j]);
            }
        }
    }

    int currentTime = 0;

    for (int i = 0; i < n; i++) {
        if (currentTime < at[i]) {
            currentTime = at[i];
        }

        wt[i] = currentTime - at[i];
        currentTime += bt[i];
        tt[i] = wt[i] + bt[i];
    }

    cout << "Pr no\tBT\tAT\tPriority\tWT\tTT" << endl;
    for (int i = 0; i < n; i++) {
        cout << pn[i] << "\t" << bt[i] << "\t" << at[i] << "\t" << priority[i] << "\t\t" << wt[i] << "\t" << tt[i] << endl;
    }

    return 0;
}
