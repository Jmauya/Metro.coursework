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

    // Calculate Need

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
