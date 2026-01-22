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
    cin >> password >> endl;

    ofstream file("user.txt", ios::app);
    
    if (file.is_open()) {
        file << username << " " << password << endl;
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
    ifstream file("user.txt");
    string fileuser, filepass  //fileuser-username saved,filepass-password saved
    
        while (file >> fileuser >> filepass) {
            if (username == fileuser && password == filepass) {
                found = true;
                break;
            }
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
    int choice;
    bool menu = false;
    cout << "Do you have an account: 1/2" << endl;
    cin >> input;
    if (input == 1) {
        userregister();
        menu = true;
        
    }
    else-if (input == 2) {
        usersignin();
    }
    else {
        cout << "invalid input";
    }

    while (menu) {
        cout << "1-add a record\n";
        cout << "2-edit a record\n";
        cout << "3-delete a record\n";
        cout << "4-search a record\n";
        cout << "5-sort a record\n";
        cout << "6-display a record\n";
        cout << "Enter choice now";
        cin >> choice;

            switch (choice) {
            case 1: {
                // Add Item
                int id;
                string name, category, location, date, status;

                cout << "\n--- Add New Item ---" << endl;
                cout << "Enter ID: ";
                cin >> id;

                cout << "Enter Item Name: ";
                getline(cin, name);

                cout << "Enter Category: ";
                getline(cin, category);

                cout << "Enter Location Found: ";
                getline(cin, location);

                cout << "Enter Date: ";
                getline(cin, date);

                cout << "Enter Status (Lost/Found/Claimed): ";
                getline(cin, status);

                system.Add_Item(id, name, category, location, date, status);
                break;
            }

            case 2: {
                // Search Item
                string searchName;

                cout << "\n--- Search Item ---" << endl;
                cout << "Enter Item Name to search: ";
                getline(cin, searchName);

                system.Search_Name(searchName);
                break;
            }

            case 3: {
                // Display All Items
                cout << "\n--- Display All Items ---" << endl;
                system.Display_All();
                break;
            }

            case 4: {
                // Sort Items
                cout << "\n--- Sort Items ---" << endl;
                system.Sort();
                break;
            }

            case 5: {
                // Edit Item
                int editID;

                cout << "\n--- Edit Item ---" << endl;
                cout << "Enter Item ID to edit: ";
                cin >> editID;
                cin.ignore();

                system.Edit(editID);
                break;
            }

            case 6: {
                // Delete Item
                int deleteID;

                cout << "\n--- Delete Item ---" << endl;
                cout << "Enter Item ID to delete: ";
                cin >> deleteID;
                cin.ignore();

                system.Delete(deleteID);
                break;
            }

            case 7: {
                // Exit
                cout << "\nExiting program. Goodbye!" << endl;
                return 0;
            }

            default:
                cout << "\nInvalid choice! Please enter a number between 1-7." << endl;
                break;
            }
    }
    }
    
        
    
}
