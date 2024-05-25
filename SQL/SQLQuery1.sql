--CREATE DATABASE StudentCourse
--USE StudentCourse
--CREATE TABLE Student
--(
--	学号 CHAR(6) PRIMARY KEY,
--	姓名 CHAR(12) NOT NULL,
--	专业名 VARCHAR(20),
--	性别 CHAR(2) NOT NULL,
--	出生时间 CHAR(2) NOT NULL,
--	总学分 INT,
--	备注 TEXT
--)
--GO

---- 在StudentCourse数据库中创建Course表
--USE StudentCourse
----CREATE TABLE <TABLE_NAME>
--CREATE TABLE Course
--(
--	课程号 CHAR(4) NOT NULL PRIMARY KEY,
--	课程名 VARCHAR(40) NOT NULL,
--	开学日期 INT,
--	学时 INT,
--	学分 INT,
--)

USE StudentCourse
CREATE TABLE StuCourse
(
	学号 char(6) not null,
	--  同时将学号、课程号设置为主码
	课程号 char(4) not null primary key(学号, 课程号),
	成绩 real,
)

--使用sa用户登陆，先将sa启用，再设置密码，再将数据库设置为可windows和sqlserver身份登陆
--
--