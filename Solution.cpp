
#include <array>
#include <vector>
using namespace std;

class Solution {
    
    static constexpr array<int, 2> VALUES_RANGE {1, 50};

public:
    int minOperations(const vector<int>& inputValues, int targetRange) const {

        int countOperations = 0;
        int totalCollectedUniqueValuesInTargetRange = 0;
        array<int, VALUES_RANGE[1] + 1 > visitedValuesInTargetRange{};

        for (size_t i = inputValues.size() - 1; i >= 0 && totalCollectedUniqueValuesInTargetRange < targetRange; --i) {
            int currentValue = inputValues[i];
            if (currentValue <= targetRange && !visitedValuesInTargetRange[currentValue]) {
                ++totalCollectedUniqueValuesInTargetRange;
                visitedValuesInTargetRange[currentValue] = true;
            }
            ++countOperations;
        }
        return countOperations;
    }
};
