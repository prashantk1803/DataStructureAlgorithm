/*In given array of elements like [a1,a2,a3,..an,b1,b2,b3,..bn,c1,c2,c3,...cn] 
Write a program to merge them like [a1,b1,c1,a2,b2,c2,...an,bn,cn]. We have to do it in O(1) extra space.
*/

//TC = O(N)
#include <iostream>


using namespace std;

// formula to get index = (current%3) *size + current/3
int getIndex(int current,int size) {
	return (current % 3) *size + (current/3);
}

void convertArray(int *arr,int len) {
	for(int i=0;i<len;i++)
	{
		int j=getIndex(i,len/3);
		//if already swapped then swapping again will place the value at same place as input. to avoid that we are running while loop.
		while(j<i) {
			j=getIndex(j,len/3);
		}
		swap(arr[i],arr[j]);
	}
}

int main() {
	int input[] = {1,4,7,2,5,8,3,6,9};
	convertArray(input,9);
	for(int i =0;i< sizeof(input)/sizeof(input[0]);i++)
		cout << input[i] << " ";
	cout << endl;
}
