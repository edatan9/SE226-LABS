#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int swapValues(int* a, int* b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}

int printArray(int* arr, int size) {
    for (int i=0; i<size; i++) {
        std::cout<<arr[i]<<" ";
    }
}

int findSum(int* arr, int size) {
    int sum=0;
    for (int i=0; i<size; i++) {
        sum+=arr[i];
    }
    std::cout<<"Sum of elements="<<sum<<std::endl;
}

int shiftRight(int *arr, int size) {
    int temp=arr[size-1];
    for(int i=size-1; i>=0; i--) {
       arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

int* createArray(int size) {
    int* arr = new int[size];
    return arr;
}

int* deleteArray(int* arr) {
    delete[] arr;
}

int main() {

    cout << "Creating dynamic array..." << endl;

    int size;
    cout << "Enter array size: ";
    cin >> size;

    int* arr = createArray(size);

    cout << "Enter values: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array elements:" << endl;
    printArray(arr, size);

    cout << "Sum of elements: " << findSum(arr, size) << endl;

    cout << "----------------------------------" << endl;

    int a = 5, b = 8;

    cout << "Swapping two numbers" << endl;
    cout << "Before swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapValues(&a, &b);

    cout << "After swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "----------------------------------" << endl;

    cout << "Shifting array to the right..." << endl;
    shiftRight(arr, size);

    cout << "Array after shiftRight:" << endl;
    printArray(arr, size);

    cout << "----------------------------------" << endl;

    cout << "Deleting array..." << endl;
    deleteArray(arr);

    cout << "Memory released successfully." << endl;

    return 0;
}
