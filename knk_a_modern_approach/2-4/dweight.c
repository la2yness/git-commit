// 12 x 10 x 8 인치 박스의 dimensional weight를 계산하라

#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;
	
	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	weight = (volume + 165) / 166;
	
	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
