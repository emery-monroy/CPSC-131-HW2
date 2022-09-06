#include <iostream>
using namespace std;
class vector131
{
public:
    // Default constructor to initialize
    // an initial capacity of 1 element and
    // allocating storage using dynamic allocation
    vector131();

    // destructor to deallocate storage allocated by dynamic allocation
    // to prevent memory leak
    ~vector131();

    // Function to add an element at the last
    void push(int data);

    // function to add an element at any index
    void push(int data, int index);

    // function to extract element at any index
    int get(int index);

    // function to delete last element
    void pop();

    // function to get the size of the vector
    int size();

    // function to get the capacity of the vector
    int getcapacity();

    // function to print array elements
    void print();

private:
    // array is the integer pointer
    // stores the address of the vector
    int* array;

    // capacity is the total storage
    // capacity of the vector
    int capacity;

    // current is the number of elements
    // currently present in the vector
    int current;
};