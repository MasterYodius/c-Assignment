#pragma once
#include"main.h"

class Advertiser {

public:
	Advertiser();
	void setData(string t, int id);
	void setTitle(string t);
	void setId(int i);

	string getTitle();
	int getID();

	string display();

	friend ostream& operator<<(ostream& flux, Advertiser a) {
		flux << a.display();
		return flux;
	}

private:
	string m_title;
	int m_id;
};