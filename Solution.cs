
using System;
using System.Collections.Generic;

public class Solution
{
    private static readonly int[] VALUES_RANGE = { 1, 50 };
    public int MinOperations(IList<int> inputValues, int targetRange)
    {
        int countOperations = 0;
        int totalCollectedUniqueValuesInTargetRange = 0;
        bool[] visitedValuesInTargetRange = new bool[VALUES_RANGE[1] + 1];

        for (int i = inputValues.Count - 1; i >= 0 && totalCollectedUniqueValuesInTargetRange < targetRange; --i)
        {
            int currentValue = inputValues[i];
            if (currentValue <= targetRange && !visitedValuesInTargetRange[currentValue])
            {
                ++totalCollectedUniqueValuesInTargetRange;
                visitedValuesInTargetRange[currentValue] = true;
            }
            ++countOperations;
        }
        return countOperations;
    }
}
