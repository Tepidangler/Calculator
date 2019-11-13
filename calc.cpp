/* This is my first attempt at a calculator program. It will have the ability to add, divide, subtract, and multiply values given to it by the user */

#include <iostream>
#include <unistd.h>

int getValueFromUser()
{
	std::cout << "Enter an Integer please: ";
	int input{ 0 };
	std::cin >> input;
	std::cout << "[+] Storing value, please wait\n";
	sleep(2);
	return input;
}

int add(int x, int y)
{
	return x + y;
}

int multiply(int z, int w)
{
	return z * w;
}

int sub(int b, int c)
{
	return b - c;
}

int divide(int d, int e)
{
	return d / e;
}

void doCalc(int choice)
{
	int a{ };
	int s{ };
	int m{ };
	int di{ };

	switch(choice) {

		case 1 :
			a = ( add( getValueFromUser(), getValueFromUser() ));
			std::cout << "Your Total for addition is => " << a << "\n";
			std::cout << "\nThank you for using the Calculator\n";
			break;
		case 2 :
			s = sub( getValueFromUser(), getValueFromUser() );
			std::cout << "Your Total for subtraction is => " << s << "\n";
			std::cout << "\nThank you for using the Calculator\n";
			break;
		case 3 :
			m = multiply( getValueFromUser(), getValueFromUser() );
			std::cout << "Your Total for Multiplication is => " << m << "\n";
			std::cout << "\nThank you for using the Calculator\n";
			break;
		case 4 :
			di = divide( getValueFromUser(), getValueFromUser() );
			std::cout << "Your Total for Division is => " << di << "\n";
			std::cout << "\nThank you for using the Calculator\n";
			break;
		case 5 :
			std::cout << "Thanks for wasting your own time fam. You played yourself\n";
			exit (EXIT_SUCCESS);
			break;
		default :
			std::cout << "The Instructions were clear than a mothafucker dog, learn to read.\n";
			std::cout << "You know what fuck this shit I'm aborting\n";
			exit (EXIT_SUCCESS);
	}
}

int main()
{
	int choice{ 0 };
	std::cout << "Welcome to Tepi's original Calculator written in C++\n";
	std::cout << "Would you like do (1) Addition, (2) Subtraction, (3) Multiplication, (4) Division, or (5) Exit?\n>";
	std::cin >> choice;
	doCalc(choice);
	return 0;
}

