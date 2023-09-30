*******************************************************
*  **Author    :**  Matthew Joel       
*  **Email     :**  matthewjoel77@live.com             
*******************************************************

# Read Me  

##  Description of the program

This program reads CSV files of movie award nominations, and then loads this data into 2 binary search trees. In order to be inserted into the tree, the actor and picture data must be comparable. Thus, it uses a custom comparator to sort the trees efficiently. Then, the user can operate a menu and add, search, modify/delete, and sort the data inside the tree. The program will lastly save changes and append to the file.

##  Source files

* *** main.cpp***
   **Main program File**
This is the main file from where the program runs. It creates an instance of our menu, and thats all it does. Everything else is done from elsewhere.

* *** menu.hpp, menu.cpp ***
   **menu files**
  The hpp defines the functions and variables to be used, and the cpp file implements. The menu first initializes both trees, and then it controls the choice logic depending on what the user is trying to do. It is responsible for creating the BST data types as well as a file reader and writer. It is sort of a central hub.

  * *** BST.hpp ***
   **tree header file**
  This file defines the binary search tree and has the methods such as findMax, findMin, print tree, height, and also the different traversal methods. It can store any kind of data or element, as long as its comparable. So to add movies and actors all i had to do was make them comparable. It then sorts the elements and allows us to quickly modify.

 * *** Actors.hpp, Actors.cpp ***
   **Actor Object** These two files are used to create an actor object. It uses a constructor which requires all the appropriate data of a actor object. It also has getters and setters.


 * *** Pictures.hpp, Pictures.cpp ***
   **Picture Object** These two files are used to create an picture object. It uses a constructor which requires all the appropriate data of a picture object. It also has getters and setters, and also it has the << operator and < operator overloaded.  One is overloaded for printing purposes and the other for tree balancing.

* *** Exceptions.hpp ***
   **Exceptions**
This file contains the exceptions that may get thrown from working and uses the data types.

* *** FileIO.hpp, FileIO.cpp ***
   **File read and write**
These 2 files implement the file reading and writing system. They have functions for reading a file into a vector of objects, and also writing a file from a vector of objects.

 *** pictures.csv, actors.csv ***
   **input files**
These 2 files iprovide the data to be inserted into the binary search tree. They are csv files with each entry seperated by a new line, and each attribute seperated by comma.


* *** Makefile ***
  **Makefile** - g++ command to compile the project 



## Compilation
The project can be compiled by issuing the 'make' command on a linux terminal. Upon successful compilation, 
an executable named 'main.exe' will be created in the current directory
   

## Sample output 

Enter actors file name: actor_actress.csv
Actor File loaded successfully

Enter pictures file name: pictures.csv
Picture File loaded successfully

Enter 1 to access Actors/Actresses:
Enter 2 to access Pictures: 
Enter anything else to quit:1


Enter 1 to view the actors/actresses:
Enter 2 to add:
Enter 3 to search (modify/delete):
Enter 4 to sort:
Enter anything else to go save and go back: ...etc..

## Errors 
No errors, however there is not much input validation so you could crash it easily. Also sorting was not implemented.