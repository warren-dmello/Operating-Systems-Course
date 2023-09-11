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
    int priority[] = {2, 1, 3, 4};
    int wt[10], tt[10];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (priority[j] < priority[i]) {
                swap(&priority[i], &priority[j]);
                swap(&bt[i], &bt[j]);
                swap(&pn[i], &pn[j]);
            }
        }
    }

    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (int i = 0; i < n; i++) {
        tt[i] = wt[i] + bt[i];
    }

    cout << "Pr no\tBT\tPriority\tWT\tTT" << endl;
    for (int i = 0; i < n; i++) {
        cout << pn[i] << "\t" << bt[i] << "\t" << priority[i] << "\t" << wt[i] << "\t" << tt[i] << endl;
    }

    return 0;
}
