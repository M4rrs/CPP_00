# C++ Module 00

An introduction to the basics of C++. Relatively simple, the same way the Piscine C00 was simple.
You'll learn basic C++ syntax, namespaces, classes, members, and a few other concepts. There are only 3 exercises in this module.

## Exercise 00: Megaphone
Toupper(), but in a program. The program takes in your argument, coverts it to all capitals, and prints the output to the terminal. 

![Megaphone](https://media.discordapp.net/attachments/989407433858375683/1082515953243406336/Screenshot_2023-03-07_at_12.10.20.png?width=1714&height=374)

## Exercise 01: PhoneBook
Creating a simple phonebook. It's up to you how pretty you want it to look. But the general rules are:
* PhoneBook can only store a maximum of **8** contacts. The 9th will replace the oldest and so on.
* The PhoneBook must be an instance of the PhoneBook class, and contacts an instance of the Contact class.
* On start-up the phonebook is empty, and user is prompted to enter one of three commands:
	* [ ADD ] : Save a new contact.
		* The contact fields are: first name, last name, nickname, phone number, and
darkest secret.
	* [ SEARCH ] : Search for a specific contact.
		* Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
		* Prompt the user again for the index of the entry to display.
		* Display the contact information, one field per line.
	* [ EXIT ] : Exit the program.

![phonebook](https://cdn.discordapp.com/attachments/989407433858375683/1082519733410201611/Screenshot_2023-03-07_at_12.26.49.png)

## Exercise 02: Account
This one seemed a bit tricky at first. But if you look closely at the log file, it's not too hard at all.