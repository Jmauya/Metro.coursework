#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tq;
    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter Time Quantum: ";
    cin >> tq;

    int p[100], at[100], bt[100], rt[100], pri[100];
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

        rt[i] = bt[i];
    }

    int time = 0;
    int completed = 0;

    while(completed < n)
    {
        int highest = -1;


        for(int i = 0; i < n; i++)
        {
            if(!done[i] && at[i] <= time)
            {
                if(highest == -1 || pri[i] < pri[highest])
                    highest = i;
            }
        }


        if(highest == -1)
        {
            time++;
            continue;
        }

        int currentPriority = pri[highest];

        // Run same-priority processes using Round Robin
        for(int i = 0; i < n; i++)
        {
            if(!done[i] && at[i] <= time && pri[i] == currentPriority)
            {
                if(rt[i] > tq)
                {
                    time += tq;
                    rt[i] -= tq;
                }
                else
                {
                    time += rt[i];
                    rt[i] = 0;

                    ct[i] = time;
                    tat[i] = ct[i] - at[i];
                    wt[i] = tat[i] - bt[i];

                    done[i] = true;
                    completed++;
                }
            }
        }
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
