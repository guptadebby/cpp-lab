# C++ Programming Assignments and Projects

## About the Repository

This repository contains eleven C++ programming assignments and an integrated Smart Farm Management System developed as part of college coursework.

The programs demonstrate fundamental programming concepts, object-oriented programming (OOP), inheritance, polymorphism, operator overloading, function overloading and file handling.

Each assignment is organised into a separate directory containing its respective source code for easy access, compilation and execution.

---

## Individual Programming Assignments

### Aim 1: Number and String Palindrome

A C++ program to check whether a given number and a string are palindromes.

**Concepts:** Loops, conditional statements, functions and string manipulation.

### Aim 2: Call by Value

A C++ program demonstrating the call-by-value mechanism by swapping two numbers using a function.

**Concepts:** Functions, call by value, function parameters and local variables.

### Aim 3: Matrix Operations

A menu-driven C++ program to perform matrix addition, subtraction, multiplication and transpose using user-defined functions.

**Concepts:** Two-dimensional vectors, nested loops, functions and switch-case statements.

### Aim 4: Perimeter of Rectangle and Circle

A C++ program using a class to calculate the perimeter of a rectangle and the circumference of a circle.

**Concepts:** Classes, objects, constructors, destructors and member functions.

### Aim 5: Person Class and Salary Slip

A C++ program that creates an array of ten Person objects, identifies the youngest and eldest persons using an inline function, and generates salary slips using a parameterized constructor.

**Concepts:** Classes, arrays of objects, inline functions, constructors and character arrays.

**Note:** The salary components use illustrative percentages for HRA, DA and PF.

### Aim 6: Complex Number Operations Using Operator Overloading

A C++ program that performs increment, decrement, addition and subtraction operations on complex numbers using operator overloading.

**Concepts:** Unary operator overloading, binary operator overloading, prefix and postfix operators, constructors and member functions.

### Aim 7: Area Calculation Using Function Overloading

A C++ program to calculate the areas of a circle, rectangle and triangle using overloaded functions named `AREA()`.

**Concepts:** Function overloading, function parameters, return values and mathematical operations.

### Aim 8: Student Examination Result Using Multilevel Inheritance

A C++ program that models student examination records using three classes: Student, Exam and Result. It accepts marks in six subjects and calculates the total marks and percentage.

**Concepts:** Multilevel inheritance, classes, objects, arrays, encapsulation and input validation.

### Aim 9: Swapping Two Numbers Using a Friend Function

A C++ program that swaps two numbers stored in separate classes using a friend function.

**Concepts:** Friend functions, classes, objects, private data members and temporary variables.

### Aim 10: Bookshop Management Using Virtual Functions

A C++ program that models a bookshop selling books and videotapes using a base class named Media and two derived classes named Book and Tape.

**Concepts:** Inheritance, virtual functions, function overriding, runtime polymorphism, base-class pointers and virtual destructors.

### Aim 11: Total Marks Calculation Using Virtual Base Class

A C++ program that calculates a student's total marks using virtual base classes and multiple inheritance.

**Concepts:** Virtual base classes, multiple inheritance, classes, objects, arrays and member functions.

---

## Integrated C++ Project

### Smart Farm Management System

A menu-driven C++ application designed to manage information about cereal and vegetable crops.

The system records crop names, cultivation areas, seasons and yield per acre. It calculates total crop yield, compares crops, provides basic farming advice and stores crop records in a text file.

**Major Features:**

1. Add cereal crop details.
2. Add vegetable crop details.
3. Display crop information and total yield.
4. Provide basic farming advice.
5. Compare the total yield of two crops.
6. Save crop records to a text file.
7. Read previously saved crop records.
8. Display the total number of crop objects.

The application supports a maximum of ten crop records at a time.

**Concepts:** Classes, inheritance, constructor overloading, abstraction, runtime polymorphism, virtual functions, virtual destructors, operator overloading, static members, file handling and exception handling.

---

## Technologies Used

| Component | Technology |
|---|---|
| Programming Language | C++ |
| Compiler | GCC (G++) |
| Code Editor | Visual Studio Code |
| Version Control | Git |
| Repository Hosting | GitHub |

**Language Standards:** C++17 is used for the individual programming assignments. The Smart Farm Management System is compatible with C++11.

---

## Project Structure

```text
cpp-lab/
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
├── Aim_06_Complex_Operator_Overloading/
│   └── main.cpp
│
├── Aim_07_Function_Overloading/
│   └── main.cpp
│
├── Aim_08_Multilevel_Inheritance/
│   └── main.cpp
│
├── Aim_09_Friend_Function/
│   └── main.cpp
│
├── Aim_10_Media_Virtual_Functions/
│   └── main.cpp
│
├── Aim_11_Virtual_Base_Class/
│   └── main.cpp
│
├── Smart_Farm_Management_System/
│   └── main.cpp
│
├── .gitignore
└── README.md
```

---

## Compilation and Execution

A C++ compiler such as GCC (G++) is required to compile and execute the programs.

The following commands can be executed in the VS Code integrated terminal using Windows PowerShell.

### Compilation and Execution of Individual Aims

Compile each program separately from the main repository directory.

**Aim 1 – Palindrome**
```powershell
g++ -std=c++17 .\Aim_01_Palindrome\main.cpp -o .\Aim_01_Palindrome\program.exe
.\Aim_01_Palindrome\program.exe
```

**Aim 2 – Call by Value**
```powershell
g++ -std=c++17 .\Aim_02_Call_By_Value\main.cpp -o .\Aim_02_Call_By_Value\program.exe
.\Aim_02_Call_By_Value\program.exe
```

**Aim 3 – Matrix Operations**
```powershell
g++ -std=c++17 .\Aim_03_Matrix_Operations\main.cpp -o .\Aim_03_Matrix_Operations\program.exe
.\Aim_03_Matrix_Operations\program.exe
```

**Aim 4 – Class, Constructor and Destructor**
```powershell
g++ -std=c++17 .\Aim_04_Class_Constructor\main.cpp -o .\Aim_04_Class_Constructor\program.exe
.\Aim_04_Class_Constructor\program.exe
```

**Aim 5 – Person Class and Salary Slip**
```powershell
g++ -std=c++17 .\Aim_05_Person_Salary\main.cpp -o .\Aim_05_Person_Salary\program.exe
.\Aim_05_Person_Salary\program.exe
```

**Aim 6 – Complex Number Operator Overloading**
```powershell
g++ -std=c++17 .\Aim_06_Complex_Operator_Overloading\main.cpp -o .\Aim_06_Complex_Operator_Overloading\program.exe
.\Aim_06_Complex_Operator_Overloading\program.exe
```

**Aim 7 – Function Overloading**
```powershell
g++ -std=c++17 .\Aim_07_Function_Overloading\main.cpp -o .\Aim_07_Function_Overloading\program.exe
.\Aim_07_Function_Overloading\program.exe
```

**Aim 8 – Multilevel Inheritance**
```powershell
g++ -std=c++17 .\Aim_08_Multilevel_Inheritance\main.cpp -o .\Aim_08_Multilevel_Inheritance\program.exe
.\Aim_08_Multilevel_Inheritance\program.exe
```

**Aim 9 – Friend Function**
```powershell
g++ -std=c++17 .\Aim_09_Friend_Function\main.cpp -o .\Aim_09_Friend_Function\program.exe
.\Aim_09_Friend_Function\program.exe
```

**Aim 10 – Virtual Functions**
```powershell
g++ -std=c++17 .\Aim_10_Media_Virtual_Functions\main.cpp -o .\Aim_10_Media_Virtual_Functions\program.exe
.\Aim_10_Media_Virtual_Functions\program.exe
```

**Aim 11 – Virtual Base Class**
```powershell
g++ -std=c++17 .\Aim_11_Virtual_Base_Class\main.cpp -o .\Aim_11_Virtual_Base_Class\program.exe
.\Aim_11_Virtual_Base_Class\program.exe
```

### Compilation and Execution of Smart Farm Management System

The Smart Farm Management System uses the C++11 standard.

```powershell
g++ -std=c++11 .\Smart_Farm_Management_System\main.cpp -o .\Smart_Farm_Management_System\smart_farm.exe
.\Smart_Farm_Management_System\smart_farm.exe
```

---

## File Management

The `.gitignore` file excludes unnecessary generated files from version control, including:

- Compiled executable files (`.exe`).
- Object files (`.o`, `.obj`).
- Debug files (`.pdb`).
- VS Code workspace settings (`.vscode/`).
- Generated Smart Farm data (`crop_data.txt`).

The source code and project documentation are maintained in the public repository.

---

## Repository

**GitHub:** https://github.com/guptadebby/cpp-lab

The repository is publicly accessible and contains the individual programming assignments and the integrated Smart Farm Management System.