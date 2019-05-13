#pragma once
#include"main.h"
#include"PaperBackBook.h"
#include"Advertisement.h"

class Magazine : public PaperBackBook {

public:
	Magazine();
	void add_advertisement(Advertisement a);
	string displaym();
	vector<Advertisement> getAdvertisement();
	void setAdvertisement(Advertisement a);
	
	void display2(ostream &flux);
	friend ostream& operator<<(ostream& flux, Magazine& m) {
		flux << m.displaym();
		return flux;
	}

private:
	vector<Advertisement> m_advertisements;
};
