#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums);

int main(int argc, char const* argv[]) {
  return 0;
}

int pivotIndex(vector<int>& nums) {
  // int leftIndex, rightIndex;
  int leftSum = 0, rightSum = 0, totalSum = 0;

  // initialize rightSum to the sum of all elements in array
  for (int num : nums) {
    totalSum += num;
  }

  if (totalSum - nums.front() == 0)
    return 0;
  if (totalSum - nums.back() == 0)
    return (nums.size() - 1);

  rightSum = totalSum - nums[0];

  for (int i = 1; i < nums.size(); i++) {
    rightSum = rightSum - nums[i];
    leftSum = leftSum + nums[i - 1];

    if (leftSum == rightSum)
      return i;
  }
  return -1;
}