//Will keep calculating the sum till the code is terminated
#include <iostream>

int main(){

      int sum= 0, value= 0;

      // read until end of file, calculating a running total of all values read
      std::cout<< "Start entering the numbers you want to add up, close the code to get the sum"<< std::endl;
      while (std::cin>> value){
            sum+= value;
            value++;
      }

      std::cout<< "The sum is " << sum << std::endl;

      return 0;
}