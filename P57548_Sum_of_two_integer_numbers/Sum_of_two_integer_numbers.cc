/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rubén Díaz Marrero
 * @date Oct 30th 2021
 * @brief  Reads two numbers and prints their sum
 */

#include <iostream>

int main() {
  int first_number{0};
  int second_number{0};
  std::cin >> first_number >> second_number;
  std::cout << first_number + second_number << std::endl;

  return 0;
}
