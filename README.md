# Banking-Stimulator
This is a robust C-based banking application that allows users to perform standard transactions with advanced input validation to prevent crashes.

⚠️ ""Designed for learning purposes to demonstrate memory buffer management and control flow in C.""


How to Run

1.Ensure a C Compiler is installed (like GCC or Clang)

2.Open your Terminal or Command Prompt

3.Compile the program: gcc banking_simulator.c -o banking_sim

4.Run the executable: ./banking_sim


Purpose

This project is for practicing input stream validation using getchar() and handling the logic flow of a finite transaction loop. It solves common "beginner bugs" like infinite loops caused by non-numeric input.


Features

->Secure Logic: Prevents negative deposits and account overdrafts.

->Input Protection: Flushes the stdin buffer to handle invalid characters gracefully.

->State Management: Tracks account balance across multiple transaction types.
