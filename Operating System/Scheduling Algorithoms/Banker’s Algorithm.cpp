#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p = 5;
    int r = 3;


    int allocation[5][3] =
    {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2},
        {2, 1, 1},
        {0, 0, 2}
    };


    int maximum[5][3] =
    {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2},
        {2, 2, 2},
        {4, 3, 3}
    };


    int available[3] = {3, 3, 2};

    int need[5][3];
    int finish[5] = {0}; // execution
    int safeSequence[5];


    cout << "Need Matrix:\n";

    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < r; j++) // 1
        {
            need[i][j] = maximum[i][j] - allocation[i][j];
            cout << need[i][j] << " ";
        }
        cout << endl;
    }

    int count = 0;

    while(count < p) //
    {
        bool found = false;

        for(int i = 0; i < p; i++) // i=1 , p1
        {
            if(finish[i] == 0)
            {
                bool possible = true; // execute korte parbo

                for(int j = 0; j < r; j++)
                {
                    if(need[i][j] > available[j]) // p1- 1,2,2 < 3,2,2
                    {
                        possible = false;
                        break;
                    }
                }

                if(possible) // if true
                {

                    for(int j = 0; j < r; j++)
                    {
                        available[j] += allocation[i][j]; //
                    }

                    finish[i] = 1;
                    safeSequence[count] = i;
                    count++;
                    found = true;
                }
            }
        }

        if(found == false)
        {
            cout << "\nSystem is NOT in a Safe State." << endl;
            return 0;
        }
    }

    cout << "\nSystem is in a Safe State." << endl;

    cout << "Safe Sequence: ";

    for(int i = 0; i < p; i++)
    {
        cout << "P" << safeSequence[i];

        if(i != p - 1)
            cout << " -> ";
    }

    cout << endl;

    return 0;
}
