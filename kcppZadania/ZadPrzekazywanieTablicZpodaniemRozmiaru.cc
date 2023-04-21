#include <iostream>

using namespace std;

void foo(int arr[], int asize)
{
    for (int i = 0; i < asize; i++)
        cout << arr[i] << endl;
}

int main()
{
    int rozmiar = 10;
    int tablica[rozmiar];
    for (int i = 0; i < rozmiar; i++)
        tablica[i] = i;

    foo(tablica, rozmiar);

    return 0;
}
