#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string title, platform, status;
    int views;

    cout << "Enter title: ";
    getline(cin, title);

    cout << "Enter platform: ";
    getline(cin, platform);

    cout << "Enter views: ";
    cin >> views;
    cin.ignore();

    cout << "Enter status: ";
    getline(cin, status);

    ofstream file("content_list.txt", ios::app);

    file << title << "|" << platform << "|" << views << "|" << status << endl;

    file.close();

    cout << "Content saved successfully.";

    return 0;
}
