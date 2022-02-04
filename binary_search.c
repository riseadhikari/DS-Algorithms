#include <stdio.h>

// Note: Index starts from 0. 

void binary_search(int arr[], int to_find, int low, int high)
{
	low = 0;
	int mid_point = (low+high)/2;

	while(1){
		if(high < low){
			printf("Not Found\n");
			break;
		}
		if (arr[mid_point] == to_find){
			printf("Found at Index %d\n",mid_point);
			break;
		}
		else if (to_find < arr[mid_point]){
			high = mid_point -1;
			mid_point = (low+high) / 2;

		}
		else {
			low = mid_point + 1;
			mid_point = (low+high)/2;
		}

	}

}

int main(){

	int arr[] = {1,2,4,6,7,8};

	//Basic Tests below. 
	
	binary_search(arr,6,0,5); // will print "Found at index 3"
	binary_search(arr,21,0,5); // will print "Not Found"
	return 0;
}