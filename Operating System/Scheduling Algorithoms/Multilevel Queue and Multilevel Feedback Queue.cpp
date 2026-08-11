#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice, n;

    cout << "1. Multilevel Queue\n";
    cout << "2. Multilevel Feedback Queue\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter number of processes: ";
    cin >> n;

    int p[100], at[100], bt[100], rt[100];
    int ct[100], tat[100], wt[100];

    for(int i = 0; i < n; i++)
    {
        p[i] = i + 1;

        cout << "P" << p[i] << " Arrival Time: ";
        cin >> at[i];

        cout << "P" << p[i] << " Burst Time: ";
        cin >> bt[i];

        rt[i] = bt[i];
    }

    int time = 0;

    if(choice == 1)
    {
        int q[100], tq;

        cout << "Enter Queue (1 or 2) for each process:\n";

        for(int i = 0; i < n; i++)
            cin >> q[i];

        cout << "Enter Time Quantum: ";
        cin >> tq;

        for(int i = 0; i < n; i++)
        {
            if(q[i] == 1)
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
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(q[i] == 2 && rt[i] > 0)
            {
                time += rt[i];
                rt[i] = 0;
                ct[i] = time;
            }
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(rt[i] > 2)
            {
                time += 2;
                rt[i] -= 2;
            }
            else if(rt[i] > 0)
            {
                time += rt[i];
                rt[i] = 0;
                ct[i] = time;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(rt[i] > 4)
            {
                time += 4;
                rt[i] -= 4;
            }
            else if(rt[i] > 0)
            {
                time += rt[i];
                rt[i] = 0;
                ct[i] = time;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(rt[i] > 0)
            {
                time += rt[i];
                rt[i] = 0;
                ct[i] = time;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }

    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\n";

    for(int i = 0; i < n; i++)
    {
        cout << "P" << p[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;
    }

    return 0;
}
