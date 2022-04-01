#include <stdio.h>
int sumNumber(int x, int y) {

	int  i;
	i = x + y;
	printf("%d\n", i);
}
 int minusNumber(int x, int y) {

	int  i;
	i = x - y;
	printf("%d\n", i);
}
 float  divisionNumber(float x, float y) {

	 float  i;
	 i = x / y;
	 printf("%f\n", i);
 }
int   multipNumber(int x, int y) {

	 int  i;
	 i = x * y;
	 printf("%d\n", i);
 }
int   modulNumber(int x, int y) {

	int  i;
	i = x % y;
	printf("%d\n", i);
}
int main() {
	int x, y ;
	char op;

    printf("Enter an operator (+, -, *, / ,%): ");
	scanf("%c", &op);
	printf(" please enter tow numbers");
	scanf(" %d %d", &x, &y);
    
	switch (op) {
	case '+':
		sumNumber(x, y);  
		break;
	case '-':
		minusNumber(x, y);
		break;
	case '/':
		divisionNumber(x, y);
		break;
	case '*':

		multipNumber(x, y);
		break;
	case '%':
		modulNumber(x, y);
		break;
	default:
		printf("Error! operator is not correct");

	}


}
