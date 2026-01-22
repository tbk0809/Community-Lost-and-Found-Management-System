#include <iostream>
#include <fstream>
#include "Community Lost & Found Management System.h"
using namespace std;

int input;
string username, password;

void userregister() {
    cout << "Please enter ur username";
    cin >> username >> endl;
    cout << "Please enter ur password";
    cin >> userpassword >> endl;

    ofstream file(user.txt, ios::app); 
    
    if (file.is_open()) {
        file << username << " " << userpassword << endl;
        file.close();
    }
    else
    {
        cout << "Error to save,plz try again" << endl;
    }
}

void usersignin() {

    bool found = false; //if username and password found 
   
    cout << "Enter username";
    cin >> username;
    cout << "Enter password";
    cin >> password;
    ifstream file(user.txt);
    string fileuser, filepass  //fileuser-username saved,filepass-password saved
    
    while (username = fileuser && filepass = password) {
            found=true
      }

    if (found) {
        cout << "welcome bitch" << username << endl;
    }
    else
    {
        cout << "invalid password or username, plz try again" << endl;
    }
    }
}







int main()
{
    cout << "Do you have an account: Y/N" << endl;
    cin >> input;
    if (input = 1) {
        userregister();
    }
    else-if (input = 2) {
        usersignin();
    }
    else {
       cout<<"invalid input"
    }

    
    
}
