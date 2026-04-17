#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel { //Memebers of class are private by default
    public:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideoTitles;

        YouTubeChannel(string name, string ownerName) {
            Name = name;
            OwnerName = ownerName;
            SubscribersCount = 0;
        }

        void GetInfo() {
            cout << "Name: " << Name << endl;
            cout << "Owner Name: " << OwnerName << endl;
            cout << "Subscribers Count: " << SubscribersCount << endl;
            cout << "Video Titles: " << endl;
            for(string videoTitle: PublishedVideoTitles) {
                cout << "\t" << videoTitle << endl;
            }
        }
};

int main() {
    YouTubeChannel ytChannel("CoolDude", "Hunter");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");

    YouTubeChannel ytChannel2("AmySings", "Amy");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();


}