# 🎯 Practical OOP in C++ with Real Examples

---

## 🧱 1. Classes and Objects

### 🔎 What?

* A **class** is a blueprint.
* An **object** is an instance of that class.

### 💡 Real-World Analogy:

A class is like a **car design**; an object is a **real car** built from that design.

### 👨‍💻 Example:

```cpp
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;

public:
    Car(string b, string m) {
        brand = b;
        model = m;
    }

    void DisplayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

int main() {
    Car car1("Toyota", "Corolla");
    car1.DisplayInfo();
    return 0;
}
```

### 🛠️ Practical Use:

Use classes to represent **products**, **users**, or **orders** in an app.

---

## 🔐 2. Encapsulation

### 🔎 What?

Encapsulation hides internal data and provides methods to access it.

### 💡 Real-World Analogy:

Think of a **vending machine**: you press a button (public method) to get a drink, but you can’t directly access the drink inside (private data).

### 👨‍💻 Example:

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial) {
        balance = initial;
    }

    void Deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    void Withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds!" << endl;
    }

    double GetBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);
    account.Deposit(500);
    account.Withdraw(200);
    cout << "Current Balance: $" << account.GetBalance() << endl;
    return 0;
}
```

### 🛠️ Practical Use:

Encapsulation is used to secure sensitive data like **passwords**, **bank info**, etc.

---

## 🧬 3. Inheritance

### 🔎 What?

Inheritance lets a class inherit features from another class.

### 💡 Real-World Analogy:

A **Smartphone** is a kind of **Phone** — it inherits basic phone features and adds smart features.

### 👨‍💻 Example:

```cpp
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(string n) : name(n) {}

    void Work() {
        cout << name << " is working." << endl;
    }
};

class Manager : public Employee {
public:
    Manager(string n) : Employee(n) {}

    void HoldMeeting() {
        cout << name << " is holding a team meeting." << endl;
    }
};

int main() {
    Manager m("Sarah");
    m.Work();         // inherited
    m.HoldMeeting();  // own method
    return 0;
}
```

### 🔐 Access Specifiers: `private`, `protected`, and `public`

#### 🔎 What?

Access specifiers control who can access class members (variables and functions):

| Specifier     | Who Can Access?                     | Typical Use Case                                  |
| ------------- | ----------------------------------- | ------------------------------------------------- |
| **private**   | Only the class itself               | Hide internal details completely                  |
| **protected** | The class itself and its subclasses | Allow derived classes access, hide from outsiders |
| **public**    | Everyone (any code)                 | Interface methods accessible to all               |

#### 💡 Real-World Analogy:

Think of a company building:

* **private** rooms: Only accessible by employees who work there (class itself).
* **protected** rooms: Accessible by employees and their trusted team members (derived classes).
* **public** rooms: Accessible by anyone (everyone).

#### 👨‍💻 Example:

```cpp
class Base {
private:
    int privateVar;    // Only Base can access
protected:
    int protectedVar;  // Base and derived classes can access
public:
    int publicVar;     // Accessible from anywhere
};

class Derived : public Base {
public:
    void Access() {
        // privateVar = 1;   // ERROR: not accessible here
        protectedVar = 2;    // OK: accessible in derived class
        publicVar = 3;       // OK: accessible anywhere
    }
};
```

### 🛠️ Practical Use:

Use access specifiers to **protect internal data** while exposing only what is necessary.

---

## 🌀 4. Polymorphism

### 🔎 What?

Polymorphism allows objects of different types to be treated through a common interface.

### 💡 Real-World Analogy:

You can press "play" on a **TV remote**, and it works whether it's a **Sony**, **LG**, or **Samsung** TV — the behavior differs, but the interface is the same.

### 👨‍💻 Example:

```cpp
#include <iostream>
using namespace std;

class Notification {
public:
    virtual void Send() = 0; // Pure virtual
    virtual ~Notification() {}
};

class Email : public Notification {
public:
    void Send() override {
        cout << "Sending Email..." << endl;
    }
};

class SMS : public Notification {
public:
    void Send() override {
        cout << "Sending SMS..." << endl;
    }
};

int main() {
    Notification* n1 = new Email();
    Notification* n2 = new SMS();

    n1->Send();
    n2->Send();

    delete n1;
    delete n2;
    return 0;
}
```

### 🛠️ Practical Use:

Used in **notification systems**, **payment processing**, **game engines**, etc.

---

## 🧼 5. Abstraction

### 🔎 What?

Abstraction hides the complexity and only shows essential features.

### 💡 Real-World Analogy:

When you drive a car, you use the **steering wheel** — you don’t worry about the internal **gear mechanisms**.

### 👨‍💻 Example:

```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double Area() = 0; // Pure virtual
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double Area() override {
        return width * height;
    }
};

int main() {
    Shape* shape = new Rectangle(4, 5);
    cout << "Area: " << shape->Area() << endl;
    delete shape;
    return 0;
}
```

### 🧠 What's Happening Here (Simple Explanation):

* `Shape` is a **base class** with a **pure virtual** function `Area()`, so it's an **abstract class**.
* `Rectangle` is a **child class** that provides its own version of `Area()`.
* We create a `Shape*` pointer and assign it a `Rectangle`.
* When we call `shape->Area()`, it actually calls `Rectangle`'s `Area()` method.
* This is possible because `Area()` is `virtual`. That means: \**"Look at the real object (Rectangle), not the pointer type (Shape*)"\*\*.
* This is called **runtime polymorphism** — different behaviors using the same function call.

### 💡 Real-Life Analogy:

* `Shape` is like a **remote control**.
* `Rectangle` is like the **TV**.
* Pressing `Area()` is like pressing the **power** button.
* The remote calls the correct function depending on which device it's controlling.

### 🛠️ Practical Use:

Used in **drawing apps**, **graphics engines**, **geometry calculators**, etc.

---

## ✅ Final Summary: When to Use What?

| OOP Concept   | When to Use                                                  |
| ------------- | ------------------------------------------------------------ |
| Class/Object  | To represent real-world entities like users, cars, accounts. |
| Encapsulation | To protect and control access to internal data.              |
| Inheritance   | To reuse and extend existing code logically.                 |
| Polymorphism  | To handle multiple types with a single interface.            |
| Abstraction   | To simplify complex systems and hide internal details.       |
