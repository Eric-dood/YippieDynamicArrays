//COMSC-210 | Lab 6 | Eric-Giulio Hedes
#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5;

void enterArrayData(double*);
void outputArrayData(double*);
double sumArray(double*);

int main()
{
    double *arrayPtr = new double[SIZE];
    enterArrayData(arrayPtr);
    outputArrayData(arrayPtr);
    cout << endl << "Sum of values: " << sumArray(arrayPtr) << endl;
}

void enterArrayData(double *arr)
{
    double temp;
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\t Element #" << i << ": ";
        cin >> temp;
        *(arr + i) = temp;
        cin.ignore(1000, 10);
    }
    cout << "Data entry complete." << endl;
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