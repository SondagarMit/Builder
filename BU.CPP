#include<iostream.h>
#include<conio.h>
class Student
{
    char name[50];
    int roll;
	public:
		void getData()
		{
		  cout << "Enter Name: ";
		  cin >> name;

		  cout << "Enter Roll Number: ";
		  cin >> roll;
		}
		void displayData()
		{
		  cout << "Name: " << name << endl;
		  cout << "Roll Number: " << roll << endl;
		}
};

void main()
{
    int N,i;
    Student students[100];

    clrscr();
    cout << "Enter the number of students: ";
    cin >> N;

    for (i=0;i<N;i++)
    {
	cout << "Enter details for student " << i + 1 << ":" << endl;
	students[i].getData();
    }

    cout << "Details of students:" << endl;
    for (i=0;i<N;i++)
    {
	cout << "Student " << i + 1 << ":" << endl;
	students[i].displayData();
    }

   getch();
}
