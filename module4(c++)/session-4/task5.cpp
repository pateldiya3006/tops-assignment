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
class Podcaster : public SocialMediaUser{
	public:
		string podcastName;

		void publishEpisode(string episodeTitle){
			cout << "\nEpisode " << episodeTitle << " published on " << podcastName;
		}
};

class InstagramInfluencer : public SocialMediaUser{
	public:
		void postStory(string storyTitle){
			cout << "\n" << username << " posted a new story: " << storyTitle;
		}
};
main(){
	InstagramInfluencer i;
	i.username = "Diya";
	i.followers = 1200;
	i.displayProfile();
	i.postStory("My New Look");
}
