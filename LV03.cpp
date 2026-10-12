// LV03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//Ai filter poruke Paulo NN
//bool prihvatljivaPoruka(string poruka) {
//   
//    if (poruka.length() > 40 || poruka.length() <= 0) {
//        return false;
//    }
//    for (int i = 0; i < poruka.length();i++) {
//            if (poruka[i] == '#') {
//                return false;
//            }
//        }
//    return true;
//}
//
//int main()
//{
//    string poruka;
//    getline(cin, poruka);
//    if(prihvatljivaPoruka(poruka)) {
//        cout << "Poruka je prihvatljiva." << endl;
//    } else {
//        cout << "Poruka nije prihvatljiva." << endl;
//    }
//    return 0;
//}


//Pametni Senzor Paulo NN
//bool valjanoMjerenje(double temperatura, char jedninica, bool potrvdeno) {
//	if (jedninica != 'C' && jedninica != 'F') {
//		return false;
//	}
//	if (jedninica == 'C' && (temperatura < -40 || temperatura > 85)) {
//		return false;
//	}
//	if (jedninica == 'F' && (temperatura < -40 || temperatura > 185)) {
//		return false;
//	}
//	if (!potrvdeno) {
//		return false;
//	}
//	return true;
//}
//
//int main()
//{
//	double temperatura;
//	char jedinica;
//	bool potrvdeno;
//	cin >> temperatura >> jedinica >> potrvdeno;
//	if (valjanoMjerenje(temperatura, jedinica, potrvdeno)) {
//		cout << "Koristi" << endl;
//	}
//	else {
//		cout << "Odbaci" << endl;
//	}
//	return 0;
//}

//DNA Paulo NN
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
bool kandidat(string DNA) {
	if (DNA.length() >= 30 && DNA.length() <= 6) {
		return false;
	}
	int brojacGC = 0;

	for (int i = 0; i < DNA.length();i++) {
		if (DNA[i] != 'A' && DNA[i] !='G' && DNA[i]!='C' && DNA[i]!='T') {
			return false;
			}
		if (DNA[i] == 'G' || DNA[i] == 'C') {
			brojacGC++;
		}
		}

	if (brojacGC * 2 >= DNA.length()) {
		return true;
	}

	return false;
}

int main() {
	string dna;
	cin >> dna;

	if (kandidat(dna)) {
		cout << "DA";
	}
	else {
		cout << "NE";
	}

}
