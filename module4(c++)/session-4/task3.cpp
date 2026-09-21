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
class Podcaster : public SocialMediaUser{
	public:
		string podcastName;
		void publishEpisode(string episodeTitle){
			cout << "\nEpisode " << episodeTitle << " published on " << podcastName;
		}
};
int main(){
	Podcaster p;
	p.username = "Diya";
	p.followers = 1200;
	p.podcastName = "Diya Talks";
	p.displayProfile();
	p.publishEpisode("Episode 1");
}
