#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel { //Base Class
    private:
        string Name;
        int SubscribersCount;
        list<string> PublishedVideoTitles;
    protected:
        string OwnerName;
    public:
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

        void Subscribe(){
            SubscribersCount++;
        }

        void Unsubscribe() {
            if(SubscribersCount == 0) return;
            SubscribersCount--;
        }

        void PublishVideo(string title) {
            PublishedVideoTitles.push_back(title);
        }

};


class CookingYouTubeChannel: public YouTubeChannel { //Derived Class
    public:
        CookingYouTubeChannel(string name, string ownerName)
        :YouTubeChannel(name, ownerName) {

        }
        void Practice() {
            cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        }
};


int main() {

    CookingYouTubeChannel CookingYtChannel("Amy's Kitchen", "Amy");
    CookingYtChannel.PublishVideo("Apple Pie");
    CookingYtChannel.PublishVideo("Chocolate Cake");
    CookingYtChannel.Subscribe();
    CookingYtChannel.Subscribe();
    CookingYtChannel.GetInfo();
    CookingYtChannel.Practice();

    YouTubeChannel ytChannel("CoolDude", "Hunter"); //Does Not have a Practice Function

}