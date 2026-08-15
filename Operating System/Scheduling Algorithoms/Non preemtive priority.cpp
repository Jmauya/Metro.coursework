#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    int p[100], at[100], bt[100], pri[100];
    int ct[100], tat[100], wt[100];
    bool done[100] = {false};

    for(int i = 0; i < n; i++)
    {
        p[i] = i + 1;

        cout << "\nP" << p[i] << endl;

        cout << "Arrival Time: ";
        cin >> at[i];

        cout << "Burst Time: ";
        cin >> bt[i];

        cout << "Priority: ";
        cin >> pri[i];
    }

    int time = 0;
    int completed = 0;

    while(completed < n)
    {
        int best = -1;

        // Find highest priority arrived process
        for(int i = 0; i < n; i++)
        {
            if(!done[i] && at[i] <= time)
            {
                if(best == -1 || pri[i] < pri[best])
                    best = i;
            }
        }

        // No process has arrived
        if(best == -1)
        {
            time++;
            continue;
        }

        // Run until completion
        time += bt[best];

        ct[best] = time;
        tat[best] = ct[best] - at[best];
        wt[best] = tat[best] - bt[best];

        done[best] = true;
        completed++;
    }

    cout << "\nP\tAT\tBT\tPri\tCT\tTAT\tWT\n";

    for(int i = 0; i < n; i++)
    {
        cout << "P" << p[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << pri[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;
    }

    return 0;
}
