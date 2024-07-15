# CGPA-GPA-Calculator-CPP
A simple CGPA and GPA calculator program using C++. This helps students calculate their GPA and CGPA based on earned marks and credits.

# Features
- Calculate CGPA from semesters' grades.
- Calculate GPA from course credits and marks.
- Simple to navigate console.

# Requirements
- C++ compiler (g++, etc.)
- Knowledge of C++
- A terminal to interact and run the program

# Guide
1. Download this repository to your local computer.
```sh
https://github.com/tqtri/CGPA-GPA-Calculator-CPP
```
2. Navigate to the directory
```sh
cd CGPA-GPA-Calculator-CPP
```
3. Compile the program
```sh
g++ CGPA_GPA_Calc.cpp -o CGPA_GPA_Calc.cpp
```
4. Run the program
```sh
./CGPA_GPA_Calc
```
5. Follow the instructions in the console and enter prompts as required.
6. The program will calculate CGPA, GPA or exit according to your choice.

# Example Output
Let's go through a sample run of the program.
Assuming the user wishes to calculate their CGPA, they must input '2' into the console.
```sh
Enter your choice: 2
```
Next, let's assume the user has 4 semesters.
```sh
How many semesters do you want to calculate? 3
```
For each semester, the user inputs the GPA for that semester.
```sh
Please enter your GPA for semester 1: 3.4
Please enter your GPA for semester 2: 3.2
Please enter your GPA for semester 3: 3.6
Please enter your GPA for semester 4: 3.7
```
The program will calculate the CGPA and output it to the terminal.
```sh
Your CGPA is 3.47.
```
The CGPA in this program is rounded to the second decimal.
After the calculations are done, the user is returned to the menu to select another course of action (1 for GPA, 2 for CGPA and 3 for exit).
This is a simple program, so modifications and improvements can be made to further the program!

# License
This project is licensed under the MIT License. See the LICENSE file for details.
