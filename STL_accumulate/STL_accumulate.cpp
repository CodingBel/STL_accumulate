/*
* In this Kata, you will be given an array of integers whose elements have both a negative and a positive value,
except for one integer that is either only negative or only positive. Your task will be to find that integer.

Examples:
[1, -1, 2, -2, 3] => 3 has no matching negative appearance

[-3, 1, 2, 3, -1, -4, -2] => -4 has no matching positive appearance

[1, -1, 2, -2, 3, 3] => 3 (the only-positive or only-negative integer may appear more than once)
*/

/*
// The following used to be my Junior way of solving the problem

#include<iostream>
#include<vector>
#include <set>

int solve(std::vector<int> v) {
	std::set<int>myUniques;
	int sum = 0;

	for (const auto& i : v) {
		myUniques.insert(i);
	}

	for (const auto& i : myUniques)
		sum += i;

	return sum;
}

int main() {
	std::vector<int>myVectors {1, 2, -2, 3, 3, 1, -2, 1, -1, -1, 3};
	std::cout << solve(myVectors);
	return 0;
}
*/

// observe how its done using std::accumulate 
// https://en.cppreference.com/w/cpp/algorithm/accumulate
// 0 @ line 52 is the seed value. Could be any num but some num is mandatory  

#include<iostream>
#include<vector>
#include<set>
#include<numeric>

int solve(std::vector<int> v) {
	std::set<int>myUniques(v.begin(), v.end()); 
	return std::accumulate(myUniques.begin(), myUniques.end(), 0); 
}

int main() {
	std::vector<int>myVectors {1, 2, -2, 3, 3, 1, -2, 1, -1, -1, 3};
	std::cout << solve(myVectors); 
	return 0; 
}






