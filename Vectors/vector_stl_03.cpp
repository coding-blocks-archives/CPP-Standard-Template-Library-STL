#include <iostream>
#include <vector>
#include <algorithm>        // to use sort()
#include <functional>       // to use greater()
using namespace std;

int main()
{
    //****************************************************************************************************
    //Sorting an Integer Vector in Ascending order

    vector<int> a = { 100, 0, 23, 69, 43, 10};

    cout << "Vector before Sorting: ";
    for (unsigned int i = 0; i < a.size(); i++)  //using unsigned int because size() returns unsigned int
        cout << a[i] << " ";
    cout << endl;

    // Sorting the vector in ascending order using sort() function and begin(), end() iterators
    sort(a.begin(), a.end());

    cout << "Sorted Vector(ascending order): ";
    for (unsigned int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    //****************************************************************************************************

    //****************************************************************************************************
    //Sorting an Integer Vector in Descending order

    cout << endl;
    vector<int> b = { 0, 1, 3, 5, 88, 73, 100 };

    cout << "Vector before Sorting: ";
    for (unsigned int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;

    // Sorting the vector in descending order using sort() and greater() function and begin(), end() iterators
    sort(b.begin(), b.end(), greater<int>());

    cout << "Sorted Vector(descending order): ";
    for (unsigned int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;

    //****************************************************************************************************

    //****************************************************************************************************
    //Finding the max and min element in a vector

    vector<int> c = { 23, 45, 129, 456, 100000, 3456, 90, 0};

    cout << "\nVector: ";
    for (unsigned int i = 0; i < c.size(); i++)
        cout << c[i] << " ";

    // Finding the smallest element in the vector
    cout << "\nMin Element = "
         << *min_element(c.begin(), c.end());

    // Finding the largest element in the vector
    cout << "\nMax Element = "
         << *max_element(c.begin(), c.end());

    //****************************************************************************************************


    return 0;
}
