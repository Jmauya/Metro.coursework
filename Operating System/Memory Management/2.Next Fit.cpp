
#include <iostream>
using namespace std;

int main()
{
    int memory[5] = {100, 500, 200, 300, 600};
    int process[4] = {212, 417, 112, 426};
    int allocation[4];
    int last = 0;

    for (int i = 0; i < 4; i++)
        allocation[i] = -1;

    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        int j = last;

        while (count < 5)
        {
            if (memory[j] >= process[i])
            {
                allocation[i] = j;
                memory[j] -= process[i];
                last = j;
                break;
            }

            j = (j + 1) % 5;
            count++;
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
