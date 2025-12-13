// Grade to CEFR Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
using namespace std;

// declararea functiilor
int getValidClass(); // functia valideaza clasa pentru a se incadra intre 1 si 12
double getValidGrade(); // functia valideaza nota sa fie intre 1 si 10
int getValidLanguageLevel (); // functia valideaza limba de studiu a elevilor de gimnaziu (L1 sau L2)
void ProcessPrimarySchool (double g); // functia echivaleaza de la scoala primara cu calificativele CEFR
void ProcessMiddleSchool(); // functia ruleaza dupa caz notele elevilor de L1 sau L2 din gimnaziu
void convertMiddleL1 (double g); // functia echivaleaza notele elevilor de L1 cu calificativele CEFR
void convertMiddleL2 (double g); // functia echivaleaza notele elevilor de L1 cu calificativele CEFR
void ProcessHighSchool (double g); // functia echivaleaza notele elevilor de liceu cu calificativele CEFR


int main() {
	// declaram variabilele 
	int c; // clasa (I-XII)
	int l; // nivelul de limba la clasele de gimnaziu
	double g; // nota elevului

	// Aceasta functie apeleaza clasa din care face parte elevul 
	  c = getValidClass();

	// vreau sa incadreze elevul in grupa de notare si evaluare a elevului in grila corespunzatoare
	if (c >= 1 && c <= 4) {  // note pentru clasele primare
		g = getValidGrade(); // apelez functia de validare a notei ( daca este intre 1 si 10)
		ProcessPrimarySchool(g); // apelez functia pentru transferarea notei in calificativ (CEFR)
	}
	else if (c >= 5 && c <= 8) { // validare si incadrare notele de la gimnaziu
		ProcessMiddleSchool();
	}
	else if (c >= 9 && c <= 12) { // functia if incadreaza elevii de liceu in aceasta grila
		g = getValidGrade();
		ProcessHighSchool(g); // apelez functia pentru transferarea notei in calificativ
	}
	return 0;
}
		
   // aplicatia se incheie cu succes "code exit 0"
	
		// Aceasta cerinta este valabila tuturor elevilor 
	int getValidClass() {
		int c;
		cout << "Introduceti clasa elevului: "; cin >> c;  // solicita si citeste clasa elevului
		while (c < 1 || c>12) { // functia while invalideaza numerele in afara intervalului 1-12
		cout << "Clasa este incorecta! Introduceti o clasa intre 1 si 12: "; cin >> c; // functia solicita si citeste o noua clasa
	}
		cout << "Elevul este in clasa a-" << c << "-a" << endl;	//consola arata clasa validata
		return c;
	}
		// Aceasta functie valideaza nota elevului daca este in intervalul 1-10
	double getValidGrade() {
		double g;
		cout << "Introduceti nota elevului: "; cin >> g;
		while (g < 1 || g>10) { // func?ia while invalideaza notele din afara intervalului 1-10
			cout << "Nota este invalida! Nota trebuie sa fie intre 1 si 10."; cin >> g;
		    }	
		return g;
	}
	// Aceasta functie valideaza scrierea nivelului de studiu al elevilor de gimnaziu (Limba 1 sau Limba 2)
	int getValidLanguageLevel () {
		int l;
			cout << "Ce nivel de limba studiaza elevul?" << " 1 sau 2: "; cin >> l; // solicitare a limbii 1 sau 2 
			cout << "Limba " << l << endl;
		while (l != 1 && l != 2) {           // functia while valideaza nivelul limbii de studiu 1 sau 2
			cout << "Optiune invalida. Te rog sa introduci nivelul de limba 1 sau 2: "; cin >> l;
			}
		return l;
	}

// vreau sa incadreze elevul in grupa de notare si evaluare a elevului in grila corespunzatoare
	void ProcessPrimarySchool(double g) {
		const int(W1) = 10; // constanta pentru alinierea textului in consola
		const int(W2) = 10;	// constanta pentru alinierea textului in consola
		const int(W3) = 10;	// constanta pentru alinierea textului in consola	

		cout << "\n ============ Primary School Grading =================\n";
		cout << " " << left << setw (W1) << "Nota" << left << setw (W2) << "->" << left << setw(W2) << "CEFR" << left << setw(W3) << "->" << left << setw(W3) << "Interpretare" << "\n";
		cout << " =====================================================\n";

		if (g >= 1 && g < 3) {		// incadreaza nota intr-un nivel corespunzator grilei si o interpreteaza  
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "Below A1" << left << setw(W3) << "->" << left << setw(W3) << "Foarte Scazut" << "\n";
		}
		else if (g >= 3 && g < 5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1-" << left << setw(W3) << "->" << left << setw(W3) << "Incepator Emergent" << "\n";
		}
		else if (g >= 5 && g < 7) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1" << left << setw(W3) << "->" << left << setw(W3) << "Incepator Functional" << "\n";
		}
		else if (g >= 7 && g < 8.5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1+" << left << setw(W3) << "->" << left << setw(W3) << "Incepator Preintermediar" << "\n";
		}
		else if (g >= 8.5 && g < 9.5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1/A2" << left << setw(W3) << "->" << left << setw(W3) << "Incepator Intermediar" << "\n";
		}
		else if (g >= 9.5 && g <= 10) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A2" << left << setw(W3) << "->" << left << setw(W3) << "Incepator Avansat" << "\n";
		 // incheie verificare notelor valide
		}
	}
	void ProcessMiddleSchool() {
		int l;
		double g;
		l = getValidLanguageLevel();

		// functia switch va decide in functie de nivelul de limba L1 sau L2 care caz caz va rula (1 sau 2)
		switch (l) {
		case 1:
			//func?ia if solicita introducerea notei daca elevul este de nivel 1
			g = getValidGrade();
			convertMiddleL1(g); // apelez functia pentru transferarea notei in calificativ
			break;

		case 2:
			//func?ia if solicita introducerea notei daca elevul este de nivel 2
			g = getValidGrade();
			convertMiddleL2(g); // apelez functia pentru transferarea notei in calificativ
			break;
			// functia default de iesire din bucla daca 
		default: cout << "Eroare interna. Nivel necunoscut." << endl;
			     cout << "Alege un nivel de studiu: 1 sau 2."; cin >> l;
			break;
		}
	}
	void convertMiddleL1(double g) {
		const int(W1) = 10; // constanta pentru alinierea textului in consola
		const int(W2) = 10;	// constanta pentru alinierea textului in consola
		const int(W3) = 10;	// constanta pentru alinierea textului in consola	

		cout << "\n ============ Primary School Grading =================\n";
		cout << " " << left << setw(W1) << "Nota" << left << setw(W2) << "->" << left << setw(W2) << "CEFR" << left << setw(W3) << "->" << left << setw(W3) << "Interpretare" << "\n";
		cout << " =====================================================\n";

		// nota elevului de gimnaziu care studiaza limba 1 este echivalata cu un calificativ CEFR 
		if (g >= 1 && g < 3) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "Below A1" << left << setw(W3) << "->" << left << setw(W3) << "Insuficient" << "\n";
		}
		else if (g >= 3 && g < 4) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1-" << left << setw(W3) << "->" << left << setw(W3) << "Sub Nivel" << "\n";
		}
		else if (g >= 4 && g < 5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1" << left << setw(W3) << "->" << left << setw(W3) << "Elementar" << "\n";
		}
		else if (g >= 5 && g < 6) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1+" << left << setw(W3) << "->" << left << setw(W3) << "Consolidat" << "\n";
		}
		else if (g >= 6 && g < 7) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1/A2" << left << setw(W3) << "->" << left << setw(W3) << "Preliminar" << "\n";	
		}
		else if (g >= 7 && g < 7.5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A2-" << left << setw(W3) << "->" << left << setw(W3) << "Pre-intermediar" << "\n";
		}
		else if (g >= 7.5 && g < 8.5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A2" << left << setw(W3) << "->" << left << setw(W3) << "Consolidat" << "\n";
		}
		else if (g >= 8.5 && g < 9.5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A2+" << left << setw(W3) << "->" << left << setw(W3) << "Avansat" << "\n";
		}
		else if (g >= 9.5 && g <= 10) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "B1-" << left << setw(W3) << "->" << left << setw(W3) << "Pre-intermediar" << "\n";
		}
	}
	void convertMiddleL2(double g) {
		const int(W1) = 10; // constanta pentru alinierea textului in consola
		const int(W2) = 10;	// constanta pentru alinierea textului in consola
		const int(W3) = 10;	// constanta pentru alinierea textului in consola	

		cout << "\n ============ Primary School Grading =================\n";
		cout << " " << left << setw(W1) << "Nota" << left << setw(W2) << "->" << left << setw(W2) << "CEFR" << left << setw(W3) << "->" << left << setw(W3) << "Interpretare" << "\n";
		cout << " =====================================================\n";

		// nota elevului de gimnaziu care studiaza limba 2 este echivalata cu un calificativ CEFR si o interpreteaza
		if (g >= 1 && g < 3) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "Below A1" << left << setw(W3) << "->" << left << setw(W3) << "Insuficient" << "\n";
		}
		else if (g >= 3 && g < 5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1" << left << setw(W3) << "->" << left << setw(W3) << "Elementar" << "\n";
		}
		else if (g >= 5 && g < 6) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1+" << left << setw(W3) << "->" << left << setw(W3) << "Functional" << "\n";
		}
		else if (g >= 6 && g < 7) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1/A2" << left << setw(W3) << "->" << left << setw(W3) << "Preliminar" << "\n";
		}
		else if (g >= 7 && g < 8) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A2" << left << setw(W3) << "->" << left << setw(W3) << "Consolidat" << "\n";
		}
		else if (g >= 8 && g < 9.5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A2+" << left << setw(W3) << "->" << left << setw(W3) << "Avansat" << "\n";
		}
		else if (g >= 9.5 && g <= 10) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "B1-" << left << setw(W3) << "->" << left << setw(W3) << "Elementar" << "\n";
		}
	}
	void ProcessHighSchool(double g) {
		const int(W1) = 10; // constanta pentru alinierea textului in consola
		const int(W2) = 10;	// constanta pentru alinierea textului in consola
		const int(W3) = 10;	// constanta pentru alinierea textului in consola	

		cout << "\n ============ Primary School Grading =================\n";
		cout << " " << left << setw(W1) << "Nota" << left << setw(W2) << "->" << left << setw(W2) << "CEFR" << left << setw(W3) << "->" << left << setw(W3) << "Interpretare" << "\n";
		cout << " =====================================================\n";

		if (g >= 1 && g < 3) { //functiile ulterioare echivaleaza nota intr-un calificativ CEFR si o interpreteaza
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "Below A1" << left << setw(W3) << "->" << left << setw(W3) << "Insuficient" << "\n";
		}
		else if (g >= 3 && g < 4) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1" << left << setw(W3) << "->" << left << setw(W3) << "Elementar" << "\n";
		}
		else if (g >= 4 && g < 5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A1+" << left << setw(W3) << "->" << left << setw(W3) << "Preliminar" << "\n";
		}
		else if (g >= 5 && g < 6) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A2" << left << setw(W3) << "->" << left << setw(W3) << "Functional" << "\n";
		}
		else if (g >= 6 && g < 7) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "A2+" << left << setw(W3) << "->" << left << setw(W3) << "Consolidat" << "\n";
		}
		else if (g >= 7 && g < 8) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "B1-" << left << setw(W3) << "->" << left << setw(W3) << "Pre-intermediar" << "\n";
		}
		else if (g >= 8 && g < 8.7) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "B1" << left << setw(W3) << "->" << left << setw(W3) << "Intermediar" << "\n";
		}
		else if (g >= 8.7 && g < 9.5) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "B1+" << left << setw(W3) << "->" << left << setw(W3) << "Independent" << "\n";
		}
		else if (g >= 9.5 && g <= 10) {
			cout << " " << left << setw(W1) << g << left << setw(W2) << "->" << left << setw(W2) << "B2" << left << setw(W3) << "->" << left << setw(W3) << "Avansat" << "\n";
		}
	}


