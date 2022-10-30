/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rubén Díaz Marrero
 * @date Oct 30th 2021
 * @brief 
 *
 *
 */

#include <iostream>

int main() {

  int numerador{0};
  int denominador{0};
  std::cin >> numerador >> denominador;
  
  std::cout << numerador / denominador << " " <<  numerador % denominador << std::endl;

  return 0;
}
