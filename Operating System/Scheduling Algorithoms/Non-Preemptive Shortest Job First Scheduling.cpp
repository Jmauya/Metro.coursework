

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;

    int p[5] = {1,2,3,4,5};
    int at[5] = {0,1,2,3,4};
    int bt[5] = {9,4,9,2,1};

    int ct[5], tat[5], wt[5], done[5];

    for(int i=0;i<n;i++) done[i]=0;

    int time = 0, completed = 0;

    while(completed < n) {
        int idx = -1, min_bt = 100000;

        for(int i=0;i<n;i++) {
            if(at[i] <= time && done[i]==0) {
                if(bt[i] < min_bt) {
                    min_bt = bt[i];
                    idx = i;
                }
            }
        }

        if(idx == -1) {
            time++;
        } else {
            time += bt[idx];
            ct[idx] = time;

            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];

            done[idx] = 1;
            completed++;
        }
    }

    cout << "P\tAT\tBT\tCT\tTAT\tWT\n";
    for(int i=0;i<n;i++) {
        cout << "P" << p[i] << "\t" << at[i] << "\t" << bt[i] << "\t"
             << ct[i] << "\t" << tat[i] << "\t" << wt[i] << endl;
    }

    return 0;
}
