// Haulong_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Time.h"


using namespace std;




int main()
{
	/*cout << "\nFirst Date (dd/mm/yyyy): ";
	UserInput::date1_input();
	
	cout << "\nSecond Date (dd/mm/yyyy): ";
	UserInput::date2_input();*/
	
	cout << "\nFirst Time (hh:mm:ss): ";
	Time t1;
	t1.time_input();


	Time tc;
	tc.time_calculation();
	return 0;
}
