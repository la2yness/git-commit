// computes the volume of a spthere with a 10-meter radius, using the formula v=4/3pir*3
// Modify so that it prompts the user to enter the radius of the sphere

#include <stdio.h>

int main(void)
{
	int r;
	printf("enter the radius of the sphere\n");
	scanf("%d", &r);
	printf("value : %f\n", 4.0f / 3.0f * 3.14f * r * r * r);

	return 0;
}
