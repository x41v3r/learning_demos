#include <iostream>

using namespace std;

void signed_and_unsigned();
void character_literals();

int main(void)
{
	signed_and_unsigned();
	character_literals();
}

void signed_and_unsigned()
{
	cout << "********** signed and unsigned **********" << endl;
}

void character_literals()
{
	cout << "*********** character literals **********" << endl;
	char c1 = 'a';
	char c2 = '#'; // a special character is acceptable
	char c3 = ' '; // a space is also a character
	
	//char c4 = '';
	char c5 = 'abc';
	char c6 = "abc";

	cout << "c1=" << c1 << endl;
	cout << "c5=" << c5 << endl;
	cout << "c6=" << c6 << endl;
}
