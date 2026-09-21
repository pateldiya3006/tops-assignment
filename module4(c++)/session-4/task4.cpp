#include<iostream>
using namespace std;
class SocialMediaUser{
	public:
		string username;
		int followers;
		void displayProfile(){
			cout << "\nUsername: " << username;
			cout << "\nFollowers: " << followers;
		}
};
class YouTuber : public SocialMediaUser{
	public:
		string channelName;
		void uploadVideo(string title){
			cout << "\nVideo " << title << " uploaded to " << channelName;
		}
};
class GamingYouTuber : public YouTuber{
	public:
		void streamGame(string gameName){
			cout << "\n" << username << " is now streaming " << gameName << " on " << channelName;
		}
};
main(){
	GamingYouTuber g;
	g.username = "Diya";
	g.followers = 1200;
	g.channelName = "Diya Gaming";
	g.displayProfile();
	g.uploadVideo("My Gaming Video");
	g.streamGame("GTA V");
}
