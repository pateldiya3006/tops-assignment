#include <iostream>
using namespace std;

class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout << "Uploading content to social media" << endl;
    }
};

class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Uploading photo or reel on Instagram" << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Uploading video on YouTube" << endl;
    }
};

int main()
{
    InstagramUploader instagram;
    YouTubeUploader youtube;

    instagram.uploadContent();
    youtube.uploadContent();

    return 0;
}
