#include <iostream>
#include <fstream>
using namespace std;

float Create_Account()
{
    int account;
    string name;
    string type;
    int initial;
    string address;
    int phone;
    string email;
    string nic;
    int dob;
    string cs;

    fstream CusFile("customer.txt",ios::app);
    cout<<"\n Enter the account number: ";
    cin>>account;
    CusFile<<" account:"<<account;
    cout<<"\n Enter the account holder name: ";
    cin>>name;
    CusFile<<" name:"<<name;
    cout<<"\n Enter the account type: ";
    cin>>type;
    CusFile<<" type:"<<type;
    cout<<"\n Enter your address: ";
    cin>>address;
    CusFile<<" address:"<<address;
    cout<<"\n Enter your phone number: ";
    cin>>phone;
    CusFile<<" phone:"<<phone;
    cout<<"\n Enter your email address: ";
    cin>>email;
    CusFile<<" email:"<<email;
    cout<<"\n Enter your nic number: ";
    cin>>nic;
    CusFile<<" nic:"<<nic;
    cout<<"\n Enter your DOB: ";
    cin>>dob;
    CusFile<<" dob:"<<dob;
    cout<<"\n Enter your initial amount: ";
    cin>>initial;
    CusFile<<" initial:"<<initial;
    CusFile.close();


    cout<<"\n Account Created....***";
}






