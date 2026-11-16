# C++ Programming Project

## About the Project

This repository contains five C++ programs developed as part of a college programming project. Each program demonstrates fundamental concepts of object-oriented and procedural programming in C++.

The programs are organised into separate directories for easy access, compilation and execution.

## Project Aims

### Aim 1: Number and String Palindrome

A C++ program to check whether a given number and a string are palindromes.

**Concepts:** Loops, conditional statements, functions and string manipulation.

### Aim 2: Call by Value

A C++ program demonstrating the call-by-value mechanism using a function to swap two numbers.

**Concepts:** Functions, function parameters and local variables.

### Aim 3: Matrix Operations

A menu-driven C++ program to perform matrix addition, subtraction, multiplication and transpose using user-defined functions and switch-case statements.

**Concepts:** Two-dimensional vectors, nested loops, functions and switch-case statements.

### Aim 4: Perimeter of Rectangle and Circle

A C++ program using a class with radius, length and width as attributes to calculate the perimeter of a rectangle and the circumference of a circle.

**Concepts:** Classes, objects, constructors, destructors and member functions.

### Aim 5: Person Class and Salary Slip

A C++ program that creates an array of ten Person objects, identifies the youngest and eldest persons using an inline function, and generates salary slips using a parameterized constructor.

**Concepts:** Classes, arrays of objects, inline functions, constructors and character arrays.

**Note:** The salary components use illustrative percentages for HRA, DA and PF.

## Technologies Used

* **Programming Language:** C++
* **Standard:** C++17
* **Compiler:** GCC (G++)
* **Code Editor:** Visual Studio Code
* **Version Control:** Git
* **Repository Hosting:** GitHub

## Project Structure

```text
CPP_Project/
│
├── Aim_01_Palindrome/
│   └── main.cpp
│
├── Aim_02_Call_By_Value/
│   └── main.cpp
│
├── Aim_03_Matrix_Operations/
│   └── main.cpp
│
├── Aim_04_Class_Constructor/
│   └── main.cpp
│
├── Aim_05_Person_Salary/
│   └── main.cpp
│
├── .gitignore
└── README.md
```

## Compilation and Execution

A C++17-compatible compiler, such as GCC, is required to compile and execute the programs.

Open the project directory in Visual Studio Code and use its integrated terminal.

The following commands demonstrate how to compile and execute each program on Windows using PowerShell.

### Aim 1: Palindrome

```powershell
g++ -std=c++17 .\Aim_01_Palindrome\main.cpp -o .\Aim_01_Palindrome\palindrome.exe

.\Aim_01_Palindrome\palindrome.exe
```

### Aim 2: Call by Value

```powershell
g++ -std=c++17 .\Aim_02_Call_By_Value\main.cpp -o .\Aim_02_Call_By_Value\call_by_value.exe

.\Aim_02_Call_By_Value\call_by_value.exe
```

### Aim 3: Matrix Operations

```powershell
g++ -std=c++17 .\Aim_03_Matrix_Operations\main.cpp -o .\Aim_03_Matrix_Operations\matrix.exe

.\Aim_03_Matrix_Operations\matrix.exe
```

### Aim 4: Class, Constructor and Destructor

```powershell
g++ -std=c++17 .\Aim_04_Class_Constructor\main.cpp -o .\Aim_04_Class_Constructor\shape.exe

.\Aim_04_Class_Constructor\shape.exe
```

### Aim 5: Person Class and Salary Slip

```powershell
g++ -std=c++17 .\Aim_05_Person_Salary\main.cpp -o .\Aim_05_Person_Salary\person.exe

.\Aim_05_Person_Salary\person.exe
```

## Testing

All five programs have been compiled and tested using GCC with the C++17 standard.

Additional compiler warning checks and functional tests were also performed.
