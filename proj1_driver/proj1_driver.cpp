// Proj1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include "proj1.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int a, b, c;
	ifstream x;				//f stream variable to 
	x.open("file.txt");

	x >> b >> a >> c;
	date2019 obj1(a,b);		//object is being intialized
	obj1.plusDay(c);		// plusDay method is being called
	obj1.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj2(a, b);	//object is being intialized
	obj2.plusDay(c);		// plusDay method is being called
	obj2.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj3(a, b);	//object is being intialized
	obj3.plusDay(c);		// plusDay method is being called
	obj3.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj4(a, b);	//object is being intialized
	obj4.plusDay(c);		// plusDay method is being called
	obj4.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj5(a, b);	//object is being intialized
	obj5.plusDay(c);		// plusDay method is being called
	obj5.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj6(a, b);	//object is being intialized
	obj6.plusDay(c);		// plusDay method is being called
	obj6.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj7(a, b);	//object is being intialized
	obj7.plusDay(c);		// plusDay method is being called
	obj7.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj8(a, b);	//object is being intialized
	obj8.plusDay(c);		// plusDay method is being called
	obj8.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj9(a, b);	//object is being intialized
	obj9.plusDay(c);		// plusDay method is being called
	obj9.print();			// print method is being called

	x >> b >> a >> c;
	date2019 obj10(a, b);	//object is being intialized
	obj10.plusDay(c);		// plusDay method is being called
	obj10.print();			// print method is being called

	x.close();
	return 0;
}