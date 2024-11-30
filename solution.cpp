#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_ROWS 201
#define MAX_COLS 301
#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif
#ifndef max
#define max(a,b)            (((a) < (b)) ? (b) : (a))
#endif


int rick_calculation()
{
	int target;
	scanf("%d", &target);
	int ans = 0;
	///////////// Enter code here ///////////
	if (target == 0)
		ans = 0;
	else
	{
		int cntOfSteps = 0, sum = 1, currentNumber;
		for (currentNumber = 0; currentNumber < abs(target);)
		{
			currentNumber = currentNumber + sum;
			cntOfSteps++;
			sum++;
		}

		while ((abs(target) - currentNumber) % 2 != 0)
		{
			currentNumber = currentNumber + sum;
			cntOfSteps++;
			sum++;
		}
		ans = cntOfSteps;
	}
	
	/////////////////////////////////////////
	return ans;
}


int find_bb(int img[][MAX_COLS], int rows, int cols)
{
	int maxSum = -0xffff;
	///////////// Enter code here ///////////
	for (int i = 0; i < rows; i++) {
		int current[MAX_ROWS] = { 0 };
		for (int j = i; j < rows; j++) {
			for (int k = 0; k < cols; k++) {
				current[k] += img[j][k];
			}
			//largest subarray sum
			int minVal = 0, maxVal = current[0], preSum = 0;
			for (int num : current) {
				preSum += num;
				maxVal = max(maxVal, preSum - minVal);
				minVal = min(minVal, preSum);
			}
			maxSum = max(maxSum, maxVal);
		}
	}

	/////////////////////////////////////////
	return maxSum;
}


int bounding_box();
void print_menu();

int main()
{
	int choice = 0;
	scanf("%d", &choice);
	if (choice == 1)
		printf("%d\n", bounding_box());
	else if (choice == 2)
		printf("%d\n", rick_calculation());
	else
	{
		print_menu();
	}
	return 0;
}

int bounding_box()
{
	int cost = 0;

	int ROWS, COLS, i, j;
	int img[MAX_ROWS][MAX_COLS] = { 0 };
	scanf("%d", &ROWS);
	scanf("%d", &COLS);
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			scanf("%d", &img[i][j]);
	cost = find_bb(img, ROWS, COLS);

	return cost;
}


void print_menu()
{
	printf("Usage[Linux]:\n\n");
	printf("./DSAA_home_assignment_1 \n\t[Question] \n\t[Inputs]\n");
	printf("\n\n[Questions] - 1-2, where,\n");
	printf("1. Bounding box generator\n");
	printf("2. Rick's Destination\n");
	printf("\n\n[Inputs] - required inputs for question\n");
	printf("Assume correct input!!\n\n");

	printf("Exiting...\n");

}