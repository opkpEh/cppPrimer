//objective: to create a for loop to sum up numbers ranging from 1 to 10

#include <iostream>

int main(){
      int sum= 0;

      for (int i=1; i<=10; i++){
            sum+= i;
      }

      std::cout<< "The sum of numbers from 1 to 10 is : " << sum << std::endl;

      return 0;

}