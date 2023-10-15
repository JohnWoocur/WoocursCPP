#include <iostream>
#include <fstream>
#ifndef print
#include "common.h"
#endif

using namespace std;

int main() {

    int input = 0;
    system("cls");
    println("--------------------------------------------------------------------------------");
    println("----------------------------------- ABC Bank -----------------------------------");
    println("--------------------------------------------------------------------------------");
    println("--------------------------------- ADMIN PANEL ----------------------------------");
    println("--------------------------------------------------------------------------------");
    println("|                            Edit Customer Account                             |");
    println("|                                                                              |");
    println("|   _______________________________________________________________________    |");
    println("|   |   Account No                  :  @@acNo@@                            |   |");
    println("|   |   Customer Name               :  @@acNo@@                            |   |");
    println("|   |   Account Type                :  @@acNo@@                            |   |");
    println("|   |   Customer Address No         :  @@acNo@@                            |   |");
    println("|   |   Customer Phone Number       :  @@acNo@@                            |   |");
    println("|   |   Customer Email Address      :  @@acNo@@                            |   |");
    println("|   |   Customer NIC Number         :  @@acNo@@                            |   |");
    println("|   |   Customer Date of Birth      :  @@acNo@@                            |   |");
    println("|   |   Account Balance             :  @@acNo@@                            |   |");
    println("|   |______________________________________________________________________|   |");
    println("|                                                                              |");
    println("|      Enter Customer Account Number :                                         |");
    println("|     98. Logout                                                               |");
    println("|     99. Exit                                                                 |");
    println("--------------------------------------------------------------------------------");
    print("Choose Option : ");
    cin >> input;
    return input;
}
