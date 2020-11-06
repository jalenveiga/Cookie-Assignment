//Exercise 2.1 - Cookie Assignment

#include <iostream>

int main() {

   int cookies = 23;
   int people = 5;
   int total = 0;
   double realNum = 23.0;
   double realDiv = 5.0;

   total = cookies / people;
   std::cout << "Each person can eat " << total << " cookies. There will be left  " << std::endl;
   realDiv = cookies % people;
   std::cout << "" << realDiv << std::endl;


   return 0;
}
