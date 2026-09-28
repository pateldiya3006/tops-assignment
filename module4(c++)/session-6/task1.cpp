#include <iostream>
using namespace std;

class Song
{
private:
    string title;
    string artist;

public:
    void setTitle(string t)
    {
        title = t;
    }

    string getTitle()
    {
        return title;
    }

    void setArtist(string a)
    {
        artist = a;
    }

    string getArtist()
    {
        return artist;
    }
};

int main()
{
    Song s;

    s.setTitle("Tum Hi Ho");
    s.setArtist("Arijit Singh");

    s.setTitle("Kesariya");

    cout << "Title: " << s.getTitle() << endl;
    cout << "Artist: " << s.getArtist();

    return 0;
}
