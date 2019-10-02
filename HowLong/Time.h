#ifndef TIME_H
#define TIME_H
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
	
	static char col;

		int hours1=0, minutes1=0, seconds1=0;
		int hours2=0, minutes2=0, seconds2=0;
	class Time
	{


	private:
		//int hour, minute, second;
		
	public:
		
		void setTime(int hours1, int minutes1, int seconds1);
		void printTimeOne();
		void printTimeTwo();	

		static void time_input();
		static void time_calculation();
	};

	


	void Time::time_input()
	{
		cin >> hours1 >> col >> minutes1 >> col >> seconds1;
		Time pt1;
		pt1.printTimeOne();
		cin >> hours2 >> col >> minutes2 >> col >> seconds2;
		Time pt2;
		pt2.printTimeTwo();
	}

inline void Time::setTime(int hours1, int minutes1, int seconds1)
{
}

inline void Time::printTimeOne()
	{
		cout << setw(2) << setfill('0') << hours1 << ":"
			<< setw(2) << setfill('0') << minutes1 << ":"
			<< setw(2) << setfill('0') << seconds1 << "\n";
	}
	void Time::printTimeTwo()
	{
		cout << setw(2) << setfill('0') << hours2 << ":"
			<< setw(2) << setfill('0') << minutes2 << ":"
			<< setw(2) << setfill('0') << seconds2 << "\n";
	}
void Time::time_calculation()
	{

		if (hours1 > hours2 || (hours1 == hours2 && minutes1 > minutes2) || (hours1 == hours2 && minutes1 ==
			minutes2 && seconds1 > seconds2))
		{
			if (seconds1 < seconds2)
			{
				seconds1 = seconds1 + 60;
				minutes1 = minutes1 - 1;
			}
			if (minutes1 < minutes2)
			{
				minutes1 = minutes1 + 60;
				hours1 = hours1 - 1;
			}
			if (hours1 < hours2)
			{
				hours1 = hours1 + 24;
			}

			static int h_output = (hours1 - hours2);
			static int m_output = (minutes1 - minutes2);
			static int s_output = (seconds1 - seconds2);

			cout << "\nPast: " << h_output << "h:" << m_output << "m:" << s_output << "s ago";
			cin.clear();
		}
		else
		{
			if (seconds1 > seconds2)
			{
				seconds2 = seconds2 + 60;
				minutes2 = minutes2 - 1;
			}
			if (minutes1 > minutes2)
			{
				minutes2 = minutes2 + 60;
				hours2 = hours2 - 1;
			}
			if (hours1 > hours2)
			{
				hours2 = hours2 + 24;
			}
			int h_output = (hours2 - hours1);
			int m_output = (minutes2 - minutes1);
			int s_output = (seconds2 - seconds1);
			(cout << "\nFuture: " << h_output << "h:" << m_output << "m:" << s_output << "s from now");
			cin.clear();
		}
	}

#endif
