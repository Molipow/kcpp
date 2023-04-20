#include <iostream>

using namespace std;

int n;

int val(int a, int b)
{
    return a+b;
}

int& refer()
{
    return n;
}

int * pntr(int c)
{
    static int numbers[100];
    for (int i = 0; i < c; i++)
    {
        numbers[i] = i;
    }
    return numbers;
}

// zwracanie tablicy to tak naprawde zwracanie wskaŸnika do pierwszego elementu tej tablicy
int * arr(int f[], int c)
{
    for (int i = 0; i < c; i++)
        f[i]++;
    return f;
}

int main()
{
    int *nums;
    int v = val(2, 3);

    cout << "Returned by value: " << v << endl;

    refer() = 10;
    cout << "Returned by reference: " << n << endl;

    int amount = 10;
    nums = pntr(amount);
    cout << "Returned by pointer: " << endl;
    for (int i = 0; i < amount; i++)
        cout << nums[i] << endl;

    nums = arr(nums, amount);
    cout << "Returned by array: " << endl;
    for (int i = 0; i < amount; i++)
        cout << nums[i] << endl;

    return 0;
}
