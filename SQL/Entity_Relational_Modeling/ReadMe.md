*******************************************************
*  **Author    :**  Matthew Joel       
*  **Email     :**  matthewjoel77@live.com             
*******************************************************

# Video Service Relational Model

A company that provides video streaming wants you to model a database for the company’s
OLTP. The information you must do so is as follows

* There are platform users, each with a username, password, email address, and credit card
number. Users can be either persons or organizations (like a hotel). For an organization, we will
store the number of employees and, for persons, their physical address.
* Users can rent movies. We know each movie's name, description, country of origin, movie cast,
available languages (audio and subtitles), and a unique movie number within the system.
* Each movie may have one or more genres.
* We also know the list of preferred genres for each user.
* The system should store which movie was rented for each user, the rental period, and the rental
cost. A user can rent a movie more than once.
* For the cast, we know the actor’s name and the fictional name of each actor in each movie.
* Each user can provide a single rating for each movie the user rented.
## Files:
1) EER.pdf - An Enhanced Entity-Relationship (EER) Model, with all possible structural
restrictions as well as all non-structural restrictions.
2) RM.pdf - Translation of the presented EER to Relational Model, with the primary key, candidate keys, and foreign keys.