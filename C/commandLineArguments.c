#include <stdio.h>

int main( int argc, char *argv[] )  {
    // argv[0] holds the name of the program itself
    // so, argc>1 hold line arguments

    if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
    }
    else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
    }
    else {
      printf("One argument expected.\n");
    }
}