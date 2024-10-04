#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <Windows.h>
#include <fstream> //Hawa Hardy
using namespace std;

//Creating file that saves game progress
ofstream gamefile("GameProgress.txt"); //Hawa added

class Profile {
    private:
        string name;

    public:
        Profile(string n_ame) : name(n_ame) {}

        string getName() const {
            return name;  }
};


class ProfileManager {
    private:
        vector<Profile> profiles;

    public:
        void addProfile(const Profile& profile) {
            profiles.push_back(profile);}


        const Profile& getProfile(int index) const {
            return profiles.at(index);}


        int getNumProfiles() const {
            return profiles.size();}
};

//Game class with story chapters as member functions
class Game : public Profile {
    private:
        string you_are;

    public:
        char opt;
        Game(const string& _name, const string& _youare) : Profile(_name), you_are(_youare) {}

        void intro() const {
            char smiley = 2;
            //Hawa added \n and \t

            cout << "\n\t\tWelcome " << you_are <<" "<< getName() << smiley << endl;

            string arr[] = {"\n\tOnce upon a time,", "there was an explorer named ",getName(), " who set out on an adventure with their trusted companions:", "a dwarf named", "Tyrion Lannister,", "a martial artist named", "Bruce Lee", "and a samurai named", " Akira.", " They were on a mission to find a lost treasure, but as they trekked through the dense forest, they realized they were lost.", "\n\n\tAs they searched for a way out, they stumbled upon a riddle that hinted at a key to unlock the path to their escape.",  " The riddle led them deep into the heart of the forest, and they encountered many challenges and obstacles along the way.", " The hazardous zone, which was covered", "in poisonous plants,", "was the first barrier they had to cross.", "\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n AT THE HAZARDOUS ZONE.\n", "A. Use a machete to clear vines\n", "B. Use hands to clear vines\n"};

            int n = sizeof(arr)/sizeof(arr[0]);

            vector<string> my_printout(arr, arr + n);

            for(string x : my_printout){
                sleep(1);
                cout << x << " " ;}

                //Hawa added, for loop below stores string arr into "GameProgress" text file
            for (int j=0; j<n; j++)
            {
                gamefile << arr[j];
            }



        }
        void scoreInc(int& ini_Score) {
            ini_Score+=10;

        }
        void scoreDec(int& ini_Score){
            if(ini_Score > 0)
                ini_Score-=5;
        }

        void hazardous_zone(char option) const {

            switch(option){
                case 'a':{
                    string arr2[] = {"\n\tThe explorer and his three friends used a machete they found around the hazardous zone", " filled with tangled vines and thick undergrowth", "to clear their path, hacking away at the vegetation with all their might.\n"};

                    int n = sizeof(arr2)/sizeof(arr2[0]);

                    vector<string> my_printout1(arr2, arr2 + n);

                    for(string x : my_printout1){
                        sleep(1);
                        cout << x << " " ;}
                        //Hawa added, for loop below stores string arr2 into "GameProgress" text file
                    for (int j=0; j<n; j++)
                    {
                        gamefile << arr2[j];
                    }

                    break;}


                case 'b':{
                    string arr2[] = {"\n\tLost in a dense hazardous zone,", " the explorer and his three friends stumbled the thick vines blocking their path.", " With no tools at their disposal, they used their bare hands to clear the way.",  "As they emerged from the forest, exhausted but triumphant,",  "they knew they could overcome any obstacle as long as they had each other.", "Their joy was cut short as they saw the samurai, Akira, had suffered from a scratch of a posionous vine", "The venom spread quickly through her body and the explorer and the other friends watched as Akira slowly took her last breaths."};

                    int n = sizeof(arr2)/sizeof(arr2[0]);

                    vector<string> my_printout1(arr2, arr2 + n);

                    for(string x : my_printout1){
                        sleep(1);
                        cout << x << " " ;}

                    //Hawa added, for loop below stores string arr2 into "GameProgress" text file
                    for (int j=0; j<n; j++)
                    {
                        gamefile << arr2[j];
                    }

                    break;}
            }



                string arr[] = {"\n\tThe explorer and his friends were just catching their breath after going past the hazardous zone", "when they heard the terrifying sound of drums and the approach of cannibals.",  "They sprinted towards the sound of rushing water and arrived at a wide river,", "their only hope of escape.", "\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n AT THE RIVER.\n", "A. Use a boat to cross\n", "B. Swim quickly across\n"};

                int n = sizeof(arr)/sizeof(arr[0]);

                vector<string> my_printout(arr, arr + n);

                for(string x : my_printout){
                sleep(1);
                cout << x << " " ;}

                //Hawa added, for loop below stores string arr into "GameProgress" text file
                    for (int j=0; j<n; j++)
                    {
                        gamefile << arr[j];
                    }

        }


        void river(char option) const {

            switch(option){
                case 'a':{
                    string arr2[] = {"\n\tSpotting a small boat on the bank, they quickly jumped in and began to row with all their might.", " Behind them, they could hear the angry shouts of the cannibals fading into the distance as they reached the other side, safe at last.\n"};

                    int n = sizeof(arr2)/sizeof(arr2[0]);

                    vector<string> my_printout1(arr2, arr2 + n);

                    for(string x : my_printout1){
                        sleep(1);
                        cout << x << " " ;}

                        //Hawa added, for loop below stores string arr2 into "GameProgress" text file
                    for (int j=0; j<n; j++)
                    {
                        gamefile << arr2[j];
                    }

                    break;}


                case 'b':{
                    string arr2[] = {"\n\tWithout a boat, they had no choice but to take a deep breath and plunge into the rushing water, fighting against the current with every stroke.", "Exhausted and gasping for breath, they finally reached the other side,", "relieved to have escaped the clutches of the cannibals.", " They were free from the cannibals, but the martial artist, Bruce Lee had suffered from a bite from a piranha in the river, leaving him injured\n"};

                    int n = sizeof(arr2)/sizeof(arr2[0]);

                    vector<string> my_printout1(arr2, arr2 + n);

                    for(string x : my_printout1){
                        sleep(1);
                        cout << x << " " ;}

                    //Hawa added, for loop below stores string arr2 into "GameProgress" text file
                    for (int j=0; j<n; j++)
                    {
                        gamefile << arr2[j];
                    }

                    break;}
            }


                string arr[] = {"\n\tEmerging from the river, the explorer and his friends looked up and saw the looming mountain they had been seeking,", "the key to their escape hidden somewhere at the top.", "\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\nAT THE LOOMING MOUNTAIN.\n", "A. A phoenix comes to carry you to the top\n", "B. Use mountain climbing tools to climb to the top\n"};

                int n = sizeof(arr)/sizeof(arr[0]);

                vector<string> my_printout(arr, arr + n);

                for(string x : my_printout){
                sleep(1);
                cout << x << " " ;}

                //Hawa added, for loop below stores string above into "GameProgress" text file
                    for (int j=0; j<n; j++)
                    {
                        gamefile << arr[j];
                    }

        }


         void mountain(char option) const {

            switch(option){
                case 'a':{
                    string arr2[] = {"\n\tAs the explorer and his friends struggled up the steep mountain path,", "they suddenly heard the piercing cry of a phoenix overhead.", "To their amazement, the mythical bird swooped down and offered to carry them to the summit,", " where the key to their escape awaited.", "With the phoenix's help, they reached the top, grateful for the magical assistance that had saved them from exhaustion and certain failure.\n"};

                    int n = sizeof(arr2)/sizeof(arr2[0]);

                    vector<string> my_printout1(arr2, arr2 + n);

                    for(string x : my_printout1){
                        sleep(1);
                        cout << x << " " ;}

                    //Hawa added, for loop below stores string arr2 into "GameProgress" text file
                    for (int j=0; j<n; j++)
                    {
                        gamefile << arr2[j];
                    }

                    break;}


                case 'b':{
                    string arr2[] = {"\n\tThe explorer and his friends faced a daunting challenge as they set out to climb the treacherous mountain to find the key to their escape. But with their trusty climbing gear and a shared sense of determination, they made their way up the rugged terrain, inch by inch. The dwarf, Tyrion, lost his balance during the climb and fell down to his death.\n"};

                    int n = sizeof(arr2)/sizeof(arr2[0]);

                    vector<string> my_printout1(arr2, arr2 + n);

                    for(string x : my_printout1){
                        sleep(1);
                        cout << x << " " ;}

                    //Hawa added, for loop below stores string arr2 into "GameProgress" text file
                    for (int j=0; j<n; j++)
                    {
                        gamefile << arr2[j];
                    }

                    break;}
            }
        }


};

int main() {
    ProfileManager profileManager;

    char optA;
    char optB;
    char optC;
    int myScore = 0;
    int choice;

    //Title
    cout << "              ***************************      (/_/)\n";
    cout << "  (/_/)       *  Group 3 Text-Adventure *     (='.'=)\n";
    cout << " (='.'=)      *   Journey to the West~  *     (')_(')\n";
    cout << " (')_(')      ***************************\n\n";
    do {
        //Hawa added \n before 1st cout
        cout << "\nChoose an option:\n";
        cout << "1. Create a new profile\n";
        cout << "2. Play\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name;
            cout << "Enter your profile name: ";
            cin >> name;

            Profile profile(name);
            profileManager.addProfile(profile);

            int index = profileManager.getNumProfiles() - 1;
            cout << "Profile created with index " << index << ", name " << profile.getName() << endl;

            break;
        }

        case 2: {
            int index;
            cout << "Enter the index of the profile you want to access (starting from 0): ";
            cin >> index;

            if (index >= 0 && index < profileManager.getNumProfiles()) {
                const Profile& profile = profileManager.getProfile(index);
                cout << "Profile found with name " << profile.getName() << endl;

                Game play(profile.getName(), "explorer");
                //Hawa added system clear screen
               // system("cls");


                play.intro();
                cout << "\tChoose your option (a or b)" << endl;
                cin >> optA;
                cout << "\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                play.hazardous_zone(optA);
                if(optA == 'a'){
                    play.scoreInc(myScore);
                }else{
                    play.scoreDec(myScore);
                }
                cout << "\tChoose your option (a or b)" << endl;
                cin >> optB;
                cout << "\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                play.river(optB);
                if(optB == 'a'){
                    play.scoreInc(myScore);
                }else{
                    play.scoreDec(myScore);
                }
                cout << "\tChoose your option (a or b)" << endl;
                cin >> optC;
                cout << "\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
                play.mountain(optC);
                if(optC == 'a'){
                    play.scoreInc(myScore);
                }else{
                    play.scoreDec(myScore);
                }


                  if((optA == 'a') && (optB == 'a') && (optC == 'a'))
                {cout << "\n\tUpon reaching the summit of the mountain, the explorer and his three friends discovered the key they had been searching for, which ultimately provided them with a way to escape to safety. Fortunately, all of them were unhurt and in good condition, having completed the journey without any harm or damage........................THE END!!!!!!\n\n" << endl << "Your score is: " << myScore << endl;}
                  else if((optA == 'a') && (optB == 'a') && (optC == 'b'))
                {cout << "\n\tThe explorer and his three friends embarked on a challenging journey to climb a treacherous mountain and locate the key that would lead them to freedom. With perseverance and the aid of climbing gear, they successfully made it to the mountain's peak where they unlocked the key to their escape. Unfortunately, one of their companions, Tyrion, was not present to celebrate their success and share in their happiness........................THE END!!!!!!\n\n" << endl << "Your score is: " << myScore << endl;}
                  else if((optA == 'a') && (optB == 'b') && (optC == 'a'))
                {cout << "\n\tAfter a perilous journey, the explorer and his three companions reached the mountain's peak and located the key to their freedom, unlocking the path to safety. However, one of the friends, Bruce Lee, sustained injuries from a piranha bite and was still in recovery, despite the group's overall success........................THE END!!!!!!\n\n" << endl << "Your score is: " << myScore << endl;}
                  else if((optA == 'a') && (optB == 'b') && (optC == 'b'))
                {cout << "\n\tThe group of adventurers successfully reached the mountain's summit and discovered the key that would lead them to safety, bringing an end to their difficult journey. However, Bruce Lee had sustained an injury from a piranha bite and was still recovering. Despite their success, they were unable to celebrate with their friend Tyrion who was absent.......................THE END!!!!!!\n\n" << endl << "Your score is: " << myScore << endl;}
                  else if((optA == 'b') && (optB == 'a') && (optC == 'a'))
                {cout << "\n\tThe group of adventurers reached the summit of the mountain and located the key that would grant them freedom from their struggles. The explorer, Lee, and Tyrion successfully made it to the top, but unfortunately, they lost their friend Akira in the hazardous area during their journey........................THE END!!!!!!\n\n" << endl << "Your score is: " << myScore << endl;}
                  else if((optA == 'b') && (optB == 'a') && (optC == 'b'))
                {cout << "\n\tAfter reaching the mountain's summit, the explorer and Lee found the key that would lead them to escape, bringing an end to their quest. Sadly, their companions Akira and Tyrion did not survive the journey and passed away during their mission........................THE END!!!!!!\n\n" << endl << "Your score is: " << myScore << endl;}
                  else if((optA == 'b') && (optB == 'b') && (optC == 'a'))
                {cout << "\n\tAfter enduring a difficult journey, the explorer and the dwarf reached the summit of the mountain and discovered the key to their freedom. Although Bruce Lee was also alive, he was still recovering from a piranha bite sustained during the journey. Sadly, their companion Akira did not survive the journey and passed away.......................THE END!!!!!!\n\n" << endl << "Your score is: " << myScore << endl;}
                  else if((optA == 'b') && (optB == 'b') && (optC == 'b'))
                {cout << "\n\tFThe group of adventurers reached the mountain's peak and located the key that would lead them to freedom. However, only the explorer and an injured Bruce Lee survived the journey, as the rest of the group did not make it to the top. Although they achieved their goal, it was a somber occasion due to the loss of their companions........................THE END!!!!!!\n\n" << endl << "Your score is: " << myScore << endl;}


            } else {
                cout << "Invalid index." << endl;
            }

            break;
        }



        case 3:

            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (choice != 3);


    return 0;
}

