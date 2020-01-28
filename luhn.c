/* 
Takes a 16-digit credit card number input and checks its
validity using the Luhn algorithm
*/

#include <stdio.h>

#define MAX_DIGITS 16

int main(void){

	char creditCardNumber[MAX_DIGITS];
	char doubleEveryOther[MAX_DIGITS];
	int sumDigits;

	// prompts user for card number
	printf("16-digit credit card number: ");
	scanf("%16s", creditCardNumber);

	// converts ascii and doubles every second digit
	for (int i = 0; i < MAX_DIGITS; i++){
		doubleEveryOther[i] = (creditCardNumber[i] - 48);
		if ((i + 1) % 2 == 0){
			doubleEveryOther[i] *= 2;
			if (doubleEveryOther[i] > 9){
				doubleEveryOther[i] -= 9;
			}
		}
	}

	// adds every second number for check digit
	sumDigits = (doubleEveryOther[1] +
		doubleEveryOther[3] + doubleEveryOther[5] +
		doubleEveryOther[7] + doubleEveryOther[9] +
		doubleEveryOther[11] + doubleEveryOther[13] +
		doubleEveryOther[15]);

	// prints check digit and card number for verdict
	printf("Check Digit: %d\n", sumDigits);
	for (int i = 0; i < MAX_DIGITS; i++){
		printf("%d", (creditCardNumber[i] - 48));
	}

	// inspects check digit for card validity
	if (sumDigits % 10 == 0){
		printf(" is a valid number.\n");
	}
	else printf(" is not a valid number.\n");

return 0;
}
