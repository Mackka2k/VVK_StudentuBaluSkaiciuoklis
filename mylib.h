#include <iostream>
#include <numeric>
#include <string>
#include <array>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <ctime> 

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;
using std::setw;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;
using std::sort;
using std::domain_error;

extern char skaiciavimo_Strategija;
extern string failoVardas;

class studentas {
	string vard, pav; // [SAUGO STUDENTO VARDA IR PAVARDE]
	vector<int> paz;  // [SAUGO NAM� DARBU REZULTATUS]
	int egz;		  // [SAUGO EGZAMINO REZULTAT�]
	float rez;		  // [SAUGO GALUTIN� REZULTAT�]
public:
	studentas();                                         // [DEFAULT KONSTRUKTORIUS]
	studentas(string v, string p, vector<int>pp, int e); // [KONSTRUKTORIUS SU PARAMETRAIS]
	studentas(const studentas& temp);					 // [KOPIJAVIMO KONSTRUKTORIUS]
	studentas& operator=(const studentas& temp);		 // [PRISKIRIMO KOPIJAVIMO OPERATORIUS]
	~studentas();										 // [DESTRUKTORIUS]
	
	inline string getVardas() { return vard; }			 // [GETTER]
	inline size_t getPazNr() { return paz.size(); }	     // [GETTER]
	
	inline void setVardas(string t) { vard = t; }        // [SETTER]

	void printas();    // [I�VEDA STUDENTO DUOMENIS]
	void printasRez(); // [I�VEDA GALUTIN� PA�YM� DVIEJU SKAICIU PO KABLELIO TIKSLUMU]
	void rezVid();     // [METODAS SKAI�IUOJANTIS GALUTIN� PA�YM� PAGAL VIDURK�]
	void rezMed();     // [METODAS SKAI�IUOJANTIS GALUTIN� PA�YM� PAGAL MEDIAN�]

	double mediana(vector<int> vec);    // [FUNKCIJA SKAI�IUOJANTI MEDIAN�]
	
	void operator>>(std::istream& input);  // [PERDENGIA CIN OPERATORI�]
	void operator<<(std::ostream& output); // [PERDENGIA COUT OPERATORI�]
};