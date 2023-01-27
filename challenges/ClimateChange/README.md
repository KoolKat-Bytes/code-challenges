# Climate change
After brilliantly managing the load on the power grid, the Brigade sends you on one of the most important missions for the Order of Innovation: climate change.

To highlight the deviations from the norm, you need to perform a simple process based on the successive medians of a series of temperatures. Starting from the beginning of the list, give the median temperature of the first month, the first 3 months, the first 5 months, etc.

As a reminder, the median of a sequence is the value such that there are as many values lower than it as higher than it. Since we are only computing medians on sub-lists of odd size, the median will always be an element of the sub-list.

# Data
## Input
**Line 1 :** an integer **N**, the number of temperature measurements available.
**Line 2:** **N** integers separated by spaces, the temperature measurement for each month.

# Output
The successive medians of the first measurement, then the first 3 measurements, then the first 5, and so on until the last measurement. Print all numbers on a single line, separated by spaces.
# Constraints
 - There are between 1 and 999 temperature measurements available.
 - Each temperature is between -273 and 10,000.
# Example
For the input:
> 7 \
2 -12 -4 9 11 13 17

The medians are :
> 2 -4 2 9

Explanation
 - The median of a single measurement, 2 here, is equal to this measure. The first result will therefore be 2.
 - The median over the first three months [2, -12, -4] is -4.
 - The median of [2, -12, -4, 9, 11] is 2 again.
 - The median of [2, -12, -4, 9, 11, 13, 17] is 9.

### Challenge Source : *Tech Challenger 01/12/2022 - Qualif 1 - 2*