#include <stdio.h>
#include "bigInteger.h"


int main ()
{
	longInt a = NULL;
	longInt b = NULL;
	longInt rez = NULL;
	longInt c = NULL;
	longInt d = NULL;

	c = createBigInteger ("212");
   d = createBigInteger ("46");
	a = createBigInteger ("6231545");
	b = createBigInteger ("24");
	char* k = bigIntegerToString(a);
	char* z = bigIntegerToString(d);
	printf("%s\n",k);
	printf("%s\n",z);
	printInteger(a);
	printf(" * ");
	printInteger(b);
	printf(" = ");
	rez = multiplication(a,b);
	printInteger(rez);
	printf("\n");
	freeBigInteger(&rez);

	printInteger(c);
	printf(" / ");
	printInteger(d);
	printf(" = ");
	rez = division(c,d);
	printInteger(rez);
	printf("\n");
	freeBigInteger(&rez);

	printInteger(a);
	printf(" mod ");
	printInteger(b);
	printf(" = ");
	rez = divisionResidue(a,b);
	printInteger(rez);
	printf("\n");
	freeBigInteger(&rez);



	rez = subtraction(a,b);
	printInteger(a);
	printf(" - ");
	printInteger(b);
	printf(" = ");
	printInteger(rez);
	freeBigInteger(&rez);
	printf("\n");

	rez = subtraction(b,a);
	printInteger(b);
	printf(" - ");
	printInteger(a);
	printf(" = ");
	printInteger(rez);
	freeBigInteger(&rez);
	printf("\n");

	printInteger(c);
	printf(" + ");
	printInteger(d);
	printf(" = ");
	rez = addition(c,d);
	printInteger(rez);
	printf("\n");
	freeBigInteger(&rez);

	rez = subtraction(c,d);
	printInteger(c);
	printf(" - ");
	printInteger(d);
	printf(" = ");
	printInteger(rez);
	freeBigInteger(&rez);
	printf("\n");

	rez = subtraction(d,c);
	printInteger(d);
	printf(" - ");
	printInteger(c);
	printf(" = ");
	printInteger(rez);
	freeBigInteger(&rez);
	printf("\n");

	printInteger(a);
	printf(" + ");
	printInteger(c);
	printf(" = ");
	rez = addition(a,c);
	printInteger(rez);
	printf("\n");
	freeBigInteger(&rez);

	rez = subtraction(a,c);
	printInteger(a);
	printf(" - ");
	printInteger(c);
	printf(" = ");
	printInteger(rez);
	freeBigInteger(&rez);
	printf("\n");
	
	freeBigInteger(&a);
	freeBigInteger(&b);
	freeBigInteger(&c);
	freeBigInteger(&d);
    return 0;
}
