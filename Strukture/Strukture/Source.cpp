#include<iostream>
using namespace std;

struct Datum {
	int dan;
	int mjesec;
	int godina;
};

struct Student {
	int brojIndexa;
	char ime[20];
	char prezime[20];
	Datum datumRodjenja;
};

void Ispis(Student obj) {
	cout << obj.brojIndexa << " " << obj.ime << " " << obj.prezime << " " << obj.datumRodjenja.dan << "/" << obj.datumRodjenja.mjesec << "/" << obj.datumRodjenja.godina << endl;
}

void main() {
	Student prvaGodina[300];
	prvaGodina[0] = { 1122, "Denis", "Music", 12, 5, 1990 };
	prvaGodina[1] = { 2258, "Jasmin", "Azemovic", 19, 6, 1989 };
	Ispis(prvaGodina[0]);
	Ispis(prvaGodina[1]);
	system("pause>0");
}