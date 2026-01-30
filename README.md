# CODTECH-C-Internship-T3
COMPANY : CODTECH IT SOLUTIONS
NAME    : OM NARENDRA DOKHE
INTERN ID : CTIS1983
DOMAIN  : C LANGUAGE
DURATION : 4 WEEKS
MENTOR  : NEELA SANTOSH
OUTPUT  :
<img width="1919" height="1079" alt="Image" src="https://github.com/user-attachments/assets/41951934-af10-4718-8873-f39ea109de96" />
<img width="1919" height="1079" alt="Image" src="https://github.com/user-attachments/assets/d0c0177b-5827-45ef-8f1d-e1d56a7a6f07" />
<img width="1919" height="1079" alt="Image" src="https://github.com/user-attachments/assets/307f7da9-df61-4c73-9092-27c1373b02ce" />

DESCRIPTION :
This task focuses on implementing a basic lexical analyzer using the C programming language. Lexical analysis is one of the most important phases in compiler design. It is the first step in the compilation process, where the source code is scanned character by character and converted into meaningful units called tokens. Tokens are the smallest elements of a programming language, such as keywords, identifiers, operators, numbers, and symbols.

In this task, a lexical analyzer program was developed to read an input C source file and classify different types of tokens present in the file. The program identifies keywords such as int, float, if, else, return, and other reserved words of the C language. It also detects identifiers, which are user-defined names for variables, functions, and other program elements. In addition, the analyzer recognizes numeric constants, operators, and special symbols like brackets, semicolons, and commas.

The lexical analyzer works by scanning the input file sequentially. It skips whitespace characters such as spaces, tabs, and newlines. When it encounters an alphabetic character or underscore, it collects the sequence of characters to form a word. That word is then checked against a predefined list of keywords. If it matches, it is classified as a keyword; otherwise, it is treated as an identifier. When the analyzer encounters digits, it forms numeric tokens. Operators and symbols are identified by direct character comparison.

This program demonstrates the fundamental concept of tokenization, which is essential for building compilers and interpreters. Lexical analyzers are widely used not only in compilers but also in modern programming tools such as syntax highlighters, code editors, and static code analysis systems. For example, Visual Studio Code itself uses lexical analysis techniques to highlight keywords and detect syntax errors while writing code.

The implementation was done using standard C libraries such as stdio.h, ctype.h, and string.h. Functions like fgetc() were used to read characters from the file, and string comparison functions were used for keyword matching. The program was designed with a structured approach so that token recognition is clear and easy to understand.

This task was developed and tested on Windows 11 using Visual Studio Code as the programming editor. The GCC compiler from MinGW-w64 was used to compile and run the lexical analyzer program in the PowerShell integrated terminal. An additional input file such as input.c was created for testing, which contains sample C code to analyze.

Lexical analysis is a foundational topic in compiler design and is also important for competitive programming and GATE-level computer science preparation. Understanding this task helps build deeper knowledge about how programming languages are processed internally by compilers. It also strengthens skills in file handling, pattern recognition, and string processing in C.

Overall, this task provides practical exposure to compiler design basics and demonstrates how source code can be broken down into tokens for further phases like parsing and semantic analysis.

Tools and Platform Used

Language: C
Compiler: GCC (MinGW-w64)
Editor: Visual Studio Code
Operating System: Windows 11

Commands to Compile and Run

Make sure task3.c and the input file are in the same folder. Then execute:

gcc task3.c -o task3
.\task3.exe

When prompted, enter the input source file name:

input.c
