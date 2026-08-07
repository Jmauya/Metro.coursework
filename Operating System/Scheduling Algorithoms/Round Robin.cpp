#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tq;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter Time Quantum: ";
    cin >> tq;

    int p[100], at[100], bt[100];
    int rt[100], ct[100], tat[100], wt[100];

    for(int i = 0; i < n; i++)
    {
        p[i] = i + 1;

        cout << "P" << p[i] << " AT: ";
        cin >> at[i];

        cout << "P" << p[i] << " BT: ";
        cin >> bt[i];

        rt[i] = bt[i];
    }

    queue<int> q;

    int time = 0;
    int next = 0;
    int completed = 0;

    while(completed < n)
    {
        // Add arrived processes
        while(next < n && at[next] <= time)
        {
            q.push(next);
            next++;
        }

        // CPU idle
        if(q.empty())
        {
            time = at[next];
            q.push(next);
            next++;
        }

        int i = q.front();
        q.pop();

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

            completed++;
        }

        // Add newly arrived processes
        while(next < n && at[next] <= time)
        {
            q.push(next);
            next++;
        }

        // Put current process back
        if(rt[i] > 0)
            q.push(i);
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
