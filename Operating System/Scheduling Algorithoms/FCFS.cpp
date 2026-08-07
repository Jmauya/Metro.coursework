#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int p[100], at[100], bt[100];
    int ct[100], tat[100], wt[100];

    for(int i = 0; i < n; i++)
    {
        p[i] = i + 1;
        cout << "P" << p[i] << " AT: ";
        cin >> at[i];
        cout << "P" << p[i] << " BT: ";
        cin >> bt[i];
    }

    // FCFS: sort according to Arrival Time
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(at[i] > at[j])
            {
                swap(at[i], at[j]);
                swap(bt[i], bt[j]);
                swap(p[i], p[j]);
            }
        }
    }

    int time = 0;

    for(int i = 0; i < n; i++)
    {
        if(time < at[i])
            time = at[i];

        time += bt[i];
        ct[i] = time;
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
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
