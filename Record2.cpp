#include "Record2.h"

using namespace std;

Record::Record()
{
	unique = 0;
}

Record::Record(int key, string zip, string placeName, string state, string county, string lat, string lon)
{
	key = unique;
	newZipCode = zip;
	newPlaceName = placeName;
	newState = state;
	newCounty = county;
	newLat = lat;
	newLong = lon;
}

int Record::getkey() const
{
	return unique;
}

string Record::getZipCode() const
{

	return newZipCode;
}

string Record::getPlaceName() const
{
	return newPlaceName;
}


string Record::getState() const
{
	return newState;
}

string Record::getCounty() const
{
	return newCounty;
}

string Record::getLat() const
{
	return newLat;
}

string Record::getLong() const
{
	return newLong;
}