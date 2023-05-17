#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int countWords(string text)
{
	stringstream s(text);
	string word;

	int count = 0;

	while(s >> word)
		count++;
	return count;
}


int main()
{

	string t = "fajne zajecia z c++";

	int words = countWords(t);

	cout << "Ilosc slow: " << words << endl;

	return 0;
}
