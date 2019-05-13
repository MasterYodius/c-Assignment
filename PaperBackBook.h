#pragma once
#include"main.h"

class PaperBackBook {

public:
	PaperBackBook();
	PaperBackBook(int i, string t, int n);
	void setData(int i,string t,int n, string c);
	void setId(int i);
	void setTitle(string t);
	void setNbPage(int n);
	void setContent(string c);
	int getID();
	string getTitle();
	int getNbPage();
	string getContent();
	string display();

	friend ostream& operator<<(ostream& flux, PaperBackBook& p) {
		flux << p.display();
		return flux;
	}


private:
	int m_id;
	string m_title;
	int m_nbPage;
	string m_content;
};
