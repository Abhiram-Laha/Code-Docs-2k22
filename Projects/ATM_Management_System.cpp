// C++ program to implement the ATM Management System

#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

class Bank{
 
    private:   // private variables

    string name;
    int AccNo;
    char AccType[10];
    float Bal=0;
    float Deposit=0;      

    public:    
              //public variables

    void input_details(){

        //to get the users data

        cout<<"Enter Name : ";
        cin.ignore();
        getline(cin,name);

        cout<<"Enter Your Account Number : ";
        cin>>AccNo;

        cout<<"Enter Account Type (Savings/Current) : ";
        cin>>AccType;

        cout<<"Enter Account Balance : ";
        cin>>Bal;
    }


    void show_details(){

        // to show user details on the screen

        cout<<"Name : "<<name<<endl;

        cout<<"Account Number : "<<AccNo<<endl;

        cout<<"Account Type : "<<AccType<<endl;

        cout<<"Account Balance : "<<Bal<<endl;

    }

    void deposit(){

        // to depoist amount into the bank account
       
        cout<<"Enter Amount to be Deposited : ";
        cin>>Deposit;
    }

    void Balance(){

        // show current balance of the user's account

        Bal+=Deposit;
        cout<<"The Total Balance is : "<<Bal;
    }

    void withdraw(){

        // amount to be withdrawn from account

        float a;
        cout << "Enter Amount to withdraw : ";
        cin >> a;
        Bal-=a;
        cout << "\nAvailable Balance is : " <<Bal;
    }


};
 
int main(){

    Bank B;

    int choice;

    while(1){

        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n\n";


        cout<<"Enter Your Choice : \n";

        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Account Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";


        cout<<"\n\nEnter : ";
        cin >> choice;
        cout<<"\n\n";


        //choice to select from

        switch(choice){

            case 1:
                B.input_details();
                break;

            case 2:
                B.show_details();
                break;

            case 3:
                B.deposit();
                break;

            case 4:
                B.Balance();
                break;

            case 5:
                B.withdraw();
                break;

            case 6:
                exit(1);
                break;

            default:
                cout<<"\n----INVALID INPUT----";

        }
    }


return 0;
}