#include <iostream>
using namespace std;

class BankAccount
{
    int accountNo;
    int balance;
    static int totalAccounts;

public:
    BankAccount()
    {
        cout<<"Enter account number: ";
        cin>>accountNo;

        cout<<"Enter balance: ";
        cin>>balance;

        totalAccounts++;
    }

    friend void display(BankAccount b);

    static void showTotal()
    {
        cout<<"Total accounts: "<<totalAccounts<<endl;
    }
};

int BankAccount::totalAccounts=0;

void display(BankAccount b)
{
    cout<<"Account No: "<<b.accountNo<<endl;
    cout<<"Balance: "<<b.balance<<endl;
}

int main()
{
    BankAccount b1;
    BankAccount b2;
    BankAccount b3;

    cout<<endl;

    display(b1);
    cout<<endl;

    display(b2);
    cout<<endl;

    display(b3);
    cout<<endl;

    BankAccount::showTotal();

    return 0;
}