// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

void PrintStar(int n){
    while(n--){
        printf("*");
    }
}
void PrintSpaces(int n){
    while(n--){
        printf(" ");
    }
}

int main() {
    int height=5;
    int spaces = 2 * (height - 1);

	for (int i = 1; i <= height; i++)
	{
		PrintStar(i);
		PrintSpaces(spaces);
		PrintStar(i);
		printf("\n");
		spaces -= 2;
	}
    spaces = 2;
	for (int i = height - 1; i > 0; i--)
	{
		PrintStar(i);
		PrintSpaces(spaces);
		PrintStar(i);
		printf("\n");
		spaces += 2;
	}
}
