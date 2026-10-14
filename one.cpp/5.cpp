#include <iostream>
using namespace std;

class Array
{
    int arr[10];

public:
    Array()
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = (i + 1) * 10;
        }
    }

    void displayElement(int index)
    {
        try
        {
            if (index < 0 || index > 9)
            {
                throw "Array Index Out of Bounds";
            }

            cout << "Element = " << arr[index] << endl;
        }
        catch (const char* msg)
        {
            cout << "Error: " << msg << "." << endl;
        }
    }
};

int main()
{
    Array a;
    int index;

    cout << "Enter index: ";
    cin >> index;

    a.displayElement(index);

    return 0;
}