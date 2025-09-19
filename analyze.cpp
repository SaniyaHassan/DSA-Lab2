#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Pointer address: " << ptr
         << ", Value: " << *ptr << endl;
}

int main() {
    int iValue = 123;  // stack
    cout << "Stack variable:\n";
    analyze_pointer(&iValue);

    int* heapInt = new int;
    *heapInt = 456;    // heap
    cout << "Heap variable:\n";
    analyze_pointer(heapInt);

    delete heapInt;
    return 0;
}
