#include <vector>
using std::vector;

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
