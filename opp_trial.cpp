#include <iostream>
#include <list>
using namespace std;


class youtubeChannel {
   // name, ownerName, subscriberCount ,PublishedVids,
public:
    //just define the data types like for structures in c
    string name;
    string ownerName;
    int subscriberCount;
    list<string> PublishedVids;
};

int main()
{
    youtubeChannel myChannel;
    myChannel.name = "learn programming";
    myChannel.ownerName = "hamza kyamanywa";
    myChannel.subscriberCount = 1900;
    myChannel.PublishedVids = { "fist vid", "second vid", "third vid" };

    cout << "name: " << myChannel.name<<endl;
    cout<< " owner: " << myChannel.ownerName << endl;
    cout << "subscribers: " << myChannel.subscriberCount << endl;
    cout << "list of videos: " << endl;
    for (auto& it : myChannel.PublishedVids) {
        cout << it << endl;
    }
    cout << "the videos" << endl;
    for (string video_title : myChannel.PublishedVids) {
        cout << video_title << endl;
    }
    system("pause>0");
    
}


