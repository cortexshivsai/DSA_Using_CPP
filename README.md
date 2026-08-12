# 📚 Data Structures & Algorithms Using C++

A structured collection of **Data Structures and Algorithms (DSA)** implemented in **C++**, created for learning, problem-solving, and interview preparation.

This repository contains implementations, examples, and practice problems covering fundamental to advanced DSA concepts.

---

## 🎯 Purpose

The goal of this repository is to:

- Build strong DSA fundamentals
- Improve problem-solving and logical thinking
- Understand algorithmic complexity
- Practice writing clean and efficient C++ code
- Prepare for coding interviews and technical assessments
- Maintain a structured record of my DSA learning journey

---

## 🛠️ Language & Tools

<p align="left">
  <img src="https://skillicons.dev/icons?i=cpp,git,github,vscode" />
</p>

---

## 📂 Topics Covered

### 🔹 Fundamentals
- Time & Space Complexity
- Recursion
- Mathematical Algorithms
- Bit Manipulation

### 🔹 Linear Data Structures
- Arrays
- Strings
- Linked Lists
- Stacks
- Queues
- Deques

### 🔹 Non-Linear Data Structures
- Trees
- Binary Trees
- Binary Search Trees
- Heaps
- Hash Tables
- Graphs

### 🔹 Algorithms
- Searching
- Sorting
- Recursion & Backtracking
- Greedy Algorithms
- Divide and Conquer
- Dynamic Programming
- Graph Algorithms

### 🔹 Problem Solving
- Two Pointer Technique
- Sliding Window
- Prefix Sum
- Binary Search
- Hashing
- Recursion & Backtracking
- Greedy Problems
- Dynamic Programming Problems

---

## 📁 Repository Structure

```text
Data-Structures-and-Algorithms-Using-CPP/
│
├── 01_Basics/
│   ├── Time_Complexity/
│   ├── Space_Complexity/
│   └── Bit_Manipulation/
│
├── 02_Arrays/
│   ├── Basic_Operations/
│   ├── Searching/
│   └── Problems/
│
├── 03_Strings/
│
├── 04_Recursion/
│
├── 05_Linked_List/
│
├── 06_Stack/
│
├── 07_Queue/
│
├── 08_Trees/
│
├── 09_BST/
│
├── 10_Heap/
│
├── 11_Hashing/
│
├── 12_Graphs/
│
├── 13_Sorting/
│
├── 14_Greedy/
│
├── 15_Backtracking/
│
└── 16_Dynamic_Programming/
```

> The folder structure may evolve as new topics and problems are added.

---

## 📈 Learning Progress

| Topic | Status |
|---|---|
| C++ Fundamentals | 🔄 In Progress |
| Time & Space Complexity | ⬜ |
| Arrays | ⬜ |
| Strings | ⬜ |
| Recursion | ⬜ |
| Linked Lists | ⬜ |
| Stack | ⬜ |
| Queue | ⬜ |
| Trees | ⬜ |
| Binary Search Tree | ⬜ |
| Heap | ⬜ |
| Hashing | ⬜ |
| Graphs | ⬜ |
| Sorting Algorithms | ⬜ |
| Greedy Algorithms | ⬜ |
| Backtracking | ⬜ |
| Dynamic Programming | ⬜ |

---

## 💡 Example

### Binary Search

```cpp
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;

    cout << binarySearch(arr, target);

    return 0;
}
```

---

## ⏱️ Complexity

Understanding complexity is an important part of DSA.

Common complexities covered in this repository:

```text
O(1)        Constant
O(log n)    Logarithmic
O(n)        Linear
O(n log n)  Linearithmic
O(n²)       Quadratic
O(2ⁿ)       Exponential
O(n!)       Factorial
```

---

## 🧩 Problem-Solving Approach

For each problem, I aim to follow this process:

```text
Understand the Problem
        ↓
Identify the Pattern
        ↓
Develop a Brute Force Solution
        ↓
Analyze Time & Space Complexity
        ↓
Optimize the Solution
        ↓
Implement in C++
        ↓
Test with Edge Cases
```

---

## 🚀 Goals

- [ ] Complete core DSA concepts
- [ ] Solve 100+ DSA problems
- [ ] Solve 250+ DSA problems
- [ ] Master common problem-solving patterns
- [ ] Improve C++ programming skills
- [ ] Prepare for technical interviews
- [ ] Participate in coding contests
- [ ] Build consistency in problem solving

---

## 📊 Progress

**Problems Solved:** `0 / 250+`

**Topics Completed:** `0 / 16`

> This section will be updated as I progress through the roadmap.

---

## 📌 Why C++?

C++ is widely used for competitive programming and technical interview preparation because of its:

- Fast execution
- STL (Standard Template Library)
- Powerful data structures
- Efficient memory management
- Strong support for algorithmic programming

---

## 🤝 Contributions

This repository is primarily maintained as a personal learning and practice repository.

Suggestions and improvements are welcome.

---

## ⭐ Learning Journey

This repository is part of my journey toward becoming a strong software and AI engineer.

I am continuously improving my:

**Problem Solving → DSA → C++ → Algorithms → Machine Learning → AI Engineering**

---

## 📜 License

This project is available for educational and learning purposes.

---

<p align="center">
  <b>💻 Keep Learning • Keep Solving • Keep Building 🚀</b>
</p>
