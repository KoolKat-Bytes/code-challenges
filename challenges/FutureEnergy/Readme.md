# Energy of the future
You wish to join the Time Brigade, an elite team composed only of meta-humans capable of seeing into the future. By gathering the best meta-humans, the Brigade is of great help in anticipating certain events that are harmful to Humanity and the Planet, foreseeing them and proposing optimal solutions even before they happen.

The Brigade is composed of 4 Orders: Foresight, Innovation, Wisdom and Protection. Today is the big day: after months of preparation, you will take the final exam to join the Order of Wisdom. You will have to prove that you are a meta-human, and one of the best.

The Order of Wisdom has been commissioned by the City to help engineers dismantle the latest coal-fired power plants. Your test will be to predict the progress of work on the various plants, 4 months into the future. Each month, engineers will perform a single operation, depending on the power output still in place at the plant:
 - If the power is a multiple of 3, divide the power by 3
 - Otherwise, if the power is a multiple of 2, divide the power by 2
 - Otherwise, remove 1 from the power

Write a program that calculates how much power will still be installed after 4 months of work.
# Data

## Input
**Line 1:** an integer **P** between 1 and 1000, representing the power of the plant.

## Output
Your program should return the power that will still be in place after 4 months of work.

## Examples
### Example 1
**46**
 - month 1: 46 is divisible by 2. The power after one month will be **46 / 2 = 23**.
 - month 2 : 23 is divisible neither by 3 nor by 2. The power after 2 months will be **23 - 1 = 22**.
 - month 3 : 22 is divisible by 2. After 3 months: **22 / 2 = 11**.
 - month 4 : 11 is divisible neither by 3 nor by 2. The power at the end of 4 months will be **11 - 1 = 10**.

For this input, your program should return **10**.
### Example 2
**108**
 - month 1: **108** -> **108 / 3 = 36**
 - month 2 : **36** -> **36 / 3 = 12**
 - month 3 : **12** -> **12 / 3 = 4**
 - month 4 : **4**  -> **4 / 2 = 2**

Your program should therefore return **2**.

### Challenge Source : *Tech Challenger 10/01/2023 - Qualif 1 - 1*