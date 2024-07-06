-- CREATE DATABASE HOMO;

-- USE HOMO;

CREATE TABLE HomoInfo (
	homoName VARCHAR(20),
	homoAddress VARCHAR(20),
	homoCountry VARCHAR(20),
	homoId VARCHAR(20),
	homoAge INT
);


CREATE DATABASE Collection;

USE collection;



CREATE TABLE log_table (
	log_time DATE,
	study_new_knowledge BOOL, 
	refresh_old_knowledge BOOL, 
	study_my_interesting BOOL, 
	log_and_darily BOOL,
	read_book BOOL, 
	onani	BOOL,
	seal BOOL,
	num_of_seal INT
);


INSERT INTO log_table (
	log_time,
	study_new_knowledge, 
	refresh_old_knowledge, 
	study_my_interesting, 
	log_and_darily,
	read_book, 
	onani,
	seal,
	num_of_seal
);