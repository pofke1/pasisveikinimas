/*!
 *  \brief     Įrėmintas pasisveikinimas
 *  \details   Padaro įrėmintą sveikinimą pagal vartotojo vardą
 *  \author    Remigijus
 *  \version   1.0
 *  \date      2018-02-20
 */
#include <iostream>
#include <string>
#include <cassert>
// Standartinės bibliotekos using-deklaracijos
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main() {
  // paprašome prisistatyti
  cout << "Koks Jūsų vardas: ";
  // nuskaitome vardą
  string vardas;
  cin >> vardas;
  string sveikinimas;
  // pagal lytį sudarome sveikinimo tekstą - vidurinė eilutė
  if (vardas.back() == 's') {  // .back() veikia nuo C++11
    sveikinimas = "Sveikas, " + vardas + "!";
  } else {
    sveikinimas = "Sveika, " + vardas + "!";
  }
  // Tuščių eilučių/stulpelių (tarpų) skaičius iki rėmelio
  int tarpai = 1;
  cout << "Įveskite rėmelio dydį (nuo 1 iki 10): ";
  cin >> tarpai;
  assert(tarpai >= 1 && tarpai <= 10);
  // Bendras eilučių skaičius
  const int eilutes = tarpai * 2 + 3;
  // Bendras stulpelių skaičius
  const string::size_type stulpeliai = sveikinimas.size() + tarpai * 2 + 2;
  // tuščia eilutė atskirti įvedimą nuo išvedimo
  cout << endl;
  // invariantas: iki šiol atspausdinome e eilučių
  for (int e = 0; e != eilutes; ++e) {
    string::size_type s = 0;  // Nuo C++11 galima: auto s = 0;
    // invariantas: iki šiol šioje eilutėje atspausdinome s simbolių
    while (s != stulpeliai) {
      // ar laikas sveikinimui?
      if (e == tarpai + 1 && s == tarpai + 1) {
        cout << sveikinimas;
        s += sveikinimas.size();
      } else {
        // patikriname ar ant krašto?
        if (e == 0 || e == eilutes - 1 || s == 0 || s == stulpeliai - 1)
          cout << "*";
        else  // jei ne ant krašto ir ne sveikinimo pozicija
          cout << " ";
        ++s;
      }
    }
    cout << endl;
  }
  return 0;
}
