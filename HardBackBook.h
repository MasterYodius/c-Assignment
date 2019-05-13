#pragma once
//#define DEF_HARDBACKBOOK
#include"main.h"
#include"PaperBackBook.h"

class HardBackBook : public PaperBackBook {
public:
	void setWeigth(float w);
	string displayh();
	float getWeigth();
	friend ostream& operator<<(ostream& flux, HardBackBook& h) {
		flux << h.displayh();
		return flux;
	}

private:
	float m_weigth;
};
