# Learning Summary

## Development Environment Setup

1. I started off by using **Visual Studio tools**, a set of development tools and features provided by the Visual Studio IDE. This allowed me to compile a "Hello World" program in the terminal using the `cl` command with the MSVC compiler.

2. I installed the **Ninja generator**, a small build system focused on speed. It efficiently manages and speeds up the build process for large codebases. It’s typically used in conjunction with other build systems like **CMake**.

3. I installed **CMake**, a cross-platform, open-source software for managing the build process of software development projects. I used this software in conjunction with the **Ninja generator** to build and run a "Hello World" program.

4. I installed **Conan 1.64.0**, an open-source, decentralized, and multi-platform package manager for C and C++. It allows developers to create and share all their native binaries. I used this to install a library called **SPDlog**, a very fast, header-only/compiled, C++ logging library. I then built a program that outputs "Hello World" and redirected the output to a different file called "log.txt".

## Version Control and Logging

1. I created a **GitHub** account and downloaded **Git Bash**. I learned the commands to upload files with the terminal and incorporated **.gitignore** to ignore unnecessary files, making the repository more presentable.
