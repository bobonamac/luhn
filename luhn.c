/* 
Takes a credit card number input and checks its validity 
*/

#include <stdio.h>

#define MAX_DIGITS_PLUS_TWO 18

int main(void){

	char creditCardNumber[MAX_DIGITS_PLUS_TWO];
	char doubleEveryOther[MAX_DIGITS_PLUS_TWO];
	char sumDigits[MAX_DIGITS_PLUS_TWO];

	printf("16-digit credit card number: ");
	scanf("%16s", creditCardNumber);
	creditCardNumber[16] = 'x';
	creditCardNumber[17] = '\r';
	
	for (int i = 0; i < MAX_DIGITS_PLUS_TWO; i++){
		printf("%d", (creditCardNumber[i] - 48));
	}
	printf("\n");
	
return 0;
}
