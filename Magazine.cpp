#include "Magazine.h"
#include"Advertiser.h"
#include"main.h"

Magazine::Magazine()
{
}

void Magazine::add_advertisement(Advertisement a)
{
	m_advertisements.push_back(a);
}

string Magazine::displaym()
{
	string s = display();
	/*for (Advertisement a : m_advertisements) {
		s = s + a.display() + "\n";
	}*/
	return s;
}

vector<Advertisement> Magazine::getAdvertisement()
{
	return m_advertisements;
}

void Magazine::setAdvertisement(Advertisement a)
{
	m_advertisements.push_back(a);
}



void Magazine::display2(ostream & flux)
{
	flux << displaym();
}


