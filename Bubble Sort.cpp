// Module 1 Assignment – Part A – Double Bonus
#include <iostream>
using namespace std;

void BubbleSort()
{
    int size;
    cout << "Please Enter The Size of  Array \n";
    cin >> size;
    int Elements[size];

    for (int i = 0; i <= size - 1; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> Elements[i];
    }
    cout << "The Original Array \n";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << Elements[i] << " ";
    }

    int temp;
    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (Elements[j] > Elements[j + 1])
            {
                temp = Elements[j];
                Elements[j] = Elements[j + 1];
                Elements[j + 1] = temp;
            }
        }
    }
    cout << "\n";
    cout << "The Sorted Array \n";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << Elements[i] << " ";
    }
}

int main()
{

    BubbleSort();

    return 0;
}
