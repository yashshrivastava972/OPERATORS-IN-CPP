                                                                  PROGRAM 3A:

Aim: Find positive and negative number.

Tool: VS CODE.

Theory: This program is used to check whether a given number is positive, negative, or zero using conditional statements in C++.

Key Concepts Used:

1. Input:
The user is asked to enter an integer.
cin >> number; stores this value in the number variable.

2. Decision Making (if-else if-else):
if (number > 0) → The number is positive.
else if (number < 0) → The number is negative.
else → The number is zero.

3. Output:
The result is displayed using cout.

Conclusion:
This program demonstrates the use of:
1. if-else conditional statements
2. User input and output
3. Basic number classification logic

It is a simple and effective way to understand decision-making in C++ and forms the foundation for writing logic-based programs.

                                                                  PROGRAM 3B:
Aim: Calculate student’s grade.

Tool: VS CODE.

Theory: 

This C++ program calculates the average percentage of marks obtained in 5 subjects and then assigns a grade based on that percentage using conditional statements.

Main Features:

1. Input:
   The user is prompted to enter marks for 5 subjects (m1 to m5).
   All inputs are stored as integers.
   
3. Calculation of Percentage:
   
   avg = (m1 + m2 + m3 + m4 + m5) / 5.0;
   
   The average (percentage) is calculated using float division by 5.0 to ensure decimal precision.

3. Grade Assignment: Based on the value of avg, grades are assigned using a series of if-else if conditions:

   avg >= 90 → Grade O
   
   85–89 → Grade A+
   
   75–84 → Grade A
   
   65–74 → Grade B+
   
   55–64 → Grade B
   
   40–54 → Grade C
   
   < 40 → FAIL

5. Output: Displays the calculated percentage and corresponding grade.

Conclusion: This program is a good example of:

1. Handling multiple user inputs,
2. Performing arithmetic calculations (average),
3. Using if-else conditions for decision-making,
4. Displaying meaningful output based on logic.

It’s useful for building student grading systems, report cards, and academic evaluations in C++.

                                                                  PROGRAM 3C:

Aim: To find coordinates are from which quadrant.

Tool: VS CODE.

Theory: This program determines the location of a point (x, y) in the Cartesian coordinate system and identifies whether the point lies in a quadrant, on an axis, or at the origin.

Key Concepts Used:

1. User Input:
The program asks the user to enter the values of x and y (float values).
These represent the coordinates of a point.

2. Conditional Checking:
The program uses if-else statements to check the signs of x and y and determine the position.

| Condition          | Output                     |
| ------------------ | -------------------------- |
| `x > 0 && y > 0`   | Quadrant 1                 |
| `x < 0 && y > 0`   | Quadrant 2                 |
| `x < 0 && y < 0`   | Quadrant 3                 |
| `x > 0 && y < 0`   | Quadrant 4                 |
| `x == 0 && y != 0` | Lies on **Y-axis**         |
| `x != 0 && y == 0` | Lies on **X-axis**         |
| `x == 0 && y == 0` | Point is at the **origin** |

3. Output: Based on the above checks, the program prints the correct location of the point.

Conclusion: This program is helpful to:

1. Understand the Cartesian plane.
2. Use logical and relational operators.
3. Implement multiple condition checks using if-else.

It is commonly used in geometry-related applications, graph plotting, and robotics pathfinding based on location coordinates.





