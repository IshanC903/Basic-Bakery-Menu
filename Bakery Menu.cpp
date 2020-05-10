//This program 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){ 

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2); //limits the numbers in the program to 2 decimal places.
cout << left; // 

char choice, reorder; //Customer's Order
int  a = 0, b = 0, c = 0, d = 0, e = 0;
bool again = false;

cout << "WELCOME TO THE NEIGHBOURHOOD BAKERY!" << endl << endl;
cout << "What would you like today?" << endl << endl;

while (again == false){ //loops until again variable turns true (reorder variable)
	//Main menu to display for customer
	cout << setw(55) << "CHOICE" << "PRICE" << endl; //"setw(#)" leaves # spaces after first inputed test  
	cout << setw(55) << "A: Earl Grey Tea" << "$5.99" << endl;
	cout << setw(55) << "B: Coffee and Blueberry Scone" << "$4.99" << endl;
	cout << setw(55) << "C: Espresso and a Tea Biscuit" << "$4.99" << endl;
	cout << setw(55) << "D: Coffee and Muffin" << "$5.99" << endl;
	cout << setw(55) << "E: The Assorted Tea, Scones and Biscuits Platter" << "$9.99" << endl << endl;

	//asks for customer choice imput
	cout << "What would you like to order? (Pick One Only)" << endl;
	cin >> choice;
	cout << endl;

	if (choice == 'A' || choice == 'a') //runs increment if option is selected
		a++;
	else if (choice == 'B' || choice == 'b') { //
		b++;
	}
	else if (choice == 'C' || choice == 'c'){
		c++;
	}
	else if (choice == 'D' || choice == 'd'){
		d++;
	}
	else if (choice == 'E' || choice == 'e') {
		e++;
	}
	else //if none of the above options are selected, runs command below
	{
		cout << endl;
		cout << "That was an invalid choice, Please try again." << endl << endl;
	}

	// runs after if statement is complete
	cout << "Would you like to order anything else? (Y or N)" << endl;
	cin >> reorder;
	system("CLS");
	if (reorder == 'y' || reorder == 'Y')
		again = false; //runs loop because again statement is false
	else if (reorder == 'n' || reorder == 'N')
		again = true; //ends loop because again statement is true
}

//displays final order quantities
cout << "This is your final order" << endl << endl;
cout << setw(53) << "ITEM" << "QUANTITY" << endl;
cout << setw(60) << "A: Earl Grey Tea" << a << endl; //displays text and amount of variable "a" the customer input
cout << setw(60) << "B: Coffee and Blueberry Scone" << b << endl;
cout << setw(60) << "C: Espresso and Tea Biscuit" << c << endl;
cout << setw(60) << "D: Coffee and Muffin" << d << endl;
cout << setw(60) << "E: The Assorted Tea, Scones and Biscuits Platter" << e << endl << endl;
cout << "Your total is $" << ((5.99*a) + (4.99*b) + (4.99*c) + (5.99*d) + (9.99*e))*1.13 << endl << endl; //calculations and final price for customer

} 