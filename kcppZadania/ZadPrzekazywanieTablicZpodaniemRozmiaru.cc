#include <iostream>

using namespace std;

void foo(int arr[], int asize)
{
    for (int i = 0; i < asize; i++)
        cout << arr[i] << endl;
}

int main()
{
    const int rozmiar = 10;
    int tablica[rozmiar];
    for (int i = 0; i < rozmiar; i++)
        tablica[i] = i*2;

    foo(tablica, rozmiar);

    return 0;
}
