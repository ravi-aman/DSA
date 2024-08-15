#include <iostream>
using namespace std;

class Vector {
public:
    int size;
    int capacity;
    int *arr;

    Vector() {
        size = 0;
        capacity = 1; 
        arr = new int[capacity];  
    }

    void add(int ele) {
        if (size == capacity) {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++) {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = ele;
        size++;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main() {
    Vector v;
    v.add(19);
    v.add(34);
    v.add(4);
    v.add(42);
    v.add(24);
    v.add(4);
    v.add(14);

    v.print();
    return 0;
}
