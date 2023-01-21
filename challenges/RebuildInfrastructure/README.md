# Rebuilding the infrastructure
After brilliantly handling the previous mission, the Brigade sends you on one of the most important missions for the Order of Innovation: infrastructure reconstruction.

To start this new mission, you are looking to build triangular supports, with a right angle. Your building materials are pieces whose length in centimeters is always an integer. You are given two pieces, can you complete with a third piece to make a right-angled triangle?


# Data
## Input
Line 1: Two integers, A and B, the lengths of the first two pieces. 1≤ A, B ≤ 8000000

## Output
Line 1: An integer C such that the triangle with sides A, B and C is a right triangle. It is necessary that C>0, but C is not always the largest side of the triangle. If there is no such C we return -1.


# Examples
For the input :
> 5 3

The answer is:
>4

Explanation

The triangle with sides 3, 4, 5 is a right triangle.

For the entry:
>4 4

The answer is:
>-1

Explanation
There is no right triangle whose sides are 4, 4, C with C a strictly positive integer.

### Challenge Source : *Tech Challenger 19/01/2023 - Qualif 1 - 2*