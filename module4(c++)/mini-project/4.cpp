#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("content_list.txt");

    string items[100];
    string line;
    int count = 0;

    while(getline(file, line))
    {
        items[count] = line;
        count++;
    }

    file.close();

    for(int i = 0; i < count; i++)
    {
        int p1 = items[i].find("|");
        int p2 = items[i].find("|", p1 + 1);

        string title = items[i].substr(0, p1);
        string platform = items[i].substr(p1 + 1, p2 - p1 - 1);

        cout << i + 1 << ". " << title << " - " << platform << endl;
    }

    int number;
    cout << "Enter content number: ";
    cin >> number;
    cin.ignore();

    if(number < 1 || number > count)
    {
        cout << "Invalid number.";
        return 0;
    }

    string newStatus;

    cout << "Enter new status: ";
    getline(cin, newStatus);

    int p3 = items[number - 1].find("|", items[number - 1].find("|", items[number - 1].find("|") + 1) + 1);

    items[number - 1] = items[number - 1].substr(0, p3 + 1) + newStatus;

    ofstream outFile("content_list.txt");

    for(int i = 0; i < count; i++)
    {
        outFile << items[i] << endl;
    }

    outFile.close();

    cout << "Status updated successfully.";

    return 0;
}
