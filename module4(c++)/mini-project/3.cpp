#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("content_list.txt");

    string line;
    int number = 1;

    while(getline(file, line))
    {
        int p1 = line.find("|");
        int p2 = line.find("|", p1 + 1);

        string title = line.substr(0, p1);
        string platform = line.substr(p1 + 1, p2 - p1 - 1);

        cout << number << ". " << title << " - " << platform << endl;

        number++;
    }

    file.close();

    return 0;
}
