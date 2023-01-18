# Solar Storm Prediction
You are quickly given your first assignment in the Brigade, protecting the city's systems from violent particle storms related to solar flares.

Thanks to the telescope in your backyard, you have been able to observe the sun for many days and have deduced a very interesting pattern: sunspots appear and disappear in an erratic way, but when a flare approaches you notice that some spots always appear in the same order!

In order to better predict the solar storms that threaten your infrastructure, you want to write an algorithm that takes as input two successive observations, and finds the sunspots that are common to both. If these spots appear in the same order, you risk an imminent flare!
# Data
## Input
**Line 1:** a string S1 of letters representing the first solar activity pattern.

**Line 2:** a string S1 of letters representing the second solar activity pattern.
## Output
If the common letters between **S1** and **S2** appear in the same order between the two patterns, display two lines:
 - On the first line, the string **TEMPETE**
 - On the next line, the common characters between **S1** and **S2**, in their order of appearance in both strings
If there are no common letters or they are not in the same order, print **NORMAL** on one line.

## Constraints
 - Characters are unique within each string.
 - Characters are upper or lower case letters.

# Examples
## Example 1
For the entry:
>SmXwpKz\
meXZKi

Three letters appear in common: **m**, **X** and **K**. Since they appear in the order **mXK** in S1 and S2, a storm is imminent and you need to print :
>TEMPETE\
mXK

Note that sunspots z and Z are considered different.

## Example 2
For the input :
>LMepmWsAO\
kMrTpOmzIf

Here, the common elements are **M**, **p**, **m** and **O**. However, they appear in S1 in the order **MpmO** and in S2 in another order **MpOm**. Thus, there is no abnormal activity and you should display :
> NORMAL

### Challenge Source : *Tech Challenger 10/01/2023 - Qualif 1 - 2*