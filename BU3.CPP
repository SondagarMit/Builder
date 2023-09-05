#include<conio.h>
#include<iostream.h>
class Bank
{
    public:
    int balance;
    int deposited;

    void intro_1()
    {
	cout << "\t\t:- Mitu Bank -:" << endl;
	cout << "\t------------------------------" << endl;

	cout << "\t:- Designed By Mitu -:" << endl;
	cout << "\t------------------------------" << endl;

	cout << "\tInspired By Nandani Mam" << endl;
    }

    void login()
    {
        char login_exit;
        cout << "\t------------------------------" << endl;
        cout << endl << "Press B to Staff: " << endl;
        cin >> login_exit;

        if (login_exit == 66 || login_exit == 98)
        {
            staff_login_screen();
        }
        else
        {
            exit();
        }
    }

    void exit()
    {
        cout << "Thank you for using our bank." << endl;
    }

    void staff_login_screen()
    {
        char name[10], staff_email[10];
        int staff_num;
        long number;

        cout << "\t------------------------------" << endl;
        cout << "\tWelcome To Staff" << endl;
        cout << "\t------------------------------" << endl;

        cout << "Staff Name: " << endl;
        cin >> name;

        cout << "Staff Number: " << endl;
        cin >> staff_num;

        cout << "Phone Number: " << endl << "+91 ";
        cin >> number;

        cout << "Staff Email: " << endl;
        cin >> staff_email;

        money_process();
    }

    void money_process()
    {
        int choice;
	while (1)
        {
            cout << "\t------------------------------" << endl;
            cout << "1. Deposit money" << endl;
            cout << "2. Withdraw money" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    deposit();
		    deposited = 1;
		    break;
		case 2:
		    if (deposited)
                    {
                        withdraw();
                    }
                    else
                    {
                        cout << "You must deposit money first before making a withdrawal." << endl;
                    }
                    break;
                case 3:
                    return;
                default:
                    cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
            }
        }
    }

    void deposit()
    {
        int deposit_amount;
        cout << "Enter Deposit Amount: ";
        cin >> deposit_amount;
        balance += deposit_amount;
        cout << "Your Updated Balance: " << balance << endl;
    }

    void withdraw()
    {
        int withdraw_amount;
        cout << "Enter Withdraw Amount: ";
        cin >> withdraw_amount;

        if (withdraw_amount <= balance)
        {
            balance -= withdraw_amount;
            cout << "Your Updated Balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid amount. Insufficient funds. Your balance is: " << balance << endl;
        }
    }

    void display()
    {
        intro_1();
        login();
    }
};

void main()
{
    Bank obj;
    clrscr();

    obj.display();
    getch();
}
