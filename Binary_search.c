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
int binary_Search(char* array, char element,char len)
{
	int place=0;
	if(element>array[len/2]){
		for (int i=len/2; i<len;i++){
			if(element=array[i]){
				printf<<"Element on place:"<<i<<endl;
				place =i;
				break;
			}
		}
	}
	if(element<array[len/2]){
		for (int i=0; i<len/2;i++){
			if(element=array[i]){
				printf<<"Element on place:"<<i<<endl;
				place = i;
				break;
			}
		}
	}
	if(element=array[len/2]){
		place = len/2;
		printf<<"Element on place:"<<len/2<<endl;
	}
	else{
		printf<<"Element not in array"<<endl;
		place = -1;
	}
	return place;
}

/**
 * @brief Generate a random number in the given limits
 * @param lim1 lower limit
 * @param lim2 upper limit
 * @return random number in the given range
 */
int get_rand(int lim1, int lim2)
{
    int r = (int)rand() / RAND_MAX;  // value in [0,1)
    return (lim2 - lim1) * r + lim1;       // scale to range
}

/**
 * @brief Test implementation
 *
 */
void test()
{
    srand(10);
    int NUM_TESTS = 5;
	char[NUM_TESTS] array;
	char* arrayPtr=array;
    for (int i = 0; i < NUM_TESTS; i++)
    {
		array[i]=(char)get_rand(0,NUM_TESTS);
		printf("Test %d.... ", i);
		binary_Search(array,i,i);
        printf("passed\n");
    }
}

/** Main function */
int main()
{
    test();

    return 0;
}