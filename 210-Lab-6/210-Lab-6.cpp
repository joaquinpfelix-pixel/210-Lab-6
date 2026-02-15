#include <iostream>
#include <string>

using namespace std;

//Funtction Prototypes
void enterArrayData(double* ptr, int size);
void outputArrayData(double* ptr, int size);
double sumArray(double* ptr, int size);

int main() {

    const int size = 5;
    double* numbers = new double[size];

    cout << "Data entry for the array: " << endl;

    enterArrayData(numbers, size);
    outputArrayData(numbers, size);
    cout << "Sum of values: " << sumArray(numbers, size) << endl;  


}