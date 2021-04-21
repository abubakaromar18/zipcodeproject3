#pragma once
#ifndef RECORD2_H
#define RECORD2_H

#include <iostream>
#include <string>

using namespace std;

class Record
{
public:
	//Default Constructor
	Record();

	//Overload Constructor
	Record(int, string, string, string, string, string, string);

	//Destructor
	~Record() {};

	//Accessor Functions
	int getkey() const;
	string getZipCode() const;
	string getPlaceName() const;
	string getState() const;
	string getCounty() const;
	string getLat() const;
	string getLong() const;

private:
	int unique;
	string newZipCode, newPlaceName, newState, newCounty, newLat, newLong;
};
#endif // !RECORD_H