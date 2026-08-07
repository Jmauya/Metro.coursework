#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int p[100], at[100], bt[100];
    int ct[100], tat[100], wt[100];
    int done[100] = {0};

    for(int i = 0; i < n; i++)
    {
        p[i] = i + 1;

        cout << "P" << p[i] << " AT: ";
        cin >> at[i];

        cout << "P" << p[i] << " BT: ";
        cin >> bt[i];
    }

    int time = 0;
    int completed = 0;

    while(completed < n)
    {
        int index = -1;

        // Find shortest job that has arrived
        for(int i = 0; i < n; i++)
        {
            if(done[i] == 0 && at[i] <= time)
            {
                if(index == -1 || bt[i] < bt[index])
                    index = i;
            }
        }

        // CPU is idle
        if(index == -1)
        {
            time++;
            continue;
        }

        time += bt[index];

        ct[index] = time;
        tat[index] = ct[index] - at[index];
        wt[index] = tat[index] - bt[index];

        done[index] = 1;
        completed++;
    }

    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\n";

    for(int i = 0; i < n; i++)
        cout << "P" << p[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;

    return 0;
}
