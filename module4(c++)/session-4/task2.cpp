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
main(){
	YouTuber y;
	y.username = "Diya";
	y.followers = 1200;
	y.channelName = "Diya Vlogs";
	y.displayProfile();
	y.uploadVideo("My First Vlog");
}
