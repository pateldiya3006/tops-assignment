#include<stdio.h>
struct Instaprofile{
	char username[20];
	int followers;
	struct Bio{
		char disciption[40];
		int age;
	}Bio;
};
main(){
	struct Instaprofile insta={"Pateljeniii",355,{"i am single",19}};
	printf("\nusername:=%s \nFollowers:=%d",insta.username,insta.followers);
	printf("\nDiscription:=%s \nage:=%d",insta.Bio.disciption,insta.Bio.age);
}
