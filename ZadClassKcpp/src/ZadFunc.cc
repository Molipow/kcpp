#include <iostream>
#include "../include/ZadFunc.h"

void Functions::first()
{
    std::cout << "Returned by value " << val(2,3) << std::endl;
    refer() = 10;
    std::cout << "Returned by reference " << n << std::endl;
    int amount = 10;
    int *nums = pntr(amount);
    std::cout << "Returned by pointer ";
    for (int i = 0; i < amount; i++)
        std::cout << nums[i];
    std::cout << std::endl;
    nums = arr(nums, amount);
    std::cout << "Returned by array ";
    for (int i = 0; i < amount; i++)
        std::cout << nums[i];
    std::cout << std::endl;
}

void Functions::second()
{
    const int rozmiar = 10;
    int tablica[rozmiar];
    for (int i = 0; i < rozmiar; i++)
        tablica[i] = i*2;

    dispArr(tablica, rozmiar);
}

int Functions::val(int a, int b)
{
    return a+b;
}

int &Functions::refer()
{
    return n;
}

int *Functions::pntr(int c)
{
    static int numbers[100];
    for (int i = 0; i < c; i++)
    {
        numbers[i] = i;
    }
    return numbers;
}

int *Functions::arr(int f[], int c)
{
    for (int i = 0; i < c; i++)
        f[i]++;
    return f;
}

void Functions::dispArr(int arr[], int asize)
{
    for (int i = 0; i < asize; i++)
        std::cout << arr[i] << std::endl;
}
