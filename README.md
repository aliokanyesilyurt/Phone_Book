# 📞 Multilingual Phonebook Application in C

A robust, console-based Phonebook application developed in C. This project demonstrates advanced memory management, file handling, and custom regex validation for phone numbers.

It features a dynamic language system (Turkish & English) managed via **Structs** and **Pointers**, allowing users to switch languages on the fly without restarting the application.

## 🚀 Key Features

* **🌍 Multi-Language Support:** Dynamic switching between Turkish and English using a pointer-based `LanguagePack` structure.
* **regex Validation:** Custom implementation to validate phone number formats for different countries (TR, US, UK, DE).
* **💾 Persistent Storage:** Reads from and writes to a text file (`egitimdata.txt`) to save contacts permanently.
* **🔍 Advanced Search & Update:** Search contacts by name and update specific fields (Name, Surname, Phone) individually.
* **⚡ CRUD Operations:** Full capability to Create, Read, Update, and Delete records.
* **Sort Functionality:** Alphabetical sorting of contacts.

## 🛠️ Technical Highlights

This project was built to practice and demonstrate core C concepts:
* **Pointers & Memory Management:** Efficiently handling strings and struct pointers.
* **Structs:** Used for defining `Record` data and `LanguagePack` for localization.
* **File I/O:** Using `fopen`, `fprintf`, and `fscanf` for data persistence.
* **Buffer Management:** Handling input streams (`stdin`) securely to prevent buffer overflow and skipping issues (using `scanf` formats and buffer clearing techniques).

## ⚙️ How to Build & Run

### Prerequisites
* GCC Compiler (MinGW for Windows or standard GCC for Linux/macOS)

### Compilation
Open your terminal and run:

```bash
gcc main.c -o phonebook.exe
(Note: Ensure all header files like phoneadd.h, phoneupdate.h, etc., are in the same directory.)

Running the App
Bash

./phonebook.exe
📸 Usage Example
Select Language (1: TR, 2: EN).

Choose an operation from the main menu (Add, List, Search, etc.).

When adding a phone number, ensure it matches the selected country's format (e.g., for TR: 5xxxxxxxxx).

👨‍💻 About the Developer
Developed by Ali Okan Yesilyurt. I am an engineering student passionate about Embedded Systems, STM32, and C/C++ programming. This project is part of my journey to master low-level programming concepts.

Feel free to star ⭐ this repository if you find it useful!
