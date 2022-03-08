#include<vector>

using namespace::std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {

		int size = nums.size();

		int currentIndex = 1;

		for (int i = 1; i < size; i++) {

			if (nums[i-1] == nums[i]) continue;

			nums[currentIndex++] = nums[i];

		}

		return currentIndex;
	}
};