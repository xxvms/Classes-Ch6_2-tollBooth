// Classes-Ch6_2-tollBooth.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <conio.h>

const char ESC = 27;

class TollBooth
{
private:
	unsigned int carCounter;
	double moneyCount;
public:
	TollBooth(): carCounter(0), moneyCount(0.0)
	{}
	void pyingCar()
	{
		carCounter++;
		moneyCount += 0.500;
	}
	void NoPayingCar()
	{
		carCounter++;
	}
	void Display()const
	{
		std::cout << "Car passed: " << carCounter << " Money collected: " << moneyCount << std::endl;
	}
	void quit()const
	{
		Display();
	}
};

int main()
{

	TollBooth t1;
	char choice = 'a';
	do {

		std::cout << "Please type (p) for paying, (n) free, (d) display" << std::endl;
		choice = getche();

		switch (choice)
		{
		case 'p':
			t1.pyingCar();
			break;
		case 'n':
			t1.NoPayingCar();
			break;

		case 'd':

			t1.Display();
			break;
		}
	}
		while (choice != ESC);
		t1.Display();
	
	system("pause");
    return 0;
}
