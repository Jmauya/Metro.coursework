//sjf 
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter number of resources: ";
    cin >> m;

    int allocation[10][10];
    int maximum[10][10];
    int need[10][10];
    int available[10];

    cout << "\nEnter Allocation Matrix:\n";

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> allocation[i][j];

    cout << "\nEnter Maximum Matrix:\n";

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> maximum[i][j];

    cout << "\nEnter Available Resources:\n";

    for(int j = 0; j < m; j++)
        cin >> available[j];


    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            need[i][j] = maximum[i][j] - allocation[i][j];

    int finish[10] = {0};
    int safe[10];
    int count = 0;

    while(count < n)
    {
        bool found = false;

        for(int i = 0; i < n; i++)
        {
            if(finish[i] == 0)
            {
                int j;

                for(j = 0; j < m; j++)
                {
                    if(need[i][j] > available[j])
                        break;
                }

                if(j == m)
                {
                    for(int k = 0; k < m; k++)
                        available[k] += allocation[i][k];

                    safe[count] = i;
                    count++;
                    finish[i] = 1;
                    found = true;
                }
            }
        }

        if(found == false)
            break;
    }

    if(count == n)
    {
        cout << "\nSystem is SAFE.\n";

        cout << "Safe Sequence: ";

        for(int i = 0; i < n; i++)
            cout << "P" << safe[i] << " ";

        cout << endl;
    }
    else
    {
        cout << "\nSystem is UNSAFE.\n";
    }

    return 0;
}


//srtf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

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

    int time = 0;
    int completed = 0;

    while(completed < n)
    {
        int index = -1;

   
        for(int i = 0; i < n; i++)
        {
            if(at[i] <= time && rt[i] > 0)
            {
                if(index == -1 || rt[i] < rt[index])
                    index = i;
            }
        }

        if(index == -1)
        {
            time++;
            continue;
        }

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

//deadlock

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter number of resources: ";
    cin >> m;

    int allocation[10][10];
    int maximum[10][10];
    int need[10][10];
    int available[10];

    cout << "\nEnter Allocation Matrix:\n";

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> allocation[i][j];

    cout << "\nEnter Maximum Matrix:\n";

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> maximum[i][j];

    cout << "\nEnter Available Resources:\n";

    for(int j = 0; j < m; j++)
        cin >> available[j];


    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            need[i][j] = maximum[i][j] - allocation[i][j];

    int finish[10] = {0};
    int safe[10];
    int count = 0;

    while(count < n)
    {
        bool found = false;

        for(int i = 0; i < n; i++)
        {
            if(finish[i] == 0)
            {
                int j;

                for(j = 0; j < m; j++)
                {
                    if(need[i][j] > available[j])
                        break;
                }

                if(j == m)
                {
                    for(int k = 0; k < m; k++)
                        available[k] += allocation[i][k];

                    safe[count] = i;
                    count++;
                    finish[i] = 1;
                    found = true;
                }
            }
        }

        if(found == false)
            break;
    }

    if(count == n)
    {
        cout << "\nSystem is SAFE.\n";

        cout << "Safe Sequence: ";

        for(int i = 0; i < n; i++)
            cout << "P" << safe[i] << " ";

        cout << endl;
    }
    else
    {
        cout << "\nSystem is UNSAFE.\n";
    }

    return 0;
}

//fcfs 

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

//priority

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

        while(next < n && at[next] <= time)
        {
            q.push(next);
            next++;
        }


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


        while(next < n && at[next] <= time)
        {
            q.push(next);
            next++;
        }


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

//round robin

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tq;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter Time Quantum: ";
    cin >> tq;

    int p[100], at[100], bt[100], rt[100];
    int ct[100], tat[100], wt[100];

 
    for(int i = 0; i < n; i++)
    {
        p[i] = i + 1;

        cout << "\nProcess P" << p[i] << endl;

        cout << "Arrival Time: ";
        cin >> at[i];

        cout << "Burst Time: ";
        cin >> bt[i];

        rt[i] = bt[i];
    }

    queue<int> q;

    int time = 0;
    int next = 0;
    int completed = 0;

 
    q.push(0);
    next = 1;

    while(completed < n)
    {

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

      
        while(next < n && at[next] <= time)
        {
            q.push(next);
            next++;
        }

      
        if(rt[i] > 0)
        {
            q.push(i);
        }
    }

    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\n";

    double avgTAT = 0, avgWT = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "P" << p[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;

        avgTAT += tat[i];
        avgWT += wt[i];
    }

    cout << "\nAverage TAT = " << avgTAT / n << endl;
    cout << "Average WT = " << avgWT / n << endl;

    return 0;
}
