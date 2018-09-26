#include <stdio.h>

int main(void) {
	printf("Enter a 24 hour time: ");
	int hour;
	int minute;
	scanf("%d:%d", &hour, &minute);
	if (hour>12) {
		printf("%d:%d PM", hour-12, minute);
	} else {
		printf("%d:%d AM", hour, minute);
	}
}
		
