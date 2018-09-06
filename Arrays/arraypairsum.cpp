//Array pair sum. Given an unsorted array. output all pairs that sum = k. O(n) complexity
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void unsortedArraySum(vector<int> input, int k) {
	set<int> temp;

	for(int i=0;i<input.size();i++) {
		int target=k-input[i];
		auto it = temp.find(target) ;
		if(it != temp.end()) {
			cout << "first= " << input[i] << "second = " << *it << endl;
		}
		temp.insert(input[i]);
	}
}

int main() {
	int arr[]={3,1,2,4,6,5};
	vector<int> input(arr,arr+6);
	unsortedArraySum(input,6);
}
