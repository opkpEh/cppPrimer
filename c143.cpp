#include <iostream>

int main(){

      int sum= 0, rangeStart= 0, rangeEnd= 0;

      std::cout<< "Enter the starting range and the ending range for the range of numbers"<< std::endl;
      std::cin >> rangeStart;
      std::cin >> rangeEnd;

      int rangeStartPreserve= rangeStart;

      while (rangeStart<= rangeEnd){
            sum += rangeStart;
            rangeStart++;
      }  

      std::cout<< "The sum of range for "<< rangeStartPreserve << " and " << rangeEnd << " is " << sum << std::endl;

      return 0;
}