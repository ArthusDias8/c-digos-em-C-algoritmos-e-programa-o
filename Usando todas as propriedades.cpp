#include <stdio.h>

int main(){
	double A, B, X, Y, Z, W, T;
	printf("inforeme o valor de A: ");
	scanf("%lf", &A);
	printf("inforeme o valor de B: ");
	scanf("%lf", &B);
	X = A * B;
	Y = A + B;
	Z = A - B;
	W = A / B;
	printf("X = %.3lf\n", X);
	printf("Y = %.3lf\n", Y);
	printf("Z = %.3lf\n", Z);
	printf("W = %.3lf\n", W);
	
	T = X + Y + Z + W;
	printf("T = %.3lf\n", T);
	
}
