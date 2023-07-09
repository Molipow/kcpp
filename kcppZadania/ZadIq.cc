#include <iostream>

using namespace std;

int main()
{
	int vars[] = {1,2,3,4,5};
	cout << 3[vars] << endl;
	//dziala to dlatego, bo konstrukcja i[x] szuka komorki o adresie 'i' i przesunieciu 'x'
}
