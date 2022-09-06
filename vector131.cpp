#include "vector131.h"

// Default constructor to initialize
// an initial capacity of 1 element and
// allocating storage using dynamic allocation
vector131::vector131()
{
    array = new int[1];
    capacity = 1;
    current = 0;
}
// destructor to deallocate storage allocated by dynamic allocation
// to prevent memory leak
vector131::~vector131()
{
    delete[] array;
}

// Function to add an element at the last
void vector131::push(int data)
{

    // if the number of elements is equal to the
    // capacity, that means we don't have space to
    // accommodate more elements. We need to double the
    // capacity
    if (current == capacity)
    {
        int* temp = new int[2 * capacity];

        // copying old array elements to a new array
        for (int i = 0; i < capacity; i++)
        {
            temp[i] = array[i];
        }

        // deleting the previous array
        delete[] array;
        capacity *= 2;
        array = temp;
    }

    // Inserting data
    array[current] = data;
    current++;
}

// function to add an element at any index
void vector131::push(int data, int index)
{

    // if the index is equal to capacity then this
    // function is the same as push defined above
    if (index == capacity)
        push(data);
    else
        array[index] = data;
}

// function to extract element at any index
int vector131::get(int index)
{

    // if index is within the range
    if (index < current)
        return array[index];
}

// function to delete last element
void vector131::pop()
{
    current--;
}

// function to get the size of the vector
int vector131::size()
{
    return current;
}

// function to get the capacity of the vector
int vector131::getcapacity()
{
    return capacity;
}

// function to print array elements
void vector131::print()
{
    for (int i = 0; i < current; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}