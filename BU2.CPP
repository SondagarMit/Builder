#include<conio.h>
#include<iostream.h>
class Bank
{
    public:
    int deposite_money;
       void intro_1()
       {
         cout << ":- Mitu Bank -:" << endl;
         cout << "-------------------------" << endl;

         cout << ":- Designed By Mitu -:" << endl;
         cout << "-------------------------" << endl;

         cout << "Inspired By Nandani Mam" << endl;
       }
       void login()
       {
         char b[10];
         cout << "-------------------------" << endl;
         cout << endl <<"Press B to Staff: " << endl;
         cin >> b;
       }
       void staff_login_screen()
       {
         char name[10], staff_email[10];
         int staff_num;
         long number;  // Changed to long for phone number

         cout << "-------------------------" << endl;
         cout << "Welcome To Staff" << endl;
         cout << "-------------------------" << endl;

         cout << "Staff Name: " << endl;
         cin >> name;

         cout << "Staff Number: " << endl;
         cin >> staff_num;

         cout << "Phone Number: " <<endl << "+91 ";
         cin >> number;

         cout << "Staff Email: " << endl;
         cin >> staff_email;
       }
       void money_process()
       {
	 char choice;
	 char true;
	 while (true)
	 {
	     cout << "-------------------------" << endl;
	     cout << "Press [D] to Deposit money: "<<endl;
	     cout << "Press [W] to withdraw money: "<<endl;
	     cout << "Press [E] to exit: "<<endl;
	     cin >> choice;

	     if (choice == 'D' || choice == 'd')
	     {
		 deposite();
	     }
	     else if (choice == 'W' || choice == 'w')
	     {
		 withdraw();
	     }
	     else if (choice == 'E' || choice == 'e')
	     {
		 break;
	     }
	     else
	     {
		 cout << "Invalid choice. Please enter 'D', 'W', or 'E'." << endl;
	     }
	 }
       }
       void deposite()
       {
	 int deposit_amount;
	 cout << endl << "Enter Deposit Amount: ";
	 cin >> deposit_amount;
	 deposite_money += deposit_amount;
	 cout << "Your Updated Balance: " << deposite_money << endl;
       }
       void withdraw()
       {
	 int withdraw_amount;
	 cout << "-------------------------" << endl;
	 cout << "Enter Withdraw Amount: ";
	 cin >> withdraw_amount;
	 cout << "-------------------------" << endl;

	 if (withdraw_amount <= deposite_money)
	 {
	     deposite_money -= withdraw_amount;
	     cout << "Your Updated Balance: " << deposite_money << endl;
	 }
	 else
	 {
	     cout << "Insufficient funds. Your balance is: " << deposite_money << endl;
	 }
       }
       void display()
       {
	 intro_1();
	 login();
	 staff_login_screen();
	 money_process();
       }
};

void main()
{
  Bank obj;
  clrscr();  

  obj.display();
  getch();
}
