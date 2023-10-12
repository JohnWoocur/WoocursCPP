#include <iostream>
#include "common.h"
#include "login.h"
#include "MenuNavigation.h"
// Next Header files declaration

using namespace std;

// function decalration

int main()
{
    int input = 0;
    login:   //label for login
    login();

    while (true)
    {
        input = welcomeScreen();

        switch (input)
        {
        case 99:
            return 0;
            break;
        case 98:
            goto login; //goto login label
            break;
        case 1:
            print("create");
            break;
        }
    }
}

// definition
