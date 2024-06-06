# Learning Summary

## Development Environment Setup

1. I began by using **Visual Studio tools**, a suite of development tools and features provided by the Visual Studio IDE. This enabled me to compile a "Hello World" program in the terminal using the `cl` command with the MSVC compiler.

2. I installed the **Ninja generator**, a compact build system designed for speed. It efficiently manages and accelerates the build process for large codebases. It’s typically used in conjunction with other build systems like **CMake**.

3. I installed **CMake**, a cross-platform, open-source software for managing the build process of software development projects. I used this software in conjunction with the **Ninja generator** to build and run a "Hello World" program. I created a CMake file named **CMakeLists.txt**. In this file, I defined my main program **FileLogger.cpp** as **HelloWorld**. Then, I had CMake find the SPDlog package. After that, the program created a target called HelloWorld from the original FileLogger.cpp program and finally linked the SPDlog library to HelloWorld. I used the commands `cmake -G Ninja ..` and `ninja` to run the program.

4. I installed **Conan 1.64.0**, an open-source, decentralized, and multi-platform package manager for C and C++. It allows developers to create and share all their native binaries. I used this to install a library called **SPDlog**, a very fast, header-only/compiled, C++ logging library. I then built a program that outputs "Hello World" and redirected the output to a different file called "log.txt". When setting up Conan, I added a file named conanfile.txt and installed it onto my project, allowing **SPDlog** to be recognized by the program.

## Version Control and Logging

1. I created a **GitHub** account and downloaded **Git Bash**. I learned the commands to upload files with the terminal and incorporated **.gitignore** to ignore unnecessary files, enhancing the presentation of the repository. I used commands like `git add .`, `git commit -m "commit message"`, and `git push`.
