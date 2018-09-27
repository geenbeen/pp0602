#include <stdio.h>

int main(void) {
	printf("Enter a 24 hour time: ");
	int hour;
	int minute;
	scanf("%d:%2d", &hour, &minute);
	if (hour>12) {
		printf("%d:%-.2d PM", hour-12, minute);
	}
	else if(hour==12) {
		printf("%d:%-.2d PM", 12, minute);
	}
	else {
		printf("%d:%-.2d AM", hour, minute);
	}
}
