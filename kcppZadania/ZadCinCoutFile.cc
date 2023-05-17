#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	cout << "Wypisanie na ekran" << endl;

	cerr << "Do strumienia bledow" << endl;

	ofstream f("output.txt");
	cout << "Co chcesz zapisac do pliku?" << endl;
	string toSave;
	getline(cin, toSave);
	f << toSave;
	f.close();
	
	string fromFile;
	ifstream inp("output.txt");
	getline(inp, fromFile);
	
	cout << "Odczytane z pliku: " << fromFile << endl;

	return 0;
}
