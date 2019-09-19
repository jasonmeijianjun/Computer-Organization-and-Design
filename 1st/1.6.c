#include<stdio.h>
#include<math.h>
#define I 1000000.0
int main(void)
{
	int i,j;
	double time[2];
	double avg_CPI[2] = {0,0};
	double freq[2] = {2500000,3000000};
	double CPI[2][4] = {{1,2,3,3},{2,2,2,2}};
	double percent[4] = {0.1,0.2,0.5,0.2}; 
	for (j = 0;j < 2; j++) { 
		for (i = 0; i < 4; i++) {
			avg_CPI[j] += CPI[j][i] * percent[i];
		}	
		printf("avg_CPI[%d] = %f\n",j,avg_CPI[j]);
/*
 * time = I * CPI / f  
 */	
		time[j] = I * avg_CPI[j] /freq[j];	
		printf("time[%d] = %f\n",j,time[j]);
	}

}
