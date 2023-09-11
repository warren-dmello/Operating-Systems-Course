#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n = 4;

    int pn[] = {1, 2, 3, 4};
    int bt[] = {8, 4, 8, 5};
    int at[] = {0, 1, 2, 3};
    int wt[10], tt[10];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (at[j] < at[i]) {
                swap(&at[i], &at[j]);
                swap(&bt[i], &bt[j]);
                swap(&pn[i], &pn[j]);
            }
        }
    }

    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = max(0, wt[i - 1] + bt[i - 1] - at[i]);
    }

    for (int i = 0; i < n; i++) {
        tt[i] = wt[i] + bt[i];
    }

    cout << "Pr no\tBT\tAT\tWT\tTT" << endl;
    for (int i = 0; i < n; i++) {
        cout << pn[i] << "\t" << bt[i] << "\t" << at[i] << "\t" << wt[i] << "\t" << tt[i] << endl;
    }

    return 0;
}
