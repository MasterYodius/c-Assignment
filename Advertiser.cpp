#include "Advertiser.h"

Advertiser::Advertiser()
{
}

void Advertiser::setData(string t, int id)
{
	m_title = t;
	m_id = id;
}

void Advertiser::setTitle(string t)
{
	m_title = t;
}

void Advertiser::setId(int i)
{
	m_id = i;
}

string Advertiser::getTitle()
{
	return m_title;
}

int Advertiser::getID()
{
	return m_id;
}

string Advertiser::display()
{
	return "Titre : "+m_title+"\n"+"ID : "+to_string(m_id) + "\n";
}
