// introtoc++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "hero.h"
float farenheit = 1;
float celsuis = 1;


//int convert()
//{
//
//	std::cout << "enter a number in fareinheight to celsuis\n";
//	std::cin >> celsuis;
//	farenheit = (celsuis * 9 / 5) + 32;
//	std::cout << farenheit << std::endl;
//	system("pause");
//	return farenheit;
//}

//int combinearrays(int arr1[3], int arr2[3])
//{
//	int total = 0;
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		total += arr1[i];
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		total += arr2[i];
//	}
//
//	return total;
//}

int main()
{
	MyHero sean;
	MyHero scene;
	sean.Fight(sean);


	//create a function
	//that converts a temperature
	//from celsuis to freedom units
	//

	//std::cout << "fareinheight to celsuis converter\n";
	//system("pause");
	//convert();

	//int arr1[3] = { 1,1,1 };
	//int arr2[3] = { 1,1,1 };
	//std::cout << combinearrays(arr1, arr2);
	//system("pause");
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
