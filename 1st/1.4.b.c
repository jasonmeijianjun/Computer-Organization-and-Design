#include <stdio.h>
#define Width  1280
#define High   1024

int main(void)
{
	double pixel;
	double time;
	double Bandwidth;
	pixel = Width * High * 3 ;
	Bandwidth = 100*1024*1024;
	time =  pixel * 8 / Bandwidth;
	printf("The pixel is %f time is %f\n",pixel,time );
	return 0;
}
