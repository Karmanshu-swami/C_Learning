# C Programming Learning Repository

## Date: 02-jan-2024

Today, I delved into the fundamentals of C programming and covered the following key points:

### 1. Variables and their Types in C

In C programming, variables are used to store data. They have various types such as int, float, char, etc., each serving a specific purpose in storing different kinds of data.

```c
int age = 25;
float temperature = 98.6;
char grade = 'A';
```

### 2. Rules for Declaring Variable Names

I explored the rules and conventions for naming variables in C. Understanding these rules is crucial for writing clean and maintainable code.
Choosing meaningful and descriptive variable names is crucial for readable code. Remember:

1. Variable names cannot start with a number.
2. No spaces or special characters except underscore (\_) are allowed.
3. Keywords like `int`, `float`, and `char` cannot be used as variable names.

### 3. Data Types in C

I gained insights into the different data types available in C, such as int, float, char, double, etc. Knowing the appropriate data type for a variable is essential for efficient memory usage and accurate computations.

```
int score = 100;
float pi = 3.14;
char grade = 'B';
```

### 4. Constants and their Types in C

Constants are values that do not change during the program's execution. I learned about various types of constants in C, including integer constants, character constants, and floating-point constants.

```
# define PI 3.14
const int MAX_SCORE = 100;
```

### 5. Keywords in C

C programming has reserved words known as keywords that have special meanings and cannot be used as variable names. I familiarized myself with these keywords to avoid naming conflicts.
Eg.
`int`
`float`
`char`
`if`
`else`

### 6. Program Structure in C

I explored the basic structure of a C program, including the main() function and its importance. Understanding the program structure is fundamental to writing executable and organized code.

```
#include <stdio.h>

int main() {
    // Your code goes here
    return 0;
}
```

### 7. Input and Output Functions in C (printf and scanf)

I delved into the fundamental input and output functions in C—printf() and scanf(). These functions are essential for displaying output and taking user input, respectively.

```
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old!\n", age);

    return 0;
}
```

### 8. Programs Developed

I applied my knowledge by creating two programs:

#### Program 1: Calculate Area of a Square

I implemented a program that calculates the area of a square using user-inputted side length.

## FILE - calculateSqArea.c

#### Program 2: Calculate Area of a Circle

I developed a program to calculate the area of a circle based on the user-inputted radius.

## FILE - calculateCircleArea.c

These exercises helped solidify my understanding of the concepts covered today. Looking forward to building on these fundamentals in the days to come!
