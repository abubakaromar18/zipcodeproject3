#include "Record2.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int item = 0;
	vector<Record> postalRecord;
	string skip, line, zip, placename, state, county, lat, lon;

	ifstream fileStream("us_postal_codes.csv");

	getline(fileStream, skip);

	while (getline(fileStream, line))
	{
		item++;
		stringstream ss(line);
		getline(ss, zip, ',');
		getline(ss, placename, ',');
		getline(ss, state, ',');
		getline(ss, county, ',');
		getline(ss, lat, ',');
		getline(ss, lon, ',');

		Record newRecord(item,zip, placename, state, county, lat, lon);
		postalRecord.push_back(newRecord);
	}
}