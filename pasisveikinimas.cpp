// Padaro įrėmintą pasisveikinimą pagal vartotojo vardą
#include <iostream>
#include <string>

int main() {
  std::cout << "Koks Jūsų vardas: ";
  std::string vardas;
  std::cin >> vardas;
  
  // pasisveikinimo tekstas - trečia (vidurinė) eilutė
  const std::string pasisveikinimas = "Sveikas, " + vardas + "!";
  
  // sudarome antrą (ir ketvirtą) eilutes
  const std::string tarpai(pasisveikinimas.size(), ' ');
  const std::string antra = "* " + tarpai + " *";
  
  // sudarome pirmą (ir penktą) eilutes
  const std::string pirma(antra.size(), '*');
  
  // įrėminame pasisveikinimą
  std::cout << std::endl;
  std::cout << pirma << std::endl;
  std::cout << antra << std::endl;
  std::cout << "* " << pasisveikinimas << " *" << std::endl;
  std::cout << antra << std::endl;
  std::cout << pirma << std::endl;
  
  return 0;
}