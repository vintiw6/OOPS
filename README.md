
<h1 class="title">Learning Object-Oriented Programming (OOP) in C++</h1>

<p class="description">This repository documents my journey through learning object-oriented programming concepts using the C++ programming language. It serves as a valuable resource for anyone interested in exploring OOP principles and applying them in C++.</p>

<div class="content">

  <h2 class="large-heading">Introduction to OOP</h2>

  This section provides an overview of OOP concepts:

  <h3 class="large-heading">Classes and Objects</h3>

  Classes are blueprints that define the properties (data members) and behaviors (member functions) of objects. Objects are instances of classes that encapsulate data and functionality.

  ```c++
  #include <iostream>

  class Person {
  public:
    std::string name;
    int age;

    void greet() {
      std::cout << "Hello, my name is " << name << std::endl;
    }
  };

  int main() {
    Person vinayak;
    vinayak.name = "Vinayak";
    vinayak.age = 25;

    vinayak.greet();

    return 0;
  }
