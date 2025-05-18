# ✅ C Preprocessor Directives – Practical Lesson with Explanation

## 📘 14.1 Introduction

The **C Preprocessor** is a tool that runs before the actual compilation of code. It processes *directives* that begin with `#`, such as `#include` and `#define`. These are not normal C statements and don't end with semicolons.

🧠 Think of it as a way to prepare your code before compiling:

* Include other files
* Create symbolic constants
* Define macros (like functions or expressions)
* Conditionally compile code

---

## 🔗 14.2 `#include` Directive

This directive tells the compiler to include the content of another file.

```c
#include <stdio.h>     // Includes standard input/output header
#include "myfile.h"    // Includes user-defined file (in the same directory)
```

* Use `<>` for system headers (standard libraries).
* Use `""` for your own files.

---

## 📟 14.3 `#define`: Symbolic Constants

Used to give a name to constant values. This makes your code easier to read and modify.

```c
#define PI 3.14159

int main() {
    printf("Value of PI: %f\n", PI);  // Output: 3.141590
    return 0;
}
```

✅ Advantage: If you change `PI`'s value in one place, it updates everywhere.

---

## 🧠 14.4 `#define`: Macros

Macros are like *code shortcuts*. They can take arguments like functions but are replaced directly by the preprocessor.

### 📌 14.4.1 Macro with One Argument

```c
#define SQUARE(x) ((x) * (x))

int main() {
    printf("Square of 4: %d\n", SQUARE(4)); // Output: 16
    return 0;
}
```

🧠 Parentheses are important to prevent unexpected results like `SQUARE(1+2)`.

---

### 📌 14.4.2 Macro with Two Arguments

```c
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    printf("Max is: %d\n", MAX(10, 20));  // Output: 20
    return 0;
}
```

💡 This acts like an inline function that returns the maximum of two values.

---

### 📌 14.4.3 Macro Continuation Character (`\`)

If your macro is too long, use `\` to continue on the next line.

```c
#define PRINT_VALUES(x, y) \
    printf("X = %d\n", x); \
    printf("Y = %d\n", y);

int main() {
    PRINT_VALUES(5, 6);
    return 0;
}
```

---

### 🧹 14.4.4 `#undef` Directive

Used to *remove* a previously defined macro.

```c
#define TEMP 100
#undef TEMP
// Now TEMP is no longer defined
```

Useful when you want to redefine a macro without conflict.

---

### 🏛 14.4.5 Standard-Library Macros

Many standard macros are defined in headers like `<limits.h>` or `<math.h>`.

```c
#include <limits.h>

int main() {
    printf("Max int: %d\n", INT_MAX);  // Output: system-dependent
    return 0;
}
```

---

### ⚠ 14.4.6 Avoid Side Effects in Macros

Macros are *textually replaced*, so using variables with side effects (like `i++`) can behave unexpectedly.

```c
#define INCREMENT(x) ((x) + 1)

int main() {
    int i = 5;
    printf("%d\n", INCREMENT(i++));  // BAD: May print 7, but modifies `i` twice
    return 0;
}
```

✅ Use inline functions instead for safety.

---

## ⚙️ 14.5 Conditional Compilation

This allows you to compile certain parts of code depending on conditions.

### 🔀 14.5.1 `#if...#endif`

```c
#define DEBUG 1

#if DEBUG
    #define LOG(x) printf("DEBUG: %s\n", x)
#else
    #define LOG(x)
#endif

int main() {
    LOG("Start of program");  // Will print only if DEBUG is 1
    return 0;
}
```

---

### 📦 14.5.2 Commenting Out Blocks

```c
#if 0
// This block is ignored by the compiler
printf("This won't compile.\n");
#endif
```

Use this to temporarily disable sections of code without deleting them.

---

### 🐞 14.5.3 Debug Code

```c
#define DEBUG_MODE

#ifdef DEBUG_MODE
    #define DEBUG_PRINT(x) printf("Debug: %s\n", x)
#else
    #define DEBUG_PRINT(x)
#endif
```

This lets you include extra debugging information in development and exclude it in release builds.

---

## 🚨 14.6 `#error` and `#pragma`

### `#error` shows a custom compiler error:

```c
#ifndef __GNUC__
#error This program requires GCC compiler!
#endif
```

### `#pragma` sends special instructions to the compiler:

```c
#pragma message("Compiling with GCC")
```

---

## 🧹 14.7 `#` and `##` Operators

* `#` converts an argument to a string.
* `##` joins two tokens into one.

```c
#define TO_STRING(x) #x
#define CONCAT(a, b) a##b

int main() {
    printf("%s\n", TO_STRING(Hello));  // Output: Hello
    int ab = 10;
    printf("%d\n", CONCAT(a, b));      // Output: 10
    return 0;
}
```

---

## 📏 14.8 Line Numbers

Use predefined macros:

```c
int main() {
    printf("File: %s, Line: %d\n", __FILE__, __LINE__);
    return 0;
}
```

Helpful for debugging and error messages.

---

## 🧮 14.9 Predefined Symbolic Constants

```c
int main() {
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    return 0;
}
```

These constants provide metadata about the build.

---

## ✅ 14.10 Assertions

Check conditions during runtime using `assert()`.

```c
#include <assert.h>

int main() {
    int value = 5;
    assert(value != 0);  // If false, program aborts with error
    return 0;
}
```

Disable assertions by compiling with `-DNDEBUG`.

---

## 🔐 14.11 Secure C Programming

Avoid unsafe functions like `gets()`.

```c
char name[50];
fgets(name, sizeof(name), stdin);  // Safe way to read strings
```

Always check bounds and sanitize inputs to avoid security issues.
