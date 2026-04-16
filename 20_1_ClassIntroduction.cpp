#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel { //Memebers of class are private by default
    public:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideoTitles;
};

int main() {
    YouTubeChannel ytChannel;
    ytChannel.Name = "CoolDude";
    ytChannel.OwnerName = "Hunter";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideoTitles = {
        "C++ for Beginners Video 1",
        "Html & CSS Video 1",
        "JavaScript Basics Video 1"
    };

    cout << "Name: " << ytChannel.Name << endl;
    cout << "Owner Name: " << ytChannel.OwnerName << endl;
    cout << "Subscribers Count: " << ytChannel.SubscribersCount << endl;
    cout << "Video Titles: " << endl;
    for(string videoTitle: ytChannel.PublishedVideoTitles) {
        cout << "\t" << videoTitle << endl;
    }

}