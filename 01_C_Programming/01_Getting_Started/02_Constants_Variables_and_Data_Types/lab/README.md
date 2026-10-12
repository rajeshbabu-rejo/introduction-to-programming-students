# Guided lab: Campus Walk Tracker

## Scenario and outcome

A new student follows a campus route from the Main Gate to the Library. Your terminal program will show route facts that stay fixed and progress values that change. By the end, you will be able to choose C data types, distinguish `const` from a variable, update a value, calculate a percentage, and explain a compiler diagnostic.

## Before you begin

- Complete the first C lesson or be able to open a folder in VS Code and run a small C program.
- Use the compiler approved for the Next Gen Lab. The examples below use GCC on Windows and `cc` on macOS/Linux.
- Open this lesson's `lab` folder in VS Code. Work in your own copy of `campus_walk_starter.c`.

| Computer | Build | Run |
| --- | --- | --- |
| Windows with GCC | `gcc -std=c11 -Wall -Wextra -Wconversion campus_walk_starter.c -o campus_walk.exe` | `.\campus_walk.exe` |
| macOS/Linux with Clang or GCC | `cc -std=c11 -Wall -Wextra -Wconversion campus_walk_starter.c -o campus_walk` | `./campus_walk` |

If the compiler command is unavailable, tell your instructor so the lab's compiler can be configured. Do not install an unapproved tool during the session.

## Checkpoint 1 — Predict and run

Read the declarations at the top of `main`. On paper or in your notes, complete this table before running:

| Name | Expected value | Will it change in this program? | C type |
| --- | --- | --- | --- |
| `start` | | | |
| `route_meters` | | | |
| `meters_walked` | | | |
| `percent_complete` | | | |
| `route_code` | | | |
| `arrived` | | | |

Save, build, and run. The first result should show Route A, Main Gate to Library, 800 m, 0 m walked, 0.00% complete, and `Arrived: no`. Record one prediction that matched and one that surprised you.

## Checkpoint 2 — Change a variable

1. Replace `/* TODO 1 ... */` with `meters_walked = 250;`.
2. Replace TODO 2 with `percent_complete = (double) meters_walked * 100.0 / route_meters;`.
3. Replace TODO 3 with two `printf` statements that show the new distance and percentage. Use `%d` for an `int` and `%.2f` for a `double`.
4. Save, build, and run again. The new percentage should be **31.25%**.

Write the formula in words: ____________________________________________________

## Checkpoint 3 — Test a constant safely

1. Temporarily add `route_meters = 900;` after its declaration.
2. Build. Read the compiler diagnostic and capture or write down the relevant line.
3. Remove that line so the program builds again.

Explain why the assignment was rejected: ______________________________________

## Checkpoint 4 — Match values to types

Find one example of each in your program: `int`, `double`, `char`, `bool`, and text stored in a `char` array. For each, write the value it holds. Notice that `bool` needs `#include <stdbool.h>` in this C11 lesson. A string such as `"Library"` is stored here as a character array; C does not have a built-in `String` type.

## Checkpoint 5 — Required values

Read this example, but **do not run it**:

```c
int steps_today;
printf("%d\n", steps_today);  /* reading an uninitialized local value */
```

Replace the declaration with `int steps_today = 0;` before using it. An uninitialized automatic local value must not be read. In C, a warning may help, but the compiler is not required to reject this mistake.

## Extend — Daily step goal

Add `const int daily_step_goal = 10000;` and `int steps_today = 3467;`. Print both values. Then calculate the daily step percentage as a `double`; expected result: **34.67%**. Use `100.0` or an explicit cast so you do not accidentally perform integer division.

## Submit

- Your completed `campus_walk_starter.c`.
- A screenshot or text capture of the final output.
- The compiler diagnostic from Checkpoint 3.
- Three short answers: why `route_meters` is `const`; why `meters_walked` is a variable; why `percent_complete` is a `double`.

## If something goes wrong

- **`printf` prints a strange value:** compare each format specifier with the type of its argument.
- **The percentage is `31.00` or `0.00`:** check the formula and use `100.0` or the cast shown above.
- **A change does not appear in output:** save, compile again, and run the new executable.
- **A `const` assignment stops the build:** remove the experimental assignment after recording the diagnostic.
