#include "fibonacci.h"

int fib(int n){
	if(n<=2){
		return 1;
	}
	else{
		return fib(n-2) + fib (n-1);
	}
  return 0;
}
