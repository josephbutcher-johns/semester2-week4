
/*
Name: Joseph Butcher-Johns
Student ID: 201948424
Requirements:
• The executable is run with 1-10 command line arguments
• Each argument is 1-4 characters long
• The output is a single string with a ‘-’ character between each argument
For example:
% ./makeString a b c d
a-b-c-d
% ./makeString helo 32 v+w
helo-32-v+w
Test your code in the terminal before submitting to Gradescope.
Exam-style question
Python accepts command–line arguments using the sys module and sys.argv parameter.
C accepts command line arguments via the main function and argc,argv parameters.
i. State the difference between the Python sys.argv and C argv parameters.
ii. Explain why C requires the argc parameter and Python does not.
*/
#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100] = ""; 
    // process the command-line data using appropriate string functions
    for (int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);
        if (i < argc - 1) { 
            strcat(buffer, "-");
        }
    }

    printf("%s\n",buffer); 
    return 0;
}