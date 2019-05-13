#include "PaperBackBook.h"

PaperBackBook::PaperBackBook()
{
}

PaperBackBook::PaperBackBook(int i, string t, int n)
{
	m_id = i;
	m_title = t;
	m_nbPage = n;
}

void PaperBackBook::setData(int i, string t, int n,string c)
{
	m_id = i;
	m_title = t;
	m_nbPage = n;
	m_content = c;
}

void PaperBackBook::setId(int i)
{
	m_id = i;
}

void PaperBackBook::setTitle(string t)
{
	m_title = t;
}

void PaperBackBook::setNbPage(int n)
{
	m_nbPage = n;
}

void PaperBackBook::setContent(string c)
{
	m_content = c;
}

int PaperBackBook::getID()
{
	return m_id;
}

string PaperBackBook::getTitle()
{
	return m_title;
}

int PaperBackBook::getNbPage()
{
	return m_nbPage;
}

string PaperBackBook::getContent()
{
	return m_content;
}

string PaperBackBook::display()
{
	string s = "ID : "+to_string(m_id) +"\n" + "Title : "+m_title+"\n"+"NbPages : "+to_string(m_nbPage)+"\n";
	
	return s;
}
