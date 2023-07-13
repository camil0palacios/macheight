# Solution
O(n) solution
We need to check if a pair i and j that satisfies the condition `nums[i] + nums[j] = target`, we can traverse the array and check for every i and try to find a j that satisfies the condition `target - nums[i] = nums[j]`, we can save every `nums[j]` in a hashmap to find it fast ~ O(1), query for the value `target - nums[i]` and if this number exists in the hashmap we can sure that the pair `nums[i]` and `nums[j]` exists

# Run the program
Please make sure to have installed a C++ compiler like GCC
Compile with command `g++ pairs.cpp -o solution`
I've leave a file of inputs with the format
``` 
T
n target
nums1 nums2 nums3 ....
```
Meaning that T is the number o test cases, n is the size of the nums list and target is the sum value
Run the test using `./solution < in` to pass the input file to the program
