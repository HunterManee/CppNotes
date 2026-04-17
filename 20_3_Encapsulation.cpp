#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel { //Memebers of class are private by default
    private:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideoTitles;

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

int main() {
    YouTubeChannel ytChannel("CoolDude", "Hunter");

    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("HTML & CSS for beginners");
    ytChannel.PublishVideo("C++ OOP");

    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();


}