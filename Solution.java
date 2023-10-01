
import java.util.List;

public class Solution {

    private static final int[] VALUES_RANGE = {1, 50};

    public int minOperations(List<Integer> inputValues, int targetRange) {

        int countOperations = 0;
        int totalCollectedUniqueValuesInTargetRange = 0;
        boolean[] visitedValuesInTargetRange = new boolean[VALUES_RANGE[1] + 1];

        for (int i = inputValues.size() - 1; i >= 0 && totalCollectedUniqueValuesInTargetRange < targetRange; --i) {
            int currentValue = inputValues.get(i);
            if (currentValue <= targetRange && !visitedValuesInTargetRange[currentValue]) {
                ++totalCollectedUniqueValuesInTargetRange;
                visitedValuesInTargetRange[currentValue] = true;
            }
            ++countOperations;
        }
        return countOperations;
    }
}
