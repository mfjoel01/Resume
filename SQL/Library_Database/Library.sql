-- Matthew Joel
CREATE TABLE BOOK (
  Book_id INT PRIMARY KEY,
  Title VARCHAR(255),
  Publisher_name VARCHAR(255),
  FOREIGN KEY (Publisher_name) REFERENCES PUBLISHER(Name)

);

CREATE TABLE BOOK_AUTHORS (
  Book_id INT,
  Author_name VARCHAR(255) PRIMARY KEY,
  FOREIGN KEY (Book_id) REFERENCES BOOK(Book_id)
);

CREATE TABLE PUBLISHER (
  Name VARCHAR(255) PRIMARY KEY,
  Address VARCHAR(255),
  Phone VARCHAR(10)
);

CREATE TABLE BOOK_COPIES (
  Book_id INT,
  Branch_id INT,
  No_of_copies INT,
  FOREIGN KEY (Book_id) REFERENCES BOOK(Book_id),
  FOREIGN KEY (Branch_id) REFERENCES LIBRARY_BRANCH(Branch_id)
);

CREATE TABLE BOOK_LOANS (
  Book_id INT,
  Branch_id INT,
  Card_no INT,
  Date_out DATE,
  Due_date DATE,
  FOREIGN KEY (Book_id) REFERENCES BOOK(Book_id),
  FOREIGN KEY (Branch_id) REFERENCES LIBRARY_BRANCH(Branch_id),
  FOREIGN KEY (Card_no) REFERENCES BORROWER(Card_no)
);

CREATE TABLE LIBRARY_BRANCH (
  Branch_id INT PRIMARY KEY,
  Branch_name VARCHAR(255),
  Address VARCHAR(255)
);

CREATE TABLE BORROWER (
  Card_no INT PRIMARY KEY,
  Name VARCHAR(255),
  Address VARCHAR(255),
  Phone VARCHAR(10)
);

INSERT INTO BOOK (Book_id, Title, Publisher_name) VALUES
  (1, 'The Great Gatsby', 'Scribner'),
  (2, 'To Kill a Mockingbird', 'HarperCollins'),
  (3, '1984', 'Secker & Warburg'),
  (4, '12 Rules for Life', 'Random House Canada Penguin'),
  (5, 'The Catcher in the Rye', 'Little, Brown and Company');
INSERT INTO BOOK_AUTHORS (Book_id, Author_name) VALUES
  (1, 'F. Scott Fitzgerald'),
  (2, 'Harper Lee'),
  (3, 'George Orwell'),
  (4, 'Jordan Peterson'),
  (5, 'J.D. Salinger');
INSERT INTO LIBRARY_BRANCH (Branch_id, Branch_name, Address) VALUES
  (1, 'RiNo', '123 Platte Street'),
  (2, 'Colfax', '456 Colfax Avenue');
INSERT INTO BORROWER (Card_no, Name, Address, Phone) VALUES
  (1, 'John Smith', '123 Maple Street', '3035551234'),
  (2, 'Mr Wayne', '456 Oak Avenue', '7205555678'),
  (3, 'Robert Johnson', '789 Elm Road', '8015559012');
INSERT INTO BOOK_LOANS (Book_id, Branch_id, Card_no, Date_out, Due_date) VALUES
  (1, 1, 1, '2023-06-01', '2023-06-08'),
  (2, 1, 2, '2023-06-02', '2023-06-09'),
  (3, 2, 3, '2023-06-03', '2023-06-10'),
  (4, 1, 1, '2023-06-04', '2023-06-11'),
  (5, 2, 2, '2023-06-05', '2023-06-12');
  
  
DELETE FROM BOOK WHERE Book_id = 3;


/* Error: FOREIGN KEY contstraint failed. This error is happening 
because we need to first delete the corresponding loan before trying
 to delete a book. We are trying to delete a row that is 
 referenced as a foreign key in another row.*/