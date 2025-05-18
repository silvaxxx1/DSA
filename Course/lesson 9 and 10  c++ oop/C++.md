## Fundamentals of C++ and Basic Programming Concepts

---

## 📌 Introduction to C++

C++ extends the capabilities of the C language by introducing:

* **Object-Oriented Programming (OOP)**: Enables design using classes, objects, inheritance, polymorphism, and operator overloading.
* **Generic Programming**: Uses function and class templates to write flexible and reusable code.

> C++ was developed by **Bjarne Stroustrup** at Bell Labs and was initially called “C with Classes.” The name "C++" references the increment operator `++`, symbolizing an enhanced version of C.

---

## 🚀 Transitioning from C to C++

### Key Enhancements Over C:

* Better compile-time safety.
* Richer syntax and semantics.
* Support for user-defined types and abstractions.
* Integration of the **C++ Standard Library** for reusable components.

---

## 🔢 A Simple C++ Program: Adding Two Integers

### File Extensions:

* **C**: `.c`
* **C++**: `.cpp`, `.cxx`, `.C`

> Conventionally, `.cpp` is used.

### Example Highlights:

```cpp
#include <iostream>
using namespace std;

int main() {
    int number1, number2, sum;
    cout << "Enter first integer: ";
    cin >> number1;

    cout << "Enter second integer: ";
    cin >> number2;

    sum = number1 + number2;

    cout << "Sum is " << sum << endl;
    return 0;
}
```

### Key Differences from C:

* `//` is used for **single-line comments** (in addition to `/* */`).
* Use of `cin` and `cout` for input/output with the `>>` and `<<` operators.
* Use of `std::` namespace (can be skipped with `using namespace std;`).
* Omitting `return 0;` at the end of `main()` is allowed in C++11 and later.

---

## 📚 Function Declarations and Type Safety

### Example:

```cpp
void myFunction();           // Dangerous: no argument checking
void myFunction(void);       // Safer: no arguments, checking enabled
void myFunction(int a, float b); // Preferred: explicit arguments
```

### Benefits:

* Compile-time checking ensures correct number/type of arguments.
* Reduces risk of runtime errors and undefined behavior.
* Improves maintainability and code clarity.

---

## 🧰 C++ Standard Library

* Provides pre-built **classes**, **functions**, and **utilities**.
* Learning C++ involves both:

  1. The core **language syntax**
  2. The **Standard Library** usage
* Custom classes offer insight into inner workings but increase development overhead.

---

## 🧩 Header Files

### Standard Headers:

* Organized into modules like `<iostream>`, `<cmath>`, etc.
* Older headers used `.h` suffix (`stdio.h`) — replaced with standard `<cstdio>`, etc.

### Custom Headers:

* Programmer-defined headers should end in `.h`:

```cpp
#include "square.h"
```

---

## ⚡ Inline Functions

### Purpose:

* Reduces function call overhead by expanding code **in place**.
* Ideal for **small, frequently used functions**.

### Syntax:

```cpp
inline int square(int x) {
    return x * x;
}
```

### Example Usage:

```cpp
int num = 5;
cout << "Square of " << num << " is: " << square(num) << endl;
```

> Inline functions are typically defined **before use** or included in **header files**.

---

## 🔐 Principle of Least Privilege (PoLP)

In secure C++ programming:

* Grant functions or modules **only** the access they need.
* Reduces security risks and limits the impact of potential bugs.

---

## 📘 Summary

| Concept              | Description                                                                      |
| -------------------- | -------------------------------------------------------------------------------- |
| Object-Oriented C++  | Classes, objects, encapsulation, inheritance, polymorphism, operator overloading |
| Input/Output         | `std::cin`, `std::cout`, `<<`, `>>`, `std::endl`                                 |
| Inline Functions     | Reduces function call overhead for small utilities                               |
| Header Files         | Organize reusable code and declarations                                          |
| C++ Standard Library | Predefined classes and functions for rapid development                           |
| Type-Safe Functions  | Use explicit parameters to avoid runtime issues                                  |



