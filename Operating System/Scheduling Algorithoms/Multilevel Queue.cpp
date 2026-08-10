#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tq;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter Time Quantum: ";
    cin >> tq;

    int p[100], at[100], bt[100], rt[100], queueNo[100];
    int ct[100], tat[100], wt[100];

    for(int i = 0; i < n; i++)
    {
        p[i] = i + 1;

        cout << "\nP" << p[i] << endl;

        cout << "Arrival Time: ";
        cin >> at[i];

        cout << "Burst Time: ";
        cin >> bt[i];

        cout << "Queue (1 or 2): ";
        cin >> queueNo[i];

        rt[i] = bt[i];
    }

    int time = 0;
    int completed = 0;

    while(completed < n)
    {
        int found = -1;


        for(int i = 0; i < n; i++)
        {
            if(queueNo[i] == 1 && rt[i] > 0 && at[i] <= time)
            {
                found = i;
                break;
            }
        }


        if(found == -1)
        {
            for(int i = 0; i < n; i++)
            {
                if(queueNo[i] == 2 && rt[i] > 0 && at[i] <= time)
                {
                    found = i;
                    break;
                }
            }
        }

        if(found == -1)
        {
            time++;
            continue;
        }

        if(queueNo[found] == 1)
        {
            if(rt[found] > tq)
            {
                time += tq;
                rt[found] -= tq;
            }
            else
            {
                time += rt[found];
                rt[found] = 0;

                ct[found] = time;
                tat[found] = ct[found] - at[found];
                wt[found] = tat[found] - bt[found];

                completed++;
            }
        }


        else
        {
            time += rt[found];
            rt[found] = 0;

            ct[found] = time;
            tat[found] = ct[found] - at[found];
            wt[found] = tat[found] - bt[found];

            completed++;
        }
    }

    cout << "\nP\tAT\tBT\tQ\tCT\tTAT\tWT\n";

    for(int i = 0; i < n; i++)
    {
        cout << "P" << p[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << queueNo[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;
    }

    return 0;
}
