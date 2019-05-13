#include "HardBackBook.h"

void HardBackBook::setWeigth(float w)
{
	m_weigth = w;
}

string HardBackBook::displayh()
{
	return display() + to_string(m_weigth)+"\n";
}

float HardBackBook::getWeigth()
{
	return m_weigth;
}
