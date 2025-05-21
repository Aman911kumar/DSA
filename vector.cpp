#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1; // empty vector
    vector<int> vec2 = {1, 2, 3};
    vector<int> vec3(5, 0); // 5 -> size of the vector, 0 -> inital value of all index

    vector<char> chvec = {'a', 'm', 'a', 'n'};

    // for each loop sytax for vector
    for (char i : chvec)
    {
        cout << i;
    }
    cout << endl;

    // size of vector
    cout << "size of chvec = " << chvec.size() << endl;

    // pushing value in vector
    chvec.push_back('K');

    // after pushing value
    for (char i : chvec)
    {
        cout << i;
    }
    cout << endl;

    // removing last value in vector
    chvec.pop_back();

    // after poping value
    for (char i : chvec)
    {
        cout << i;
    }
    cout << endl;

    // printing fist value of vector
    cout << "First value = " << chvec.front() << endl;
    // printing last value of vector
    cout << "last value = " << chvec.back() << endl;

    // printing value of index 3
    cout<< chvec.at(3);

    return 0;
}