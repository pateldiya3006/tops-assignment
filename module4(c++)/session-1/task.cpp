#include<iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title << endl;

        if(isDone == true)
        {
            cout << "DONE";
        }
        else
        {
            cout << "Pending";
        }
    }
};

int main()
{
    Task t;

    t.title = "Study C++";
    t.isDone = false;

    t.markDone();

    t.display();

    return 0;
}
