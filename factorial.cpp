#include "functions.h"

int factorial(int n){
    if(n<0)
    {
        cout<<"Enter a +ve Number";
        int a ; cin>>a;
        return factorial(a);
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}

// que 9 