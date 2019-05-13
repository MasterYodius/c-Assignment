#include"main.h"
#include <fstream>
#include"PaperBackBook.h"
#include"HardBackBook.h"
#include"Advertisement.h"
#include"Magazine.h"
#include"Advertiser.h"
#include <iostream>
#include <cstdlib>


std::vector<std::string> split(const std::string & src, char delim) {
	using namespace std;
	vector<string> v;
	auto p = begin(src);
	for (auto q = find(p, end(src), delim); q != end(src); q = find(++p, end(src), delim)) {
		v.emplace_back(p, q);
		p = q;
	}
	if (p != end(src))
		v.emplace_back(p, end(src));
	return v;
}



bool check_advertiser(vector<Advertiser> list, int id) {
	bool res = false;
	for (Advertiser s : list) {
		if (id == s.getID() ) {
			res = true;
			break;
		}
	}
	return res;
}

int occurences(string chain, string word) {
	int res = 0;
	
	vector<string> v = split(chain,' ');
	for (string s : v) {
		if (s == word) {
			res += 1;
		}
	}
	return res;
	

	
}

Advertiser getAdvertiser(vector <Advertiser> list, int id) {
	Advertiser res;
	for (Advertiser a : list) {
		if (a.getID() == id) {
			res = a;
			break;
		}
	}
	return res;
}


int main() {
	PaperBackBook p1 = PaperBackBook();
	p1.setData(45, "testaezeazee", 789,"This is a test");

	PaperBackBook p2 = PaperBackBook();
	p2.setData(45, "p2", 7, "This i");
	//p.setWeigth(1.2);
	//cout << p.displayh();
	Advertisement a1 = Advertisement();
	a1.setData("advt1", 1);
	//cout<<a1.display();
	//cout << p;
	
	Advertisement a2 = Advertisement();
	a2.setData("advt2",9);
	
	Advertisement a3 = Advertisement();
	a3.setData("advt3", 9);

	Advertisement a4 = Advertisement();
	a4.setData(" advt4", 2);

	Advertisement a5 = Advertisement();
	a5.setData("advt5", 5);


	Magazine m1 = Magazine();
	m1.setData(45, "testee", 789, "This is a test");
	m1.add_advertisement(a1);
	m1.add_advertisement(a2);
	cout << m1.display() << endl;

	Magazine m2 = Magazine();
	m2.setData(100, "t2", 1944, "Second Magazine");
	m2.add_advertisement(a1);
	m2.add_advertisement(a2);
	m2.add_advertisement(a3);
	m2.add_advertisement(a4);
	m2.add_advertisement(a5);
	//cout << m1.displaym();
	//cout << m1;

	Advertiser ad1 = Advertiser();
	ad1.setData("Ad 1", 1);
	//cout << ad1.display();

	Advertiser ad2 = Advertiser();
	ad2.setData("Ad 2", 2);

	Advertiser ad3 = Advertiser();
	ad3.setData("Ad 3", 3);

	Advertiser ad4 = Advertiser();
	ad4.setData("Ad 4", 4);

	Advertiser ad5 = Advertiser();
	ad5.setData("Ad 5", 5);
	
	Advertiser ad6 = Advertiser();
	ad6.setData("Ad 6", 6);

	Advertiser ad7 = Advertiser();
	ad7.setData("Ad 7", 7);

	Advertiser ad8 = Advertiser();
	ad8.setData("Ad 8", 8);

	Advertiser ad9 = Advertiser();
	ad9.setData("Ad 9", 9);



	//cout << m1;

	HardBackBook h1 = HardBackBook();
	h1.setData(3, "azert", 65, "test hardb");
	h1.setWeigth(45);

	HardBackBook h2 = HardBackBook();
	h2.setData(7, "qsdfgh", 12, "test hardb2");
	h2.setWeigth(450);



	vector<Magazine> magazines;
	magazines.push_back(m1);
	magazines.push_back(m2);

	vector<PaperBackBook> paperbackbooks;
	paperbackbooks.push_back(p1);
	paperbackbooks.push_back(p2);

	vector<HardBackBook> hardbs;
	hardbs.push_back(h1);
	hardbs.push_back(h2);

	vector<Advertiser> listAdvertiser;
	listAdvertiser.push_back(ad1);
	listAdvertiser.push_back(ad2);
	listAdvertiser.push_back(ad3);
	listAdvertiser.push_back(ad4);
	listAdvertiser.push_back(ad5);
	listAdvertiser.push_back(ad6);
	listAdvertiser.push_back(ad7);
	listAdvertiser.push_back(ad8);
	listAdvertiser.push_back(ad9);
	
	bool b = true;
	while (b) {
		cout << "1. List all magazines" << endl <<
			"2. List all paperback books" << endl <<
			"3. List all hardback books" << endl <<
			"4. List all advertisers" << endl <<
			"5. List advertisements and advertiser for a magazine" << endl <<
			"6. Remove a Book / Magazine by ID" << endl <<
			"7. Add a magazine" << endl <<
			"8. Search for a word" << endl <<
			"9. Sum of the weight of all hardback books" << endl <<
			"0. Exit" << endl;
		string choice;
		cin >> choice;
		if (choice == "0") {
			b = false;
		}
		
		else if(choice == "1")
		{
			for (Magazine m : magazines) {
				cout << m<<endl;
			}
		}

		else if (choice == "2") {
			for (PaperBackBook p : paperbackbooks) {
				cout << p << endl;
			}
		}

		else if (choice == "3") {
			for (HardBackBook h : hardbs) {
				cout << h << endl;
			}
		}

		else if (choice == "4") {
			for (Advertiser a : listAdvertiser) {
				cout << a << endl;
			}
		}

		else if (choice == "5") {
			int id;
			cout << " Input a magazine ID : ";
			cin >> id;
			Magazine m;
			for (Magazine mag : magazines) {
				if (mag.getID() == id) {
					m = mag;
					break;
				}

			}

			vector<Advertiser> alreadyDisplayed;
			cout << "Advertisement" << endl;
			for (Advertisement adv : m.getAdvertisement()) {
				
				cout << adv.getTitle() <<endl;
				if (check_advertiser(alreadyDisplayed, adv.getID()) == false) {
					Advertiser ad = getAdvertiser(listAdvertiser, adv.getID());
					//cout << ad.display();
					alreadyDisplayed.push_back(ad);
				}


			}

			for (Advertiser a : alreadyDisplayed) {
				cout << a << endl;
			}
			

			
		}

		else if (choice == "6") {
			int id;
			cout << "Input an ID " << endl;
			cin >> id;

			for (PaperBackBook p : paperbackbooks) {
				int i = 0;
				if (p.getID() == id) {
					paperbackbooks.erase(paperbackbooks.begin()+i);
				}
				i++;
			}

			for (HardBackBook h : hardbs) {
				int i = 0;
				if (h.getID() == id) {
					hardbs.erase(hardbs.begin()+i);
				}
				i++;
			}

			for (Magazine m : magazines) {
				int i = 0;
				if (m.getID() == id) {
					magazines.erase(magazines.begin() + i);
				}
				i++;
			}
		}

		else if (choice == "7") {
			string t;
			cout << "Title ?" << endl;
			cin >> t;
			int n;
			cout << "Nb pages?" << endl;
			cin >> n;

			int act;
			
			cout << "Which Act ? 1.Act1  2.Act2" << endl;
			cin >> act;
			string txt;
			if (act == 1) {
				 txt = "Act1.txt";
				
			}
			else {
				 txt = "Act2.txt";
				
			}
			
			ifstream fichier(txt, ios::in);

			if (fichier)  
			{
				string content = "";
				string line;
				while (getline(fichier, line)) {
					content += line;
				}

				fichier.close();
				//cout << content;
				int lastId = magazines.back().getID();
				Magazine newMag = Magazine();
				newMag.setData(lastId + 1, t, n, content);
				//int nbgen = rand() % 9 + 1;
				//cout << nbgen;

				int i = 0;
				while (i < 3) {
					int c;
					cout << "Select an advertisement :" << endl <<
						"1.Ad1" << endl <<
						"2.Ad2" << endl <<
						"3.Ad3" << endl <<
						"4.Ad4" << endl <<
						"5.Ad5" << endl;
					cin >> c;
					switch (c)
					{
					case 1:
						newMag.add_advertisement(a1);
						
						break;
					case 2:
						newMag.add_advertisement(a2);
						
						break;
					case 3:
						newMag.add_advertisement(a3);
						
						break;
					case 4:
						newMag.add_advertisement(a4);
						
						break;
					case 5:
						newMag.add_advertisement(a5);
						
						break;
					default:
						break;
					}
					i++;
				}
				
				
				magazines.push_back(newMag);
			}
			else {
				cerr << "Impossible d'ouvrir le fichier !" << endl;
			}

				

		}
		else if (choice == "8") {
			string w;
			cout << "Choose a word : " << endl;
			cin >> w;
			for (PaperBackBook p : paperbackbooks) {
				int o = occurences(p.getContent(), w);
				if (o == 0) {
					cout << p.getTitle();
					cout << "This word is not in this book" << endl;
				}
				else {
					cout << p.getTitle();
					cout << "This word is in this book and it appears " << to_string(o) << " times" << endl;
				}
			}

			for (HardBackBook h : hardbs) {
				int o = occurences(h.getContent(), w);
				if (o == 0) {
					cout << h.getTitle();
					cout << "This word is not in this book" << endl;
				}
				else {
					cout << h.getTitle();
					cout << "This word is in this book and it appears " << to_string(o) << " times" << endl;
				}
			}

			for (Magazine m : magazines) {
				int o = occurences(m.getContent(), w);
				if (o == 0) {
					cout << m.getTitle();
					cout << "This word is not in this book" << endl;
				}
				else {
					cout << m.getTitle();
					cout << "This word is in this book and it appears " << to_string(o) << " times" << endl;
				}
			}



			
			/*int o =occurences("il est il il il il", "il");
			cout << o;*/
		}

		else if (choice == "9") {
			float sum = 0;
			for (HardBackBook h : hardbs) {
				sum += h.getWeigth();
			}
			cout << "Sum of the weight of all hardback books : "<<to_string(sum);
		}
	}



	
	system("pause");
	
	return 0;
}