// C++ implementation to find the Longest
// subarray of the given array with absolute
// difference between elements less than or equal
// to integer K using Heaps
#include <bits/stdc++.h>
using namespace std;

// Function to compute the Longest subarray
int computeLongestSubarray(vector<int> arr, int k)
{
// Stores the maximum length subarray so far
int maxLength = 0;

deque<int> maxHeap;
deque<int> minHeap;

// Marks to the beginning and end
// pointer for current subarray
int beg = 0;
int end = 0;

while (end < arr.size()) {
	// Stores the current element being
	// added to the subarray
	int currEl = arr[end];

	// Remove indices of all elements smaller
	// than or equal to current from maxHeap
	while (!maxHeap.empty()
		&& arr[maxHeap.back()] <= currEl)
	maxHeap.pop_back();

	// Add current element's index to maxHeap
	maxHeap.push_back(end);

	// Remove indices of all elements larger
	// than or equal to current from minHeap
	while (!minHeap.empty()
		&& arr[minHeap.back()] >= currEl)
	minHeap.pop_back();

	// Add current element's index to minHeap
	minHeap.push_back(end);

	// Index of maximum of current subarray
	int maxOfSub = arr[maxHeap.front()];

	// Index of minimum of current subarray
	int minOfSub = arr[minHeap.front()];

	// check if the largest possible difference
	// between a pair of elements <= k
	if (maxOfSub - minOfSub <= k) {
	// Length of current subarray
	int currLength = end - beg + 1;

	// Update maxLength
	if (maxLength < currLength)
		maxLength = currLength;
	}
	else {
	// If current subarray doesn't satisfy
	// the condition then remove the starting
	// element from subarray that satisfy
	// increment the beginning pointer
	beg += 1;

	// Remove elements from heaps that
	// are not in the subarray anymore
	while (!minHeap.empty()
			&& minHeap.front() < beg)
		minHeap.pop_front();

	while (!maxHeap.empty()
			&& maxHeap.front() < beg)
		maxHeap.pop_front();
	}
	end += 1;
}

// Return the final answer
return maxLength;
}

// Driver code
int main()
{
vector<int> arr = { 1, 2, 3, 6, 7 };

int k = 2;

int maxLength = computeLongestSubarray(arr, k);
cout << maxLength;

return 0;
}

// This code is contributed by adityamaharshi21
