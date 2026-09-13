//COMSC-210 | Lab 6 | Eric-Giulio Hedes
#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5;

double * enterArrayData();
void outputArrayData(double*);
double sumArray(double*);

int main()
{
    double *arrayPtr = nullptr;
    arrayPtr = enterArrayData();
    outputArrayData(arrayPtr);
}

double * enterArrayData()
{
    double *temp = nullptr;
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\t Element #" << i << ": ";
        cin >> *(temp + i);
        cin.ignore(1000, 10);
    }
    return temp;
}

void outputArrayData(double *arr)
{
    cout << "Outputting data array elements: ";
    for (int i = 0; i < SIZE; i++)
        cout << *(arr + i) << " ";
}

double sumArray(double *arr)
{
    double sum;
    for (int i = 0; i < SIZE; i++)
        sum += *(arr + i);
    return sum;
}