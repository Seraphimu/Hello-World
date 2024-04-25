-- CREATE DATABASE Homo
USE homo
CREATE TABLE UserInformation
(
	UserName VARCHAR(20) NOT NULL,
	UserId VARCHAR(20) NOT NULL PRIMARY KEY(UserName, UserId),
	UserAddress VARCHAR(40),
	UserPassword VARCHAR(16)
);