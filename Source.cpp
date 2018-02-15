#include <iostream>
using namespace std;

int main() {
	char input = 'a';
	int room = 1;

	while (input !='q')
		switch (room) {
		case 1:
			cout << "you're in room one you can go (e)"<< endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			break;
		case 2:
			cout << "you're in room two you can go (s and e and w)" << endl;
			cin >> input;
			if (input == 's')
				room = 3;
			if (input == 'e')
				room = 4;
			if (input == 'w')
				room = 1;
			break;
		case 3:
			cout << "you're in room three you can go (n)" << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			break;
		case 4:
			cout << "you're in room four you can go (w)" << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			break;
		}













}
