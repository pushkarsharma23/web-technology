#include <iostream>
using namespace std;

class VotingException
{
public:
    void showMessage()
    {
        cout << "Exception: Not eligible for voting." << endl;
    }
};

class Voter
{
    int age;

public:
    Voter(int a)
    {
        age = a;
    }

    void checkEligibility()
    {
        if (age < 18)
        {
            throw VotingException();
        }
        else
        {
            cout << "Eligible for voting." << endl;
        }
    }
};

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    Voter v(age);

    try
    {
        v.checkEligibility();
    }
    catch (VotingException e)
    {
        e.showMessage();
    }

    return 0;
}