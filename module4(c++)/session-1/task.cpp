#include<iostream>
using namespace std;

class Task
{
public:
    string title;
    int isDone;

    void markDone()
    {
        isDone = 1;
    }

    void display()
    {
        cout << title << endl;

        if(isDone == 1)
        {
            cout << "DONE";
        }
        else
        {
            cout << "Pending";
        }
    }
};

main()
{
    Task t;

    t.title = "Study C++";
    t.isDone = 0;

    t.markDone();

    t.display();

    return 0;
}
