#include<iostream.h>
#include<conio.h>
#include<string.h>
class Item
{
private:
    static int Items;
    static float taxRate;

public:
    char name[100];
    int price;
    int quantity;

    void inputItem()
    {
	cout << "Enter item name: ";
	cin >> name;
	cout << "Enter item price: ";
	cin >> price;
	cout << "Enter item quantity: ";
	cin >> quantity;
    }

    int calc()
    {
	return price * quantity;
    }

    float calculateTax()
    {
	return calc() * taxRate;
    }

    void display()
    {
	cout << "Item: " << name << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Total (Before Tax): " << calc() << endl;
	cout << "Tax: " << calculateTax() << endl;
	cout << "Total (After Tax): " << calc() + calculateTax() << endl;
    }

    static void setTaxRate(float rate)
    {
	taxRate = rate;
    }
};

int Item::Items;
float Item::taxRate = 0.18f;

void main()
{
    int numItems, i;


    clrscr();

    cout << "Enter the number of items: ";
    cin >> numItems;

    Item *items = new Item[numItems];

    for (i = 0; i < numItems; i++)
    {
	cout << "Enter details for item #" << i + 1 << endl;
	items[i].inputItem();
    }

    float taxRate;
    cout << "Enter the tax rate (Ex. 0.18 for 18%): ";
    cin >> taxRate;
    Item::setTaxRate(taxRate);

    cout << "*-------------------------------*" << endl;
    cout << "Billing Details:" << endl;
    for (i = 0; i < numItems; i++)
    {
	cout << "Item No." << i + 1 << endl;
	items[i].display();
    }
    cout << "*-------------------------------*";

   getch();
}
