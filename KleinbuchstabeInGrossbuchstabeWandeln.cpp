#include <iostream>
using namespace std;
char eingabe;
char ausgabe;

int main()
{
	cout << "Bitte geben Sie den Kleinbuchstaben ein: ? ";
	cin >> eingabe;
	ausgabe = eingabe - 32;
	cout << "Der entsprechende Grossbuchstabe lautet: " << ausgabe << endl;
	system("PAUSE");
	return 0;
}