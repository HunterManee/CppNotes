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
        int ContentQuality;
    public:
        
        YouTubeChannel(string name, string ownerName) {
            Name = name;
            OwnerName = ownerName;
            SubscribersCount = 0;
            ContentQuality = 0;
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
        void CheckAnalytics() {
            if(ContentQuality < 5)
                cout<< Name << " has bad quality content." << endl;
            else
                cout << Name << " has great quality content." << endl;
        }
};


class CookingYouTubeChannel: public YouTubeChannel { //Derived Class
    public:
        CookingYouTubeChannel(string name, string ownerName)
        :YouTubeChannel(name, ownerName) {

        }
        void Practice() {
            cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
            ContentQuality++;
        }
};

class SingersYoutubeChannel :public YouTubeChannel {
    public:
        SingersYoutubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

        }
        void Practice() {
            cout << OwnerName << "is taking singing classes, learning new songs, learning how to dance..." << endl;
            ContentQuality++;
        }
};


int main() {

    CookingYouTubeChannel cookingYTChannel("Amy's Kitchen", "Amy");
    SingersYoutubeChannel singingYTChannel("HunterSings", "Hunter");

    //Polymorphism
    cookingYTChannel.Practice();
    singingYTChannel.Practice();
    singingYTChannel.Practice();
    singingYTChannel.Practice();
    singingYTChannel.Practice();
    singingYTChannel.Practice();

    //Pointer
    YouTubeChannel* yt1 = &cookingYTChannel;
    YouTubeChannel* yt2 = &singingYTChannel;

    //Invoke Methods of Pointers
    yt1->CheckAnalytics();
    yt2->CheckAnalytics();


}