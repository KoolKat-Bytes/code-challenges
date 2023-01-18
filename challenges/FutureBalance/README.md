# Balance of the future
You wish to join the Time Brigade, an elite team composed only of meta-humans capable of seeing into the future. By gathering the best meta-humans, the Brigade is of great help in anticipating certain events that are harmful to Humanity and the Planet, foreseeing them and proposing optimal solutions even before they happen.

The Brigade is composed of 4 Orders: Foresight, Innovation, Wisdom and Protection. Today is the big day: after months of preparation, you will take the final exam to join the Order of Innovation. You will have to show that you are a meta-human, and one of the best.

You enter the test room where an officer awaits you, along with a gigantic map of the city. One of the missions of the Order of Innovation is to guarantee the energy supply to the vital functions of the city. Your test will be to predict disasters that could damage the network, and to examine the network. Each line feeds 3 different areas of the city, and the load on each line must be roughly balanced between these 3 areas. Write a program that determines whether a given power line is balanced or not.

# Data
## Input
**Line 1:** a string of characters between **3** and **20** in length, representing the load on a given line. One character represents one unit of load. The load is distributed over 3 zones, represented by **A**, **B** and **C**.
## Output
Your program should return on the standard output YES if the line is balanced, NO otherwise. To be balanced, the number of loads on each zone (**A**, **B** and **C**) must differ by 2 units or less between each zone.

# Examples
## Example 1
>ABCABCABB

On this line, there are 3 loads on **A**, 4 loads on **B** and 2 on C. There is therefore a maximum difference of 2 loads on the line (between **B** and **C**). This line is therefore balanced, so we must return **YES**.
## Example 2
>ABBBBC

On this line, there is a load difference of 3. You should therefore return **NO**.

### Challenge Source : *Tech Challenger 01/12/2022 - Qualif 1 - 1*