#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include "../include/ZadIO.h"

using namespace std;

void Inpout::first()
{
    cout << "Przyklad zastosowania klasy stringstream" << endl;
	cout << "Wpisz zdanie:" << endl;
	cin >> ws;
	string t;
	getline(cin, t);
	int words = countWords(t);
	cout << "Ilosc slow: " << words << endl;
}

void Inpout::second()
{
    double w1 = 3.55436 + 14.45647883;
	double t1 = 1.88655 + 6.55544;
	double w2 = 5.3345 + 1.58765;
	double t2 = 12.543689 + 54.22543;
	double w3 = 1.5467 + 3.56574;
	double t3 = 54.32543 + 23.55432;

	double avw = (w1+w2+w3)/3;
	double avt = (t1+t2+t3)/3;

	double wynik = t1;

	cout << "Wynik naszego dzialania: " << fixed << setprecision(5) << wynik << " jest niepoprawny ale:" << endl;
	cout << "\toutput:" << setprecision(3) << setfill(' ') << setw(9) << w1 << setw(6) << "T:" << setw(7) << t1 << endl;
	cout << "\toutput1:" << setprecision(4) << setfill(' ') << setw(9) << w2 << setw(5) << "T:" << setprecision(5) << setw(9) << t2 << endl;
	cout << "\toutput2:" << setprecision(4) << setfill(' ') << setw(9) << w3 << setw(5) << "T:" << setprecision(6) << setw(10) << t3 << endl;
	cout << "\t" << setfill('-') << setw(33) << "-" << endl;
	cout << "\taverage:" << setprecision(4) << setfill(' ') << setw(9) << avw << setw(5) << "T:" << setprecision(6) << setw(10) << avt << endl;
}

void Inpout::third()
{
	cout << "Wypisanie na ekran" << endl;

	cerr << "Do strumienia bledow" << endl;

	ofstream f("output.txt");
	cout << "Co chcesz zapisac do pliku?" << endl;
	cin >> ws;
	string toSave;
	getline(cin, toSave);
	f << toSave;
	f.close();
	
	string fromFile;
	ifstream inp("output.txt");
	getline(inp, fromFile);
	
	cout << "Odczytane z pliku: " << fromFile << endl;
}

int Inpout::countWords(string text)
{
	stringstream s(text);
	string word;

	int count = 0;

	while(s >> word)
		count++;
	return count;
}
