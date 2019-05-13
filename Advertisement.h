#pragma once
#include"main.h"

class Advertisement {

public:
	Advertisement();
	void setData(string t, int id);
	void setTitle(string t);
	void setId(int i);

	string getTitle();
	int getID();

	string display();

private:
	string m_title;
	int m_id_advertiser;
};