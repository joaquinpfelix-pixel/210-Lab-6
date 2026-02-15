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

    

    enterArrayData(numbers, size);
    outputArrayData(numbers, size);
    cout << "Sum of values: " << sumArray(numbers, size) << endl;  


}

void enterArrayData(double* numbers, int size){
    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "    > Element #" << i << ": ";
        cin >> *(numbers + i);
    }
    
    cout << "Data entry complete." << endl;

}

void outputArrayData(double* numbers, int size){
    cout << "Outputting array elements: ";

    for (int i = 0; i < size; i++)
    {
        cout << (numbers + i) << " ";
    }
}

double sumArray(double* numbers, int size){
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(numbers + i);
    }
}