#include <iostream>
int main(){

      int sum= 0, var= 50;
      while(var<= 100){
            sum+= var;
            var++;
      }

      std::cout<< "The sum from 50 to 100 is: "<< sum<< std::endl;

      return 0;
}

