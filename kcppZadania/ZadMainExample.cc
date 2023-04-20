#include <iostream>
#include <cstring>

using namespace std;

int a()
{
    cout << "5" << endl;
    return 5;
}

int b()
{
    cout << "4" << endl;
    return 4;
}

int c()
{
    cout << "3" << endl;
    return 3;
}

extern "C"
{
    int d()
    {
        printf("2\n");
        return 2;
    }

    int e()
    {
        printf("1\n");
        return 1;
    }
}


int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "a") == 0) a();
        else if (strcmp(argv[i], "b") == 0) b();
        else if (strcmp(argv[i], "c") == 0) c();
        else if (strcmp(argv[i], "d") == 0) d();
        else if (strcmp(argv[i], "e") == 0) e();
    }
    return 0;
}
