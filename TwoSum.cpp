#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <cctype>

using namespace std;

//spend too much time
//O(n^2)
//use map, exchange room with time
/*
class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		auto size = numbers.size();
		vector<int>result;
        int index1, index2;
        for (index1 = 0; index1 != size - 1; index1++)
            for (index2 = index1 + 1; index2 != size; index2++)
				if (numbers[index1] + numbers[index2] == target) {
					result.push_back(index1);
					result.push_back(index2);
					return result;
				}
    }

};
*/

class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		map<int, int> m;
		for (decltype(numbers.size()) i = 0; i < numbers.size(); ++i) {
			if (m.find(target - numbers[i]) == m.end())
				m[numbers[i]] = i;
			else
				return vector<int> {m[target - numbers[i]], i};
		}
	}
};


vector<int> twoSum(vector<int> &numbers, int target) {
	map<int, int> m;
	for (decltype(numbers.size()) i = 0; i < numbers.size(); ++i) {
		if (m.find(target - numbers[i]) == m.end())
			m[numbers[i]] = i;
		else
			return vector<int> {m[target - numbers[i]], i};
	}
}

int main()
{
	vector<int> numbers{3, 2, 4};
	vector<int> result = twoSum(numbers, 6);
	cout << result[0] << "\t" << result[1] << endl;

	return 0;
}
