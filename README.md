# Non-Preemptive Priority CPU Scheduling (C)

## Objective

Implement **Non-Preemptive Priority CPU Scheduling** using the C programming language.

In this scheduling algorithm, the process with the **highest priority is selected first**.
Here **higher numeric value means higher priority**.

Once a process starts execution, it **runs until completion** (non-preemptive).

---

## Problem Statement

Write a C program `priority.c` that simulates **Non-Preemptive Priority CPU Scheduling** and calculates:

* Waiting Time (WT)
* Turnaround Time (TAT)
* Average Waiting Time
* Average Turnaround Time

---

## Input Format

```
n
PID1 AT1 BT1 PR1
PID2 AT2 BT2 PR2
...
PIDn ATn BTn PRn
```

Where:

| Symbol | Meaning                                   |
| ------ | ----------------------------------------- |
| n      | Number of processes                       |
| PID    | Process ID                                |
| AT     | Arrival Time                              |
| BT     | Burst Time                                |
| PR     | Priority (Higher value = Higher priority) |

---

## Output Format

```
Waiting Time:
PID WT
...

Turnaround Time:
PID TAT
...

Average Waiting Time: X.XX
Average Turnaround Time: X.XX
```

---

## Sample Input

```
5
P1 0 5 2
P2 0 4 5
P3 1 3 1
P4 2 3 4
P5 3 3 3
```

---

## Sample Output

```
Waiting Time:
P1 10
P2 0
P3 14
P4 2
P5 4

Turnaround Time:
P1 15
P2 4
P3 17
P4 5
P5 7

Average Waiting Time: 6.00
Average Turnaround Time: 9.60
```

---

## Formulas Used

Turnaround Time:

```
TAT = Completion Time − Arrival Time
```

Waiting Time:

```
WT = Turnaround Time − Burst Time
```

---

## Compilation

Compile the program using:

```
gcc priority.c -o priority
```

Run the program:

```
./priority
```

---

## Files in Repository

```
priority.c        → Implementation of the scheduling algorithm
autograding.json  → GitHub Classroom autograding configuration
README.md         → Assignment description
```

---

## Autograding

GitHub Classroom will automatically:

1. Compile the program
2. Run multiple test cases
3. Compare output with expected results
4. Assign marks for each test case

---

## Submission Instructions

1. Implement your solution in **priority.c**
2. Do **not rename files**
3. Commit and push your code to the repository
4. GitHub Classroom will automatically run the tests

---

## Notes

* Output format must **exactly match** the expected output.
* Print averages with **two decimal places**.
* Extra spaces or missing lines may cause test failures.

---

## Evaluation

| Component                | Marks |
| ------------------------ | ----- |
| Correct Scheduling Logic | 60    |
| Output Format            | 20    |
| Passing Test Cases       | 20    |

Total: **100 Marks**

---

## Academic Integrity

Students must submit **their own work**.
Copying code from others or online sources is **not permitted** and may lead to penalties.
