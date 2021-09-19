#include <stdio.h>
#include <stdlib.h>


int main (){

	char character;

	scanf ("%c", &character);

	if (character == 'A'|| character == 'I' || character == 'U' || character == 'E' || character == 'O'){

		printf ("Vowel");
	}
	else{

		printf ("Consonant");
	}


	return 0;
}
