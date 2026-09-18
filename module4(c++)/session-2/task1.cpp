#include<iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    int isPublic;
};

main()
{
    Playlist p;

    p.name = "My Songs";
    p.createdOn = "18-09-2026";
    p.isPublic = 1;

    cout << "Playlist Name: " << p.name << endl;
    cout << "Created On: " << p.createdOn << endl;
    cout << "Is Public: " << p.isPublic << endl;

    return 0;
}
