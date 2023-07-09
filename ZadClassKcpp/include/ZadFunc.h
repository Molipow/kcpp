#ifndef Func_H
#define Func_H

class Functions
{
    public:
    void first();
    void second();
    private:
    // Methods for 2.1
    int n;
    int val(int, int);
    int &refer();
    int *pntr(int);
    int *arr(int[], int);
    // Methods for 2.2
    void dispArr(int[], int);
};

#endif