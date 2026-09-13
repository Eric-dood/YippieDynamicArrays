//COMSC-210 | Lab 6 | Eric-Giulio Hedes
#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5;

void enterArrayData(double*);
void outputArrayData();
void sumArray();

int main()
{
    double *arrayPtr = nullptr;
    enterArrayData(arrayPtr);
}

void enterArrayData(double *arr)
{
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\t Element #" << i << ": ";
        cin >> *(arr + i);
        cin.ignore(1000, 10);
    }
}