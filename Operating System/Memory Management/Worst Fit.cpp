
#include <iostream>
using namespace std;

int main()
{
    int memory[5] = {100, 500, 200, 300, 600};
    int process[4] = {212, 417, 112, 426};
    int allocation[4];

    for (int i = 0; i < 4; i++)
        allocation[i] = -1;

    for (int i = 0; i < 4; i++)
    {
        int worst = -1;

        for (int j = 0; j < 5; j++)
        {
            if (memory[j] >= process[i])
            {
                if (worst == -1 || memory[j] > memory[worst])
                    worst = j;
            }
        }

        if (worst != -1)
        {
            allocation[i] = worst;
            memory[worst] -= process[i];
        }
    }

    cout << "Process\tSize\tBlock\n";

    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << "\t" << process[i] << "\t";

        if (allocation[i] != -1)
            cout << allocation[i] + 1;
        else
            cout << "Not Allocated";

        cout << endl;
    }

    return 0;
}
