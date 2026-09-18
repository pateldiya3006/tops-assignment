#include<iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;
};

class TaskList
{
public:
    Task tasks[5];
    int count = 0;

    void addTask(string title)
    {
        tasks[count].title = title;
        tasks[count].isDone = false;
        count++;
    }

    void markTaskDone(int index)
    {
        tasks[index].isDone = true;
    }

    void showTasks()
    {
        for(int i = 0; i < count; i++)
        {
            cout << i + 1 << ". " << tasks[i].title;

            if(tasks[i].isDone == true)
            {
                cout << " - DONE";
            }
            else
            {
                cout << " - Pending";
            }

            cout << endl;
        }
    }
};

int main()
{
    TaskList list;

    list.addTask("Study C++");
    list.addTask("Complete Assignment");
    list.addTask("Practice English");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
}
