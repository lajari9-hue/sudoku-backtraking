# sudoku-backtraking
C++ Sudoku Solver using Backtraking
# Sudoku Solver in C++

A simple **Sudoku Solver** implemented in C++ using the **Backtracking Algorithm**.

## 📌 Project Description

This program solves a standard 9×9 Sudoku puzzle automatically. It represents the Sudoku grid using a 2D array and uses recursion with backtracking to find the correct solution.

## 🚀 Features

- 9×9 Sudoku grid
- Uses a 2D array
- Checks row constraints
- Checks column constraints
- Checks 3×3 subgrid constraints
- Uses recursion and backtracking
- Displays the original and solved Sudoku

## 🛠️ Technologies Used

- C++
- Arrays
- Functions
- Recursion
- Backtracking Algorithm

## ▶️ How to Run

### 1. Compile

```bash
g++ sudoku.cpp -o sudoku
```

### 2. Run

```bash
./sudoku
```

On Windows:

```bash
.\sudoku.exe
```

## 🧠 Algorithm

The program follows these steps:

1. Find an empty cell.
2. Try numbers from 1 to 9.
3. Check whether the number is valid in the row, column, and 3×3 box.
4. If valid, place the number.
5. Recursively solve the remaining cells.
6. If the solution fails, remove the number and try another number.
7. Continue until the Sudoku is completely solved.

## 📂 Project Structure

```text
Sudoku-Solver
│
├── sudoku.cpp
├── README.md
└── .gitignore
```

## 📷 Sample Output

```text
Solved Sudoku:

5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

## 👨‍💻 Author

**Chaudhari Premix**

---

⭐ If you found this project useful, feel free to star the repository!