#include <iostream>
#include <string>

using namespace std;
using std::string;

void foo(string s)
{
    string t = s;
    cout << "Length of your string: " << s.size() << endl;
    s.erase(2,4);
    cout << "String after erasing: " << s << endl;
    s.swap(t);
    cout << "String after swapping: " << s << endl;
    cout << "Location of the first o: " << s.find('o') << endl;
}

int main()
{
    string inp;
    cout << "Input your string\n>";
    getline(cin, inp);
    foo(inp);
    return 0;
}
