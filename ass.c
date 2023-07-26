#include <stdio.h>
#include <stdlib.h>    
#include <time.h>   

int main() 
{
    srand(time(NULL)); 
    /* This sets the seed value for the random number generator to the current time,
	   ensuring different random values on each program run. */

    char charSet[] = "0123456789ABCDEF";
    /*  This line defines a character array called charSet,
	    which contains the characters '0' to '9' followed by 'A' to 'F'.
		This character set represents all the possible characters
		from which we can choose a random character.  */
    
	char randomChar = charSet[rand() % 16];
	/* This line accesses the randomNum-th element of the charSet array,
	   which gives us the character at that position.
	   Since "rand() % 16" is in the range 0 to 15,
	   it will correspond to one of the characters in the character set. */

    printf("The Randomly choosen Character is %c.\n", randomChar);

    return 0;
}
