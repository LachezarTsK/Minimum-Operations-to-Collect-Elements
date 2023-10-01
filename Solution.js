
/**
 * @param {number[]} inputValues
 * @param {number} targetRange
 * @return {number}
 */
var minOperations = function (inputValues, targetRange) {

    const VALUES_RANGE = [1, 50];
    const visitedValuesInTargetRange = new Array(VALUES_RANGE[1] + 1).fill(false);

    let countOperations = 0;
    let totalCollectedUniqueValuesInTargetRange = 0;

    for (let i = inputValues.length - 1; i >= 0 && totalCollectedUniqueValuesInTargetRange < targetRange; --i) {
        let currentValue = inputValues[i];
        if (currentValue <= targetRange && !visitedValuesInTargetRange[currentValue]) {
            ++totalCollectedUniqueValuesInTargetRange;
            visitedValuesInTargetRange[currentValue] = true;
        }
        ++countOperations;
    }
    return countOperations;
};
