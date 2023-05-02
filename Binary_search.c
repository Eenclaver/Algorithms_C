/**
 * @file
 * @brief Function to find a place of value in a array.
 */

#include <stdio.h>
#include <stdlib.h>


 /**
  * @brief Function to find a place of value in a array
  * @param [in] array array with sorted nums
  * @param [in] element element that we searching in mass
  * @param [out] place place of the element in array
  */
int binary_Search(char array[], char element, char len)
{
	int place = 0;
	if (element > array[5/2]) {
		for (int i = len / 2; i < len; i++) {
			if (element == array[i]) {
				printf("\n");
				printf( "Element on place:");
				printf("\n");
				printf("%d",i+1);
				printf("\n");
				place = i;
				break;
			}
		}
	}
	if ((int)element < (int)array[len/2]) {
		for (int i = 0; i < len / 2; i++) {
			if (element == array[i]) {
				printf("\n");
				printf("Element on place:");
				printf("\n");
				printf("%d", (i + 1));
				printf("\n");
				place = i;
				break;
			}
		}
	}
	if ((int)element == (int)array[len / 2]) {
		place = len / 2;
		printf("\n");
		printf( "Element on place:");
		printf("\n");
		printf("%d",(len / 2) + 1);
		printf("\n");
	}
	else {
		printf("\n");
		printf("Element not in array\n");
		place = -1;
	}
	return place;
}


/**
 * @brief Test implementation
 *
 */
void test()
{
	int NUM_TESTS = 5;
	char arr[5] = {0};
	//char* arrPtr = arr;
	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1);

	}
	printf("Test 1");
	binary_Search(arr, 3 , 5);
	printf("Test 2");
	binary_Search(arr,  'v', 5);
	printf("Test 3");
	binary_Search(arr,  -2, 5);
	printf("Test 4");
	binary_Search(arr, 15, 5);
	printf("Test 4");
	binary_Search(arr, '0', '5');
	printf("\npassed\n");
}

/** Main function */
int main()
{
	test();

	return 0;
}