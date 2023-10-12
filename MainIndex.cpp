#include <iostream>
#include "common.h"
#include "login.h"
#include "MenuNavigation.h"
#include "replace.h" //this is temporary
// include your module files here


// Next Header files declaration

using namespace std;

// function decalration

int main()
{
    int input = 98;

    input = login();

    while (input != 99)
    {

        switch (input)
        {
        case 100:
            input = welcomeScreen();
            break;
        case 99:
            return 0;
            break;
        case 98:
            input = login();
            break;
        case 1:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 2:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 3:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 4:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 5:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 6:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 7:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 8:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 9:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 10:
            input = test();     //Call your functions here those functions shoud return value at the end of function
            break;
        default:
            break;
        }
    }
}