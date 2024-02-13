#include <iostream>
using namespace std;

class Maszyna {
public:
	string name;
	string color;
	int serial_number;
	int digit;

	void runMaszyna() {
		if (digit == 2) {
			showMaszyna();
		}
		else if (digit == 1) {
			zrobMaszyna();
		}
		else {
			message();
		}
	}
	void showMaszyna() {
		cout << "Maszyna uruchomiona: nr - " << serial_number << " Nazwa: "
			<< name << "Kolor: " << color << endl;
	}
	void zrobMaszyna() {
		cout << "Maszyna uruchomiona: nr - " << serial_number << " Nazwa: "
			<< name << "Kolor: " << color << endl;
	}

	void message() {
		cout << "Maszyna wybuchla" << endl;
	}
};




int main()
{
	int uruchomienie;
	cout << "Maszyna 1 - Start, inna wartosc: Maszyna bumb bum " << endl;
	cout << "Co chcesz zrobic: "; cin >> uruchomienie;
	cout << "----------------------------------------" << endl;
	int easteregg;
	cout << "Maszyna 2 - Start, inna wartosc: Maszyna nie dziala nie ma 21:37 " << endl;
	cout << "Co chcesz zrobic: "; cin >> easteregg;
	cout << "----------------------------------------" << endl;
	Maszyna mojamasz;
	mojamasz.digit = uruchomienie;
	mojamasz.serial_number = 123456788;
	mojamasz.name = "Opel Astra 1 ";
	mojamasz.color = "szybki";
	mojamasz.runMaszyna();
	Maszyna niemojamasz;
	niemojamasz.digit = easteregg;
	niemojamasz.serial_number = 2137;
	niemojamasz.name = "Barka Jana Pawla II ";
	niemojamasz.color = "Kremowkowy";
	niemojamasz.runMaszyna();

	return EXIT_SUCCESS;

}

