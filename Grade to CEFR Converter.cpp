// Grade to CEFR Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	// declaram si initializam characterele si numerele cu care lucram
	int c; // clasa (I-XII)
	int l; // nivelul de limba (se aplica claselor de gimnaziu V-VIII)
	//L1 (4 ani + nr de clase gimnaziu) sau (nr. de ani de  gimnaziu pana acum)
	double g; // nota elevului
	cout << "In ce clasa este elevul?" << endl;  // solicitam clasa elevului
	cin >> c;									// citeste clasa
	cout << "Elevul este in clasa a-" << c << "-a" << endl;	//consola arata clasa introdusa
	// vreau sa incadreze elevul in grupa de notare si evaluare a elevului in grila corespunzatoare
	if (c >= 1 && c <= 4) {       // note pentru clasele primare
		cout << "Introduceti nota elevului: "; cin >> g;        // solicitam nota elevului si citim nota
		while (g < 1 || g>10) {				// valideaza nota elevului
			cout << "Nota este invalida! Nota trebuie sa fie intre 1 si 10." << endl;  // invalideaza nota din afara intervalului 1-10
			cin >> g;						// citeste o alta nota introdusa de la tastatura
		}
		if (g >= 1 && g < 3) {					// incadreaza nota intr-un nivel corespunzator grilei si o interpreteaza  
			cout << g << "\t-> Below A1" << "\tNivel foarte scazut" << endl;
		}
		else if (g >= 3 && g < 5) {
			cout << g << "\t-> A1-" << "\tIncepator emergent" << endl;
		}
		else if (g >= 5 && g < 7) {
			cout << g << "\t-> A1" << "\tIncepator functional" << endl;
		}
		else if (g >= 7 && g < 8.5) {
			cout << g << "\t-> A1+" << "\tIncepator Preintermediar" << endl;
		}
		else if (g >= 8.5 && g < 9.5) {
			cout << g << "\t->  A1/A2" << "\tIncepator Intermediar" << endl;
		}
		else if (g >= 9.5 && g <= 10) {
			cout << g << "\t-> A2" << "\tIncepator Avansat" << endl;        // incheie verificare notelor valide
		}
	}

	else if (c >= 5 && c <= 8) {			// validare si incadrare notele de la gimnaziu
		cout << "Ce nivel de limba studiaza elevul?" << " 1 sau 2: "; cin >> l; // solicitare a limbii 1 sau 2 
		cout << "Limba " << l << endl;
		while (l != 1 && l != 2) {                         // validarea limbii de studiu
			cout << "Optiune invalida. Te rog sa introduci 1 pentru Limba 1 sau 2 pentru Limba 2.";
			cin >> l;
		}
		if (l == 1) {
			cout << "Introduceti nota elevului: "; cin >> g;

			while (g < 1 || g>10) {
				cout << "Nota este invalida! Nota trebuie sa fie intre 1 si 10.";
				cin >> g;
			}
			if (g >= 1 && g < 3) {
				cout << g << "\t-> Below A1" << "\t Nivel insuficient";
			}
			else if (g >= 3 && g < 4) {
				cout << g << "\t-> A1-" << "\t Sub nivel";
			}
			else if (g >= 4 && g < 5) {
				cout << g << "\t-> A1" << "\t Elementar";
			}
			else if (g >= 5 && g < 6) {
				cout << g << "\t-> A1+" << "\t Consolidat";
			}
			else if (g >= 6 && g < 7) {
				cout << g << "\t-> A1/A2" << "\t Preliminar";
			}
			else if (g >= 7 && g < 7.5) {
				cout << g << "\t-> A2-" << "\t Pre-intermediar";
			}
			else if (g >= 7.5 && g < 8.5) {
				cout << g << "\t-> A2" << "\t Consolidat";
			}
			else if (g >= 8.5 && g < 9.5) {
				cout << g << "\t-> A2+" << "\t Avansat";
			}
			else if (g >= 9.5 && g <= 10) {
				cout << g << "\t-> B1-" << "\t Pre-intermediar";
			}

		}


		else if (l == 2) {
			cout << "Introduceti nota elevului: "; cin >> g;

			while (g < 1 || g>10) {
				cout << "Nota este invalida! Nota trebuie sa fie intre 1 si 10.";
				cin >> g;
			}

			if (g >= 1 && g < 3) {
				cout << g << "\t-> Below A1" << "\t Nivel insuficient";
			}
			else if (g >= 3 && g < 5) {
				cout << g << "\t-> A1-/A1" << "\t Elementar";
			}
			else if (g >= 5 && g < 6) {
				cout << g << "\t-> A1+" << "\t Functional";
			}
			else if (g >= 6 && g < 7) {
				cout << g << "\t-> A1/A2" << "\t Preliminar";
			}
			else if (g >= 7 && g < 8) {
				cout << g << "\t-> A2" << "\t Consolidat";
			}
			else if (g >= 8 && g < 9.5) {
				cout << g << "\t-> A2" << "\t Avansat";
			}
			else if (g >= 9.5 && g <= 10) {
				cout << g << "\t-> B1-" << "\t Elementar";
			}
		}
	}
	else if (c >= 9 && c <= 12) {
		cout << "Introduceti nota elevului: "; cin >> g;

		while (g < 1 || g>10) {
			cout << "Nota este invalida! Nota trebuie sa fie intre 1 si 10.";
			cin >> g;
		}
		if (g >= 1 && g < 3) {
			cout << g << "\t-> Below A1" << "\t Nivel insuficient";
		}
		else if (g >= 3 && g < 4) {
			cout << g << "\t-> A1" << "\t Elementar";
		}
		else if (g >= 4 && g < 5) {
			cout << g << "\t-> A1+" << "\tPreliminar";
		}
		else if (g >= 5 && g < 6) {
			cout << g << "\t-> A2" << "\t Functional";
		}
		else if (g >= 6 && g < 7) {
			cout << g << "\t->A2+" << "\t Consolidat";
		}
		else if (g >= 7 && g < 8) {
			cout << g << "\t-> B1-" << "\t Pre-intermediar";
		}
		else if (g >= 8 && g < 8.7) {
			cout << g << "\t-> B1" << "\t Intermediar";
		}
		else if (g >= 8.8 && g < 9.5) {
			cout << g << "\t-> B1+" << "\t Independent";
		}
		else if (g >= 9.5 && g <= 10) {
			cout << g << "\t-> B2" << "\t Avansat";
		}
	}


	return 0;
}
	
