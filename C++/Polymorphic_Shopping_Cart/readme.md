*******************************************************
*  **Author      :** Matthew Joel       
*  **Email       :** matthewjoel77@live.com
*******************************************************

# Read Me  


##  Description of the program

This program allows the user to create products and add them to a shopping cart. The base product is an ADT and cannot be initialized, rather the products that inheret from it can be intialized. The user can then add these products to their cart, remove them, and display them.
 
##  Source files

* *** main.cpp ***
   **Main program File**
This is the main file from where the program runs. It doesn't have much code, besides that which creates objects and builds a cart. It is mainly used as a driver for the other functions.

* *** product.cpp ***
   **Main product File**
This is the base product from which all other products inherit from. It is an Abstract data type, and thus cannot be intialized on its own. It contains constructors as well as some static member variables.

 * *** product.hpp ***
   **Product Header File** This file contains all the definitions and declarations for the product cpp. It seperates the variables and functions by if they're private or public.

* *** videoproduct.cpp, audioproduct.cpp, bookproduct.cpp ***
   **inherited Files**
These files are inherited objects from product. they use the default product constructor, as well as they adds their own attributes.

* *** videoproduct.hpp, audioproduct.hpp, bookproduct.hpp ***
   **inherited header Files**
These header files declare the inheritance from product that the other files use. The new constructors are also defined here first. They seperate data into private and public


* *** ebookproduct.cpp, paperbookproduct.cpp ***
   **inherited Files**
These files are inherited objects from bookproduct. This is a double inheritance, as book inherits from product and they inherit from book. they use the default product constructor, as well as they adds their own attributes. also they make use of virtual functions.


* *** ebookproduct.hpp, paperbookproduct.hpp ***
   **inherited header Files**
These files are the headers for the 2 book sub products. They declare the inheritance from book, and create constructors for their specific book type. They also define member variables.

* *** cart.hpp ***
   **cart header File**
This file defines the composing elements of the cart object. The file defines what will be private and public, and also declares a constant of the array size.

* *** cart.cpp ***
   **cart File**
This file creates the cart which is used to store the products a user wishes to buy. It uses a NameType struct to assign the owner. It uses an array of product pointers to store the selections. It also keeps track of the number of items, and prevents the user from adding more than 7.
   
   
##  Circumstances of programs

   * The program runs successfully.  
   * The program was developed and tested on replit.
          
  *
  *
  *
  *
  *
  *
  * 

