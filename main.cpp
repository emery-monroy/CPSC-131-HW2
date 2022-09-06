#include <iostream>

using namespace std;

#include "vector131.h"

int main()
{
    vector131 v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);

    cout << "Vector size : " << v.size() << endl;
    cout << "Vector capacity : " << v.getcapacity() << endl;

    cout << "Vector elements : ";
    v.print();

    v.push(100, 1);

    cout << "\nAfter updating 1st index" << endl;

    cout << "Vector elements of type int : " << endl;
    v.print();
    cout << "Element at 1st index of type int: " << v.get(1)
        << endl;

    v.pop();

    cout << "\nAfter deleting last element" << endl;

    cout << "Vector size of type int: " << v.size() << endl;
    cout << "Vector capacity of type int : "
        << v.getcapacity() << endl;

    cout << "Vector elements of type int: ";
    v.print();

    return 0;
}