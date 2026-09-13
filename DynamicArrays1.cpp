//COMSC-210 | Lab 6 | Eric-Giulio Hedes
#include <iostream>
#include <iomanip>
using namespace std;

//Define the global constant variable that will be used for the array size.
const int SIZE = 5;

//Define the function prototypes
void enterArrayData(double*);
void outputArrayData(double*);
double sumArray(double*);

//Start of main()
int main()
{
    //Create a dynamic pointer array that will be used for this program
    double *arrayPtr = new double[SIZE];
    //Ask the user to enter elements for the arrays
    enterArrayData(arrayPtr);
    //Output the data
    outputArrayData(arrayPtr);
    //Use sumArray() and print a message that outputs the sum
    cout << endl << "Sum of values: " << sumArray(arrayPtr) << endl;
}
//End of main()

//Start of enterArrayData()
void enterArrayData(double *arr)
{
    //Define a temporary variable that will be used for the array
    double temp;
    //Print out a message that asks the user to enter the array elements
    cout << "Data entry for the array:" << endl;
    //Use a nested loop to input all arrays
    for (int i = 0; i < SIZE; i++)
    {
        //Use cin to add the elements to the array
        cout << "\t Element #" << i << ": ";
        cin >> temp;
        cin.ignore(1000, 10);
        //Use pointer notation and the temporary variable in tandem to add it to the list
        *(arr + i) = temp;
    }
    //After the loop, print out a message signifying the completion of the process
    cout << "Data entry complete." << endl;
}
//End of enterArrayData()

//Start of outputArrayData()
void outputArrayData(double *arr)
{
    //Print out a message about outputting data array elements
    cout << "Outputting data array elements: ";
    //Print out all elements individually by using a nested loop
    for (int i = 0; i < SIZE; i++)
        cout << *(arr + i) << " ";
}
//End of outputArrayData()

//Start of sumArray()
double sumArray(double *arr)
{
    //Define a temporary sum variable that will be returned at the end of the function
    double sum;
    //Use a nested loop to add up all the elements to the sum variable
    for (int i = 0; i < SIZE; i++)
        sum += *(arr + i);
    //Then return the sum
    return sum;
}
//End of sumArray()