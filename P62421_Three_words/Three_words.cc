/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rubén Díaz Marrero
 * @date Oct 30th 2021
 * @brief 
 * Reads three words a, b and c, and prints a line with c, b and a in this order.
 * 
 *
 */

#include <iostream>

int main() {
  std::string first_string;
  std::string second_string;
  std::string third_string;
  std::cin >> first_string >> second_string >> third_string;
  std::cout << third_string << " " << second_string << " " << first_string << std::endl;

  return 0;
}
 
