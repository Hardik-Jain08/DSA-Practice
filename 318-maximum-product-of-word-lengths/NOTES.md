learnings
* bitset is a data structure which is used to store an array of bool just in one byte the only difference in bitset and array of bool and vector is that it requires the size at the compile time which means it isn't dynamic but it is great  considering that it takes just one byte
​
now for the solution of this question
we make a vector of these bitsets and make the occured character bit one and then compare the previous words with the current word if the words doesn't contain the same letters (no same bits are one) then we compare the product of sizes of words to the maximum ans and then return the answer
​
instead of bitset we can use bitmasking which will further reduce the space to constant O(26).