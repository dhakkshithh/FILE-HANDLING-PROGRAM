# FILE-HANDLING-PROGRAM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: DHAKSHITH BAVAN S

*INTERN ID*: CT04DF1802

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH

*DESCRIPTION OF TASK 1*
          File handling is one of the most essential features of the C programming language, enabling developers to store data permanently on the system’s file system. Unlike variables, which store data temporarily in memory (RAM), files provide a way to write, store, and retrieve data even after a program finishes executing. In this task, we demonstrate basic file operations: creating a file, writing to it, appending data, and finally reading from the file.

This C program uses the standard I/O library <stdio.h> to manage file operations. It starts by defining a character array named filename to specify the file we want to work with. In this case, the file is named "example.txt". The file pointer FILE* file is used to handle all interactions with the file.

The first major operation in the program is writing data to a file. The function fopen is used with the mode "w", which stands for write. This mode creates a new file if it doesn’t exist or erases the existing contents if the file does exist. The program then writes a line of text into the file using fprintf, which is similar to printf but works with file pointers. After writing, fclose is used to close the file, ensuring data is flushed from the buffer and written properly.

Next, the program opens the same file in "a" mode, which stands for append. This mode allows us to add content to the end of the existing file without modifying or deleting the existing contents. Again, fprintf is used to write a line to the file, and fclose ensures the file is properly closed after appending.

The final phase of the program reads and displays the contents of the file. To do this, the file is opened in "r" mode, which stands for read. The program then reads the contents line-by-line using fgets, which reads a string until it encounters a newline or reaches the specified buffer size. Each line is then printed to the console using printf.

All operations include error-checking mechanisms. If the file cannot be opened in any mode (for example, due to insufficient permissions or disk errors), the program prints an error message and exits with return code 1.

To run this program, you can follow these steps:

    Save the code into a file named file_handling.c.

    Open a terminal or command prompt.

    Compile the code using a C compiler like GCC: gcc file_handling.c -o file_handling

    Run the compiled program: ./file_handling (Linux/macOS) or file_handling.exe (Windows)

After execution, you should see the contents of the file printed to the terminal, showing both the written and appended lines. You can also open the generated example.txt file using a text editor to verify that it contains the expected text.

This task serves as a foundation for learning how real-world programs interact with the file system, including log creation, configuration file management, and basic data storage. Mastery of file handling is crucial for building robust, user-interactive, and persistent applications in C.
