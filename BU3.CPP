#include<conio.h>
#include<iostream.h>
class Bank
{
    public:
    int balance;
    int deposited;

    void intro_1()
    {
	cout << " \t   :- Mitu Bank -:" << endl;
	cout << "\t :- Designed By Mitu -:" << endl;
	cout << endl;
	cout << "\t**************************" << endl;
	cout << " \t Inspired By Nandani Mam" << endl;
	cout << "\t**************************"<<endl;
    }

    void login()
    {
	char login_exit;
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
	cout << "\t      Welcome To Staff" << endl;
	cout << "\t------------------------------" << endl;

	cout << "\tStaff Name: ";
	cin >> name;

	cout << "\tStaff Number: ";
	cin >> staff_num;

	cout << "\tPhone Number: " << "+91 ";
	cin >> number;

	cout << "\tStaff Email: ";
	cin >> staff_email;

	money_process();
    }

    void money_process()
    {
	int choice;
	while (1)
	{
	    cout << endl;
	    cout << endl;

	    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
	    cout << "\t1. Deposit money" << endl;
	    cout << "\t2. Withdraw money" << endl;
	    cout << "\t3. Exit" << endl;
	    cout << "\tEnter your choice: ";
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
