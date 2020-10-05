/*Write C++program  för converting currencies..Dollar, pounds,  Euro using cedi as reference currency...*/
// SOLUTION BY FASTRACK MANAGEMENT

#include <iostream>
#include <iomanip>

using namespace std;

//Creating function prototypes

void euroConvert(float cedi);
void poundConvert(float cedi);
void dollarConvert(float cedi);
float errHandler(float value, string text);					//This is a function for checking for an error in float data types
int errHandler(int value, string text);						//This is a function for checking for an error in integer data types

//Main program
int main()
{
	//Declaring variables
	float cedi; int choice; char redo;
	
	//Creating a loop program so as to make user work out till he hits the exit button
	do
	{
		cout << "You are welcome to the money converting program."
			 << "\n\nPlease write the value of the money (in GHS) to be converted\n"
			 << "Amount: ";
		cedi = errHandler(cedi, "Amount: ");
		
		cout << "\n\nPlease select the currency you want to convert your value into\n"
			 << "1. Pounds\n"
			 << "2. Euros\n"
			 << "3. Dollars\n"
			 << "4. Exit\n\n"
			 << "Option: ";
		choice = errHandler(choice, "Option: ");
		//Making sure the user doesn't give more than 4 as a value
		while(choice > 4)
		{
			cout << endl << "Invalid Option Value! Please select an option above\a" << endl;
			cout << "Option: "; choice = errHandler(choice, "Option: ");
		}
		
		//Working out the switch statement
		switch(choice)
		{
			case 1:													//This will take care of the pounds conversion
				{
					poundConvert(cedi);
				}
			break;
			
			case 2:													//This will take care of the euro conversion
				{
					euroConvert(cedi);
				}
			break;
			
			case 3:													//This will take care of the dollar coversion
				{
					dollarConvert(cedi);
				}
			break;
			
			default:												//If the user should choose option 4, the program will display this message and exit
				{
					cout << "The program has being terminated. See you soon :)" << endl;         
                 //exit(1);
				}
		}
		
		cout << endl << endl << "------ End of Program ------" << endl << endl;
		cout << "Do you want to continue with the program?" << endl;
		cout << "Yes --> <y> \t\t No --> <n>" << endl;
		cout << "Choice: "; cin >> redo;
		while(redo != 'n' && redo != 'y')
		{
			cout << "\nSorry! Please enter a valid option" << endl;
			cin.clear();
			cin.ignore(123, '\n');
			cout << "Choice: "; cin >> redo;
		}
		cout << endl;
		
	}while(redo == 'y');
	return 0;
}

//Declaring the function prototypes
void euroConvert(float cedi)
{
	//Taking 1cedi = 5.4euros
	double change = cedi * 5.4;
	
	cout << "GHS " << fixed << setprecision(2) << cedi << " is " << fixed << setprecision(2) << change << " euros" << endl;
}

void poundConvert(float cedi)
{
	//Taking 1cedi = 6pounds
	double change = cedi * 6;
	
	cout << "GHS " << fixed << setprecision(2) << cedi << " is " << fixed << setprecision(2) << change << " pounds" << endl;
}

void dollarConvert(float cedi)
{
	//Taking 1cedi = 5.1dollars
	double change = cedi * 5.1;
	
	cout << "GHS " << fixed << setprecision(2) << cedi << " is E " << fixed << setprecision(2) << change << " dollars" << endl;
}

float errHandler(float value, string text)
{
	while(!(cin >> value) || value <= 0)
	{
		cout << endl << "ERROR! Please input a positive amount" << endl;
		cin.clear();
		cin.ignore(123, '\n');
		cout << text;
	}
	
	
	return value;
}

int errHandler(int value, string text)
{
	while(!(cin >> value) || value <= 0)
	{
		cout << endl << "ERROR! Please input positive value" << endl;
		cin.clear();
		cin.ignore(123, '\n');
		cout << text;
	}
	
	return value;
}


#include<iostream>
using namespace std;
void menu ();
int main ()
{
 double pak = 1.89,dol = 60.67, ind = 1.1,pound = 112.56, euro = 126.54;
 double amount ,converted_amount =0;
 menu();
 cin>> amount;
 cout <<" Your Amount in PAK Rupees is : " <<amount*pak <<endl;
 cout <<" Your Amount in Dollar is     : " <<amount*dol<<endl;
 cout <<" Your Amount in IND Rupees is : " <<amount*ind<<endl;
 cout <<" Your Amount in Pound is      : " <<amount*pound<<endl;
 cout <<" Your Amount in Pak Euro is   : " <<amount*euro<<endl;
 
}
void menu()
{
cout<<" \n \n  \t \t \t LEP*****CURRENCY CONVERTOR*****LEP \n \n \n \n ";
cout<< "1. Pak Rupee \n 2. Dollor \n 3. Indian Rupee \n 4. Pound \n 5. Euro \n \n  ";
cout<<" Enter Your Amount \n ";
}










