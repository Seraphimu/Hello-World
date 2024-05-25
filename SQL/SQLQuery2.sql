USE StudentCourse

DELETE FROM StuCourse WHERE 学号='070208';


--UPDATE StuCourse SET 成绩 = 成绩 + 2 WHERE 课程号='1001';


--INSERT INTO Student VALUES('070205', '李冰','电子信息工程', '男', '1988-10-15', 74, NULL);

--INSERT INTO Course VALUES('2002', '面向对象程序设计', 2, 48, 3);

--INSERT INTO StuCourse VALUES('070207', '1001', 70);
--INSERT INTO StuCourse VALUES('070207', '1002', 80);
--INSERT INTO StuCourse VALUES('070207', '2001', 88);

--INSERT INTO StuCourse VALUES('070208', '1001', 89);
--INSERT INTO StuCourse VALUES('070208', '1002', 92);
--INSERT INTO StuCourse VALUES('070208', '2001', 92);


--UPDATE StuCourse SET 成绩=88 WHERE 学号='070207' AND 课程号=2001;
--UPDATE StuCourse SET 成绩=80 WHERE 学号='070207' AND 课程号=1002;

--SELECT * FROM StuCourse;





----DELETE FROM table_name WHERE condition;
--DELETE FROM StuCourse WHERE 学号='07206' AND 课程号='2001' AND 成绩='98';

--SELECT * FROM StuCourse;







--INSERT INTO Student 
--	VALUES('070205', '李冰','电子信息工程', '男', '1988-10-15', 74, NULL)
-- 改掉第5行的值
--UPDATE table_name
--SET column1 = value1, column2 = value2, ...
--WHERE condition;

--UPDATE Student
--SET 总学分 = 74
--WHERE 学号 = '070202';
--SELECT * FROM Student;







--添加数据到三个表中
--INSERT INTO StuCourse VALUES('07101', '1001', 98);
--INSERT INTO StuCourse VALUES('07101', '1002', 95);
--INSERT INTO StuCourse VALUES('07101', '2001', 88);

--INSERT INTO StuCourse VALUES('07102', '1001', 97);
--INSERT INTO StuCourse VALUES('07102', '1002', 75);
--INSERT INTO StuCourse VALUES('07102', '2001', 82);

--INSERT INTO StuCourse VALUES('07105', '1001', 78);
--INSERT INTO StuCourse VALUES('07105', '1002', 55);
--INSERT INTO StuCourse VALUES('07105', '2001', 81);

--INSERT INTO StuCourse VALUES('07201', '1001', 82);
--INSERT INTO StuCourse VALUES('07201', '1002', 80);
--INSERT INTO StuCourse VALUES('07201', '3001', 85);

--INSERT INTO StuCourse VALUES('07202', '1001', 96);
--INSERT INTO StuCourse VALUES('07202', '1002', 95);
--INSERT INTO StuCourse VALUES('07202', '3001', 98);

--INSERT INTO StuCourse VALUES('07206', '1001', 72);
--INSERT INTO StuCourse VALUES('07206', '1002', 70);
--INSERT INTO StuCourse VALUES('07206', '3001', 80);
--INSERT INTO StuCourse VALUES('07206', '2001', 98);

--SELECT * FROM StuCourse;





--INSERT INTO Student VALUES('070101', '王一平','计算机科学与技术', '男', '1989-5-1', 80, '三好生');

--INSERT INTO Student VALUES('070102', '王红','计算机科学与技术', '女', '1988-12-20', 80, NULL);

--INSERT INTO Student VALUES('070105', '朱江','计算机科学与技术', '男', '1990-1-10', 78, '有补考科目');

--INSERT INTO Student VALUES('070201', '王燕燕','电子信息工程', '女', '1988-11-19', 74, NULL);

--INSERT INTO Student VALUES('070202', '王波','电子信息工程', '男', '1989-2-18', 76, '多次获得奖学金');

--INSERT INTO Student VALUES('070206', '赵红涛','电子信息工程', '男', '1989-3-20', 72, NULL);

--INSERT INTO Student VALUES('070207', '朱平平','电子信息工程', '女', '1990-1-10', 74, NULL);

--INSERT INTO Student VALUES('070208', '李进','电子信息工程', '男', '1989-9-12', 74, NULL);
--SELECT * FROM Student;


--INSERT INTO Course VALUES('1001', '高等数学1', 1, 80, 5);
--INSERT INTO Course VALUES('1002', '高等数学2', 2, 80, 5);
--INSERT INTO Course VALUES('2001', '程序设计基础', 1, 64, 4);
--INSERT INTO Course VALUES('3001', '电路基础', 2, 48, 3);
--SELECT * FROM Course;