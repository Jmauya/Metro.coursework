#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    int p[100], at[100], bt[100], priority[100];
    int rt[100], ct[100], tat[100], wt[100];

    for(int i = 0; i < n; i++)
    {
        p[i] = i + 1;

        cout << "P" << p[i] << " AT: ";
        cin >> at[i];

        cout << "P" << p[i] << " BT: ";
        cin >> bt[i];

        cout << "P" << p[i] << " Priority: ";
        cin >> priority[i];

        rt[i] = bt[i];
    }

    int time = 0;
    int completed = 0;

    while(completed < n)
    {
        int index = -1;

        // Find highest priority process
        for(int i = 0; i < n; i++)
        {
            if(at[i] <= time && rt[i] > 0)
            {
                if(index == -1 || priority[i] < priority[index])
                    index = i;
            }
        }

        if(index == -1)
        {
            time++;
            continue;
        }

        // Execute for 1 unit
        rt[index]--;
        time++;

        if(rt[index] == 0)
        {
            ct[index] = time;
            tat[index] = ct[index] - at[index];
            wt[index] = tat[index] - bt[index];

            completed++;
        }
    }

    cout << "\nP\tAT\tBT\tPR\tCT\tTAT\tWT\n";

    for(int i = 0; i < n; i++)
        cout << "P" << p[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << priority[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;

    return 0;
}
