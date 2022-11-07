#include <iostream>

int main(){

      int sum= 0, var= 10;

      while(var>= 0){
            sum+= var;
            var--;
      }

      std::cout<< "The sum from 10 to 0 is :" << sum << std::endl;
}