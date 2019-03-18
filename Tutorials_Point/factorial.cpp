#include "functions.h"
#include <iostream>
int factorial(int n){
   //std::cout << "Inside the factorial function\n";
   if(n!=1){
      return(n * factorial(n-1));
   } else 
	return 1;
}
