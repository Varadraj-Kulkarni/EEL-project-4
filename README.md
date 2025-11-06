AIM: To write a C program that stores student details such as Name, Application ID, and Percentile, and calculates a ranked list of students who appeared for that exam using data structures and Bubble Sort algorithm.


RESEARCH:
In schools, colleges, and exams like JEE or CET, students are ranked based on their percentile or marks.
This ranking is usually done by computer systems that take all student data and sort them according to performance.

In programming, we can do this using sorting algorithms like Bubble Sort, Selection Sort, or Insertion Sort.
For this project, Bubble Sort is used because it is simple and easy to understand for beginners.

We also use the struct keyword in C language.
A structure helps in grouping different types of data together.
For example, one student has a name (string), ID (integer), and percentile (float).
Using structure, we can keep all this data in one place for each student.

The program stores all students in an array of structures, compares their percentiles, and sorts them from highest to lowest.
This simulates how result processing systems or databases might arrange student data for result generation.

PROJECT: Student Percentile Sorting System

ANALYSIS:
To make the project work properly, we first decided what data each student should have — name, ID, and percentile. These three values are grouped using a structure. Then an array of structures is used to store data for multiple students.
         Bubble Sort was chosen because:
It is simple to code using nested loops.
It can directly compare and swap structures based on one field (here, percentile).
It clearly shows how sorting works step by step.
During sorting, if one student’s percentile is less than the next student’s, they are swapped using a temporary variable.
After all passes, students are arranged in descending order.


IDEATE:
Before making this project, different ideas were considered like:
Sorting students by marks
Sorting employees by salary
Sorting products by price
Finally, sorting students by percentile was selected because it connects to real student results.
BUILD:
The project was built using the following main steps:
Define Structure:
A structure named Student is made with three variables — id, name, and percentile.
Input Section:
The user enters the number of students and details for each one.
Sorting Section:
Bubble Sort is used to compare two students’ percentiles and swap them if needed.
Display Section:
After sorting, data is printed in a tabular format with columns for ID, Name, and Percentile.
This program uses basic concepts only — no pointers, arrays of strings, or dynamic memory. It is fully beginner-level and focuses on logic and syntax clarity.


TESTING:
The program was tested with different inputs to check if it sorts correctly and displays results properly.

The output is shown below, where ranked list is generated through this program by inputting name, application ID and percentiles of students appeared for the exam.


IMPLIMENTATION:
Github link:  


CONCLUSION:
This project successfully sorts students based on their percentile using structures and Bubble Sort. It helps understand how to use user-defined data types and simple algorithms in real-life problems. The output is clear, readable, and useful to calculate the rank list of thousands of students appearing for the exam.

 SOURCES:
 Let Us C by Yashavant Kanetkar
Official MHT CET website for rank list (for idea of sorting students by marks/percentile)
GeeksforGeeks – Sorting in C (reference for Bubble Sort logic)
