#include "Advertisement.h"

Advertisement::Advertisement()
{
}

void Advertisement::setData(string t, int id)
{
	m_title = t;
	m_id_advertiser = id;
}

void Advertisement::setTitle(string t)
{
	m_title = t;
}

void Advertisement::setId(int i)
{
	m_id_advertiser = i;
}

string Advertisement::getTitle()
{
	return m_title;
}

int Advertisement::getID()
{
	return m_id_advertiser;
}

string Advertisement::display()
{

	return "ID : "+to_string(m_id_advertiser)+" Title : " + m_title + "\n";
}
