//                                          ------Project 3--------
//                                           Electronic Card System
// Mainly focussed on 
//                 1.Normal User related functionalities
//                         signup with username/email, view/select different categories (birthday, marraige, friendship etc), make request to be member user
//                 2.Member User related functionalities
//                         already registered users, can do everything normal user can, customize card, select sound and textual space,send to desired person
//                         make profile and contact list, discard/cancel any transaction under process
//                 3.Administrator related functionalities
//                         add/modify/delete cards, insert new cards, add/delete music

#include <iostream>
#include<string>
using namespace std;
class User {
    int id;
    string name;
    string address;
    string setname(string username) {
        username = name;
    }
    string getname(string username) {
        return name;
    }
    void viewcard() {
        cout << "Username : " << name << endl;
        cout << " ID: " << id << endl;
        cout << "User Address: " << address << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

