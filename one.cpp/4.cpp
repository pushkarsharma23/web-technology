#include<iostream>
using namespace std;

class Student
{
    int marks;

public:
    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void checkMarks()
    {
        try
        {
            if (marks < 0 || marks > 100)
            {
                throw marks;
            }

            cout << "Valid Marks: " << marks << endl;
        }
        catch (int)
        {
            cout << "Invalid Marks! Marks should be between 0 and 100." << endl;
        }
    }
};

int main()
{
    Student s;

    s.getMarks();
    s.checkMarks();

    return 0;
}