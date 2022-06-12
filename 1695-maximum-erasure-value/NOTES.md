we are using sliding window here and taking help of a hashmap (arr of bool of nums range to reduce space) to restrict window size and two pointers (to iterate window)
* make a hashmap, pointers, sum and a maxSum or ans
* iterate till right pointer J reaches numsSize n
* while there is a duplicate element i.e map[nums[j]] is true remove elements from left i till duplicate is removed
* add the current element to the sum and mark it in map
* find max of ans and sum
* return sum