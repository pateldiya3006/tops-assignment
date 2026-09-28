#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "Tum Hi Ho" << endl;
    file << "Kesariya" << endl;
    file << "Apna Bana Le" << endl;
    file << "Chaleya" << endl;
    file << "Agar Tum Saath Ho" << endl;

    file.close();

    cout << "Songs saved successfully.";
    return 0;
}
