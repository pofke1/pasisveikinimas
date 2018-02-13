// Padaro įrėmintą sveikinimą pagal vartotojo vardą
#include <iostream>
#include <string>

int main() {
  std::cout << "Koks Jūsų vardas: ";
  std::string vardas;
  std::cin >> vardas;
  
  std::string sveikinimas;

  // sveikinimo tekstas - trečia (vidurinė) eilutė
  if (vardas.back() == 's') {  // back() funkcija atsirado tik nuo C++11
    sveikinimas = "Sveikas, " + vardas + "!";
  } else {
    sveikinimas = "Sveika, " + vardas + "!";
  }
  
  // sudarome antrą (ir ketvirtą) eilutes
  const std::string tarpai(sveikinimas.size(), ' ');
  const std::string antra = "* " + tarpai + " *";
  
  // sudarome pirmą (ir penktą) eilutes
  const std::string pirma(antra.size(), '*');
  
  // Įrėminame sveikinimą
  std::cout << std::endl;
  std::cout << pirma << std::endl;
  std::cout << antra << std::endl;
  std::cout << "* " << sveikinimas << " *" << std::endl;
  std::cout << antra << std::endl;
  std::cout << pirma << std::endl;
  
  return 0;
}
