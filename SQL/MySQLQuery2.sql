`user_001_data``userinfo`CREATE DATABASE Test;
USE Test;
-- create table <table_name> (<columns_name> <type>, ...)最后一个不用带逗号
CREATE TABLE TestTable(
	userid VARCHAR(20),
	passwd VARCHAR(20), 
	address VARCHAR(20)
)

-- insert into <talbe_name>(column1, column2, ...)
-- values (), (), (),...;
INSERT INTO TestTable (userid, passwd, address)
VALUES 
('田所浩二', '114514', '下北泽'), 
('我修院', '114515', '下北泽'), 
('德川裕太', '114516', '下北泽');



-- messagebox
CREATE DATABASE `message_board`
/*!40100 DEFAULT CHARACTER SET utf8 COLLATE utf8_bin */
/*!80016 DEFAULT ENCRYPTION='N' */;

CREATE TABLE `message_board`.`MESSAGE` (
  `mid` INT NOT NULL AUTO_INCREMENT,
  `title` VARCHAR(50) COLLATE utf8_bin NOT NULL,
  `content` VARCHAR(200) COLLATE utf8_bin NOT NULL,
  `userid` VARCHAR(20) COLLATE utf8_bin NOT NULL,
  PRIMARY KEY (`mid`)
) ENGINE=INNODB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

CREATE TABLE `message_board`.`USER` (
  `userid` VARCHAR(20) COLLATE utf8_bin NOT NULL,
  `password` VARCHAR(20) COLLATE utf8_bin NOT NULL,
  PRIMARY KEY (`userid`)
) ENGINE=INNODB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

INSERT INTO USER (userid, PASSWORD)
VALUES 
('田所浩二', '114514'),
('我修院卓', '114515'), 
('德川裕太', '114516');

SELECT * FROM USER;


SELECT * FROM `message` WHERE userid = userid AND PASSWORD= PASSWORD

INSERT INTO MESSAGE VALUES(114, 'FF', 'GG', '田所浩二');


SELECT DISTINCT * FROM USERDATA;

SELECT * FROM USERINFO;



DELETE FROM userdata WHERE userid='TestUser1';















CREATE DATABASE `contact`

USE contact;


CREATE TABLE user_001_data
(
	id VARCHAR(20),
	username VARCHAR(20),
	email VARCHAR(20),
	address VARCHAR(20)
);
















CREATE DATABASE HOMO;

USE HOMO;

CREATE TABLE UserInfo(
	userId VARCHAR(20), 
	passwd VARCHAR(20)
);

`userinfo`






CREATE TABLE userData
(
	id VARCHAR(20),
	username VARCHAR(20),
	email VARCHAR(20),
	address VARCHAR(20), 
	-- 谁的库
	who VARCHAR(20)
);



SELECT * FROM userdata;