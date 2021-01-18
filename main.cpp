#include <bits/stdc++.h>
using namespace std;
void create_account()
{

    cout << endl
         << "\t\t----------------------" << endl;
    cout << "\t\tGive Your information" << endl;
    cout << "\t\t----------------------" << endl;

    string first_name, last_name, full_name, birth_date, mobile_number, password;
    int balance = 0, account_type;
    // ofstream bankFile;
    // bankFile.open("Account Information/Account_number.txt", ios::in | ios::out | ios::app);


    cout << "Enter your first name : ";
    getline(cin, first_name);
    cout << "Enter your last name : ";
    getline(cin, last_name);
    full_name = first_name + " " + last_name;
    cout << "Date of birth(DD/MM/YY) : ";
    getline(cin, birth_date);


    while (mobile_number.size() < 11)
    {
        cout << "Enter your mobile number : ";
        getline(cin, mobile_number);
        if (mobile_number.size() < 11)
            cout << endl
                 << "\tYou entered invalid number!!" << endl
                 << endl;
    }


    cout << "What type of account you want to create?" << endl
         << "\t1.Savings" << endl
         << "\t2.Deposit" << endl
         << "\t=>";



    cin >> account_type;
    if (account_type == 1)
    {
        while (balance < 500)
        {
            cout << "Deposit some amount of money(minimum 500) : ";
            cin >> balance;
            cin.ignore();
            if (balance < 500)
            {
                cout << endl
                     << "\t!!You cannot deposit less than 500tk!!" << endl
                     << endl;
                ;
            }
            else
            {
                cout << endl
                     << "\t!!Successfully Deposit!!" << endl
                     << endl;
            }
        }
    }




    else if(account_type == 2)
    {
        while (balance < 1000)
        {
            cout << "Deposit some amount of money(minimum 1000) : ";
            cin >> balance;
            cin.ignore();
            if (balance < 1000)
            {
                cout << endl
                     << "\t!!You cannot deposit less than 1000tk!!" << endl
                     << endl;
                ;
            }
            else
            {
                cout << endl
                     << "\t!!Successfully Deposit!!" << endl
                     << endl;
            }
        }
    }




    while (password.size() < 6)
    {
        cout << "Set your password(must be at least 6 characters) : ";
        getline(cin, password);
        if (password.size() < 6)
        {
            cout << endl
                 << "\t\t!!WRONG INPUT!!" << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "\t\t!!Password set successfully!!" << endl
                 << endl;
        }
    }




    int account_number = 101;
    cout << "Your account number is : " << account_number;
    account_number++;
    cout << endl;
}

int main()
{
    cout << "\t\t==========================================" << endl;
    cout << "\t\t\t\tIFIC BANK" << endl;
    cout << "\t\t==========================================" << endl;

    while (1)
    {
        cout << endl
             << "\t1.Create account" << endl;
        cout << "\t2.Login your account" << endl;
        cout << "\t3.Exit" << endl
             << "\t=>";
        int choice;
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            create_account();
        }
    }

    return 0;
}
