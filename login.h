#include <iostream>


using namespace std;

bool login()
{
    string username, password;
    bool invalid = false;
    do
    {

        system("cls");
        print("--------------------------------------------------------------------------------");
        print("----------------------------------- ABC Bank -----------------------------------");
        print("--------------------------------------------------------------------------------");
        print("---------------------------------- LOGIN PAGE ----------------------------------");
        print("--------------------------------------------------------------------------------");
        print("|                                                                              |");
        print("|                                                                              |");
        print("--------------------------------------------------------------------------------");
        if(invalid){
            print("Invalid Credintials !!!\n\n");
        }
        print("Enter Username : ");
        cin >> username;
        print("Enter Password : ");
        cin >> password;

        if (username == "admin" && password == "admin")
        {
            return true;
        }
        else
        {
            invalid = true;
        }
    } while (invalid);
}