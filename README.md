# Fibonacci Sequence with Dynamic Programming

This code provides an implementation of the Fibonacci sequence using dynamic programming, based on the given structure and arithmetic operations.

## Getting started

The program utilizes a recursive function, fibonacci, which calculates the Fibonacci numbers and stores them in an array. The implementation employs the concept of memoization, avoiding redundant calculations by storing intermediate results in the fib array.

The provided code structure includes the following components:

**Node** structure: A structure defining a node with a **TypeTag** field.
**TypeTag enumeration**: An enumeration defining the possible types of the Node structure.
**NumberNode** structure: A structure representing a node containing a single numeric value.
**BinaryOpNode** structure: A structure representing a node containing two operands for binary operations.
**makeFunc** function: A utility function to create and initialize a new **Node**.
**calc function**: A function to calculate and print the results based on the provided arithmetic operations and conditions.
**main function**: The main entry point of the program, where the Fibonacci sequence and arithmetic operations are executed.


## How to compile and run the source code:
To use the code, follow these steps:

<!-- 1. Compile the C program using a C compiler, such as GCC. -->
<!-- 2. Run the compiled program. -->
1. Install the C/C++ extension: Open VS Code and navigate to the Extensions view on the left sidebar (icon with four squares). Search for "C/C++" in the search bar and install the official C/C++ extension by Microsoft.
2. Create a new folder and open it in VS Code: Create a new folder where you'll save your C program files. Open VS Code and use the "File" menu to open the folder you created
3. Create a new C file: In the Explorer view of VS Code (left sidebar), right-click on the folder you opened and select "New File." Give it a name with the **.c extension**, ie fibonacci_sequence.c, and press Enter to create the file.
4. Configure tasks.json file: Press **Ctrl+Shift+P** (or **Cmd+Shift+P** *on macOS*) to open the Command Palette. Type "*Tasks: Configure Task*" and select "*Tasks: Configure Task*" from the dropdown. **Choose** "*Create tasks.json*" file from template" and select "*Others*" to create a custom task. Modify the generated tasks.json file as follows:
```json
{
    // See https://go.microsoft.com/fwlink/?LinkId=733558
    // for the documentation about the tasks.json format
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build and run fibonacci_sequence",
            "type": "shell",
            "command": "gcc",
            "args": [
                "${workspaceFolder}/fibonacci_sequence.c",
                "-o",
                "${workspaceFolder}/fibonacci_sequence"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "presentation": {
                "reveal": "always",
                "panel": "shared"
            },
            "problemMatcher": {
                "owner": "cpp",
                "fileLocation": [
                    "relative",
                    "${workspaceFolder}"
                ],
                "pattern": {
                    "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning|error):\\s+(.*)$",
                    "file": 1,
                    "line": 2,
                    "column": 3,
                    "severity": 4,
                    "message": 5
                }
            },
            "options": {
                "cwd": "${workspaceFolder}"
            }
        },
        {
            "label": "Run fibonacci_sequence",
            "type": "shell",
            "command": "./fibonacci_sequence",
            "group": "test",
            "presentation": {
                "reveal": "always",
                "panel": "shared"
            },
            "dependsOn": "Build and run fibonacci_sequence"
        }
    ]
}
```
5. Build and run the program: Press **Ctrl+Shift+B** (or **Cmd+Shift+B** *on macOS*) to trigger the build task you just configured. VS Code will compile your C program and generate an executable file

6. Upon execution, the program performs the following operations:

- Calculates the Fibonacci number at the specified index n.
- Creates NumberNode and BinaryOpNode instances to represent arithmetic operations.
- Calls the calc function to calculate and print the results for each operation.

The expected output of the program, based on the provided arithmetic operations and conditions, is as follows:
```
    add:16
    mul:20
    sub:4
    fibo:2
```

These values correspond to the results of the *add*, *mul*, *sub*, and *fibo* operations, respectively

