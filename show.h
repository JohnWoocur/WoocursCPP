 #include <iostream>
 #include <fstream>
 #include <string>
 using namespace std;
 int showCustomer()
{


    fstream accReadFile;
    string txtOut;

    accReadFile.open("account.txt");
    while(getline(accReadFile,txtOut))
    {
        cout<<txtOut;
    }
    return 0;
}
