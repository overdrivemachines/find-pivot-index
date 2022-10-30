#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums);

int main(int argc, char const* argv[]) {
  vector<int> nums = {-1, -1, 1, 1, 0, 0};

  cout << pivotIndex(nums) << endl;

  return 0;
}

int pivotIndex(vector<int>& nums) {
  // int leftIndex, rightIndex;
  int leftSum = 0, rightSum = 0, totalSum = 0;

  // initialize totalSum to the sum of all elements in array
  for (int num : nums) {
    totalSum += num;
  }

  // Edge case
  if (totalSum - nums.front() == 0)
    return 0;

  rightSum = totalSum - nums[0];

  // iterating thourgh vector checking the left and right sums
  for (int i = 1; i < nums.size(); i++) {
    rightSum = rightSum - nums[i];
    leftSum = leftSum + nums[i - 1];

    if (leftSum == rightSum)
      return i;
  }
  return -1;
}
