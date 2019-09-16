#include <stdio.h>
#define Width  1280
#define High   1024

int main(void)
{
	int pixel;
	pixel = Width * High * 3 ;
	printf("The pixel is %d\n",pixel);
	return 0;
}
