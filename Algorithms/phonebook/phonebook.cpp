#include <iostream>
#include <string>
using namespace std;

typedef struct {
	string name;
	string number;
} person;

int main() {
	
	person contacts[4];

	contacts[0].name = "EMMA";
	contacts[0].number = "617-123-0100";

	contacts[1].name = "RODRIGO";
	contacts[1].number = "617-321-5555";

	contacts[2].name = "BRIAN";
	contacts[2].number = "617-321-4040";

	contacts[3].name = "DAVID";
	contacts[3].number = "617-777-7777";
	 

	string input;
	cin >> input;

	for (int i = 0; i < 4; i++) {
		if (contacts[i].name == input) {
			cout << contacts[i].name << ": " << contacts[i].number << endl;
			return 0;
		}
	}
	cout << "Nout Found" << endl;
	return 1;
}