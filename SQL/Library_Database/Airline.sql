-- Matthew Joel
CREATE TABLE Airport (
    Airport_code VARCHAR(15) PRIMARY KEY,
    Name VARCHAR(255),
    City VARCHAR(255),
    State VARCHAR(255)
);
CREATE TABLE Flight (
    Flight_number VARCHAR(15) PRIMARY KEY,
    Airline VARCHAR(255),
    Weekdays VARCHAR(255)
);
CREATE TABLE Flight_Leg (
    Flight_number VARCHAR(15),
    Leg_number INT,
    Departure_airport_code VARCHAR(15),
    Scheduled_departure_time TIME,
    Arrival_airport_code VARCHAR(15),
    Scheduled_arrival_time TIME,
    PRIMARY KEY (Flight_number, Leg_number),
    FOREIGN KEY (Departure_airport_code) REFERENCES Airport(Airport_code),
    FOREIGN KEY (Arrival_airport_code) REFERENCES Airport(Airport_code),
    FOREIGN KEY (Flight_number) REFERENCES Flight(Flight_number)
);
CREATE TABLE Leg_Instance (
    Flight_number VARCHAR(15),
    Leg_number INT,
    Date DATE,
    Number_of_available_seats INT,
    Airplane_id VARCHAR(15),
    Departure_airport_code VARCHAR(15),
    Departure_time TIME,
    Arrival_airport_code VARCHAR(15),
    Arrival_time TIME,
    PRIMARY KEY (Flight_number, Leg_number, Date),
    FOREIGN KEY (Flight_number, Leg_number) REFERENCES Flight_Leg(Flight_number, Leg_number),
    FOREIGN KEY (Airplane_id) REFERENCES Airplane(Airplane_id),
    FOREIGN KEY (Departure_airport_code) REFERENCES Airport(Airport_code),
    FOREIGN KEY (Arrival_airport_code) REFERENCES Airport(Airport_code)
);
CREATE TABLE Fare (
    Flight_number VARCHAR(15),
    Fare_code VARCHAR(15),
    Amount DECIMAL(10,2),
    Restrictions VARCHAR(255),
    PRIMARY KEY (Flight_number, Fare_code),
    FOREIGN KEY (Flight_number) REFERENCES Flight(Flight_number)
);
CREATE TABLE Airplane_Type (
    Airplane_type_name VARCHAR(255) PRIMARY KEY,
    Max_seats INT,
    Company VARCHAR(255)
);
CREATE TABLE Can_Land (
    Airplane_type_name VARCHAR(255),
    Airport_code VARCHAR(15),
    PRIMARY KEY (Airplane_type_name, Airport_code),
    FOREIGN KEY (Airplane_type_name) REFERENCES Airplane_Type(Airplane_type_name),
    FOREIGN KEY (Airport_code) REFERENCES Airport(Airport_code)
);
CREATE TABLE Airplane (
    Airplane_id VARCHAR(15) PRIMARY KEY,
    Total_number_of_seats INT,
    Airplane_type VARCHAR(255),
    FOREIGN KEY (Airplane_type) REFERENCES Airplane_Type(Airplane_type_name)
);
CREATE TABLE Seat_Reservation (
    Flight_number VARCHAR(15),
    Leg_number INT,
    Date DATE,
    Seat_number VARCHAR(3),
    Customer_name VARCHAR(255),
    Customer_phone VARCHAR(10),
    PRIMARY KEY (Flight_number, Leg_number, Date, Seat_number),
    FOREIGN KEY (Flight_number, Leg_number, Date) REFERENCES Leg_Instance(Flight_number, Leg_number, Date)
);
