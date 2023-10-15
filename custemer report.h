#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int cReport()
{
    fstream CusFile;
    string txtOut;

    CusFile.open("customer.txt");
    cout<<"account_no account name type address phone email nic dob balance  "<<endl;
    while(getline(CusFile,txtOut));
    {
        cout <<txtOut;
    }

    return 0;
}
