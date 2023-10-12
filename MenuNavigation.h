#include <iostream>
#ifndef print
// #include "common.h"
#endif

using namespace std;

int welcomeScreen()
{
    int input = 0;
    system("cls");
    print("--------------------------------------------------------------------------------");
    print("----------------------------------- ABC Bank -----------------------------------");
    print("--------------------------------------------------------------------------------");
    print("--------------------------------- ADMIN PANEL ----------------------------------");
    print("--------------------------------------------------------------------------------");
    print("|      1. Create Customer Account                                              |");
    print("|      2. Show Customer Account Balance                                        |");
    print("|      3. Modify Customer Account                                              |");
    print("|      4. View Customer Accounts                                               |");
    print("|      5. Create Staff Account                                                 |");
    print("|      6. Modify Staff Account                                                 |");
    print("|      7. View Staff Accounts                                                  |");
    print("|      8. Deposit Amount                                                       |");
    print("|      9. Withdraw Amount                                                      |");
    print("|     10. Staff Payroll Generation                                             |");
    print("|                                                                              |");
    print("|     98. Logout                                                               |");
    print("|     99. Exit                                                                 |");
    print("--------------------------------------------------------------------------------");
    cin >> input;
    return input;
}
