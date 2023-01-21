# Reverse alien notation
Your ultimate challenge to join the Time Brigade is given to you in a hurry by the most senior officer of the Brigade: the linguists have just deciphered the functioning of an extraterrestrial language, and they urgently need an automatic translation software to facilitate the exchanges!

This alien species has a very special memory: information is stored in their brain sequentially in the form of a queue. They can store a lot of information in their memory, but only the oldest memory is easily accessible. When the oldest memory is processed, it is destroyed, leaving room for a slightly newer memory.

The Brigade's analysts have understood that the language of the aliens uses this memory: each sentence is a sequence of words (in the form of numbers and symbols) separated by spaces. Each number corresponds to a piece of information to be memorized by the speaker, and each symbol is a mathematical operation that processes the memorized information to create new ones. A sentence is processed from left to right, leaving only one number in the speaker's memory: the final meaning of the sentence.

Your team has not yet decoded all the subtleties of the language, but you should be able to decode simple sentences with the following operations:
 - If the word is a number, add it to the queue.
 - If the word is a + symbol, extract a and b, the two oldest numbers in memory, and add their sum a+b to memory.
 - If the word is a * symbol, extract a and b the two oldest numbers from memory, then add their product a*b to memory.
 - If the word is a <> symbol, extract a and b the two oldest numbers from memory, then add them to memory by exchanging their order of seniority: a,b thus becomes b,a.
 - If the word is a - symbol, extract a the oldest number in memory, then add its opposite -a to memory.

# Data
## Input
**Line 1:** A sentence in alien notation that you must translate.

## Output
**Line 1:** The number that remains in memory after interpreting the sentence.

## Constraints
 - A sentence can be up to 100 000 words long.
 - The numbers stored in memory will always fit in a 32 bits signed integer.

# Example
For the entry :
>6 4 3 * 5 - <> * +

The solution is:
> 9

Here is the flow of the interpretation of the example sentence. We represent the memory as an array with the most recent information on the left.
The memory is initially empty.
 - We process the word 6. The memory is now [6].
 - We process the word 4. The memory is now [4, 6].
 - Process the word 3. The memory is now [3, 4, 6].
 - Process the word *. We extract the two oldest memories (6 and 4), then we add their product to the memory which becomes [24, 3].
 - We process the word 5. The memory is now [5, 24, 3].
 - We process the word -. We extract the oldest memory (3), then we add its opposite to the memory which becomes [-3, 5, 24].
 - We process the word <>. We extract the two oldest memories (24 and 5), then we put them back at the beginning of the memory by exchanging their order, that is [24, 5, -3].
 - We process the word *. We extract the two oldest memories (-3 and 5), then we add their product to the memory which becomes [-15, 24].
 - We process the word +. We extract the two oldest memories (24 and -15), then we add their sum to the memory which becomes [9].

All the words in the sentence have been processed, and there is only one number left in memory: it is the number 9 that your code should return.

### Challenge Source : *Tech Challenger 19/01/2023 - Qualif 1 - 3*