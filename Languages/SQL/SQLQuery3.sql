--2.1

select Student.*, 课程号, 成绩 from Student, StuCourse
where Student.学号 = StuCourse.学号

--2.2
select Student.*, 课程号, 成绩 from Student, StuCourse
where Student.学号 = StuCourse.学号 and 专业名 = '计算机科学与技术'

--2.3

select Student.*, 课程号, 成绩 from Student, StuCourse
where Student.学号 = StuCourse.学号 and 成绩 < 60

--2.4
select a.*, 课程名, 成绩 from Student a, StuCourse b, Course c
where a.学号 = b.学号 and b.课程号 = c.课程号

--2.5
select a.*, 课程名, 成绩等级 = 
case
	when 成绩 >= 90 then '优'
	when 成绩 >= 80 then '良'
	when 成绩 >= 70 then '中'
	when 成绩 >= 60 then '及格'
	else '不及格'
end

from Student a, StuCourse b, Course c
where a.学号 = b.学号 and b.课程号 = c.课程号

-- 2.6

select a.*, 课程号, 成绩 
from Student a LEFT JOIN StuCourse b on a.学号 = b.学号













--3.1
select * from Student
where 出生时间 = 
(
	select 出生时间 from Student where 姓名 = '王一平'
)


--3.2

select * from Student
	where 学号 not in
	(
		select 学号 from StuCourse
	)


--3.3
select * from Student where exists
(
	select * from StuCourse a, Course b
	where 学号 = a.学号 and a.课程号 = b.课程号 and 课程名 = '电路基础'
)


--3.4

select 学号, 姓名 from Student where 学号 in
(
	select 学号 from StuCourse x
	where not exists
	(
		select * from StuCourse y
		where y.学号 = '070101' and not exists
		(
			select * from StuCourse z
			where z.学号 = x.学号 and z.课程号 = y.课程号
		)
	)
)

--3.5
select * from Student where 学号 not in
(
	select 学号 from StuCourse where 课程号 = 
	(
		select 课程号 from Course where 课程名 = '程序设计基础'
	)
)





























----4.1
--SELECT SUM(学时) as 总学时
--from Course

----4.2
--select avg(成绩) as 计算机专业学生平均成绩
--from StuCourse
--where 学号 in
--	(
--		select 学号 from Student
--			where 专业名='计算机科学与技术'
--	)

----4.3
--select avg(成绩) as 电子信息工程专业高等数学1课程的平均成绩
--from StuCourse
--where 课程号 = 
--(
--	select 课程号
--	from course 
--	where 课程名 = '高等数学 1'
--	and 学号 in
--	(
--		select 学号 from Student where 专业名 = '电子信息工程'
--	)
--)

--4.4
select max(成绩) as '电信高数1最高成绩', min(成绩) as '电子信息高数1最低成绩'
from StuCourse a, Student b, Course c
where a.课程号 = c.课程号 and a.学号 = b.学号 and 课程名= '高等数学 1'
and 专业名 = '电子信息工程'

--4.5
select count(*) as 总人数
from Student
where 专业名= '电子信息工程'












--SELECT 专业名, 课程名, avg(成绩) 平均成绩
--from StuCourse a, Student b, Course c
--where a.课程号 = c.课程号 and a.学号 = b.学号
--group by 专业名, 课程名






----select 课程名, count(学号) as '选修人数'
--from StuCourse a,Course b
--where a.课程号 = b.课程号
--group by 课程名


--SELECT 专业名, count(学号) 学生数
--FROM Student
--Group by 专业名







---- (3)	将各课程按平均成绩由高到低排序
--SELECT 课程号, AVG(成绩)
--	FROM StuCourse
--	GROUP BY 课程号
--	ORDER BY AVG(成绩) DESC







---- (2)	将计算机科学与技术专业的“程序设计基础”课程按照成绩由高到低排序。
--SELECT a.学号, 姓名, 成绩
--	FROM StuCourse a, Student b, Course c
--	WHERE a.学号=b.学号 AND a.课程号 = c.课程号 AND 课程名='程序设计基础'
--	ORDER BY 成绩 DESC



--SELECT * FROM Student;

--查询每个学生的专业名和总分数
--SELECT 专业名, 总学分 FROM Student;

--(3)	查询学号为“070101”学生的姓名和专业名。
-- SELECT <COLUMNS_NAME> FROM <TABLE_NAME> WHERE <CONDITION>
--SELECT 姓名, 专业名 FROM Student WHERE 学号='070101';


--4 查找所有的专业名
--DISTINCT去重？？
-- SELECT DISTINCT <COLUMN_NAME>

--SELECT DISTINCT 专业名 FROM Student;
--select distinct 姓名 FROM STUDENT;
--SELECT 专业名 FROM STUDENT;


--(5)	查询Student表中计算机科学与技术专业学生的学号、姓名和总学分，
-- 将结果中名列的标题分别指定为number、name、mark
--SELECT 学号 AS NUMBER, 姓名 AS NAME, 总学分 AS MARK 
--	FROM STUDENT WHERE 专业名='计算机科学与技术';

--用AS可以替换表头

--select 学号, 姓名, 总学分 FROM STUDENT WHERE 专业名='计算机科学与技术';



--(6)	找出所有在1989年出生的“电子信息工程”专业学生的信息。
--时间类型加单引号
--SELECT * FROM STUDENT WHERE 出生时间 BETWEEN '1989-1-1' AND '1989-12-31' AND 专业名='电子信息工程';

-- 找出所有姓王的学生信息
-- WHERE <COLUNS_NAME> LIKE <CONDITION_NAME_%>
--SELECT * FROM STUDENT WHERE 姓名 LIKE '王%';




--(1)	查找平均成绩在85分以上学生的学号和平均成绩
--SELECT 学号, AVG(成绩)AS'平均成绩'
--	FROM STUCOURSE GROUP BY 学号 HAVING AVG(成绩) >= 85;

-- 查找选修人数超过3人的课程名和选修人数。
--SELECT 课程名, COUNT(学号)AS'选修人数'
--	FROM STUCOURSE  a, COURSE b
--	WHERE a.课程号 = b.课程号
--	GROUP BY 课程名
--	HAVING COUNT(学号) > 3;


-- (1)	将学生数据按出生时间排序
--SELECT * FROM STUDENT ORDER BY 出生时间;

-- (2)	将计算机科学与技术专业的“程序设计基础”课程按照成绩由高到低排序。

--SELECT a.学号, 姓名, 成绩
--	FROM STUCOURSE 
--	WHERE a.学号 = b.学号 AND a.课程号 = c.课程号 AND 课程名 = '程序设计基础' 
--	ORDER BY 成绩DESC;


























--CREATE TABLE Student
--(
--	学号 CHAR(6) PRIMARY KEY,
--	姓名 CHAR(12) NOT NULL,
--	专业名 VARCHAR(20),
--	性别 CHAR(2) NOT NULL,
--	出生时间 SMALLDATETIME NOT NULL,
--	总学分 INT,
--	备注 TEXT
--)

--INSERT INTO Student VALUES('070101', '王一平','计算机科学与技术', '男', '1989-5-1', 80, '三好生');

--INSERT INTO Student VALUES('070102', '王红','计算机科学与技术', '女', '1988-12-20', 80, NULL);

--INSERT INTO Student VALUES('070105', '朱江','计算机科学与技术', '男', '1990-1-10', 78, '有补考科目');

--INSERT INTO Student VALUES('070201', '王燕燕','电子信息工程', '女', '1988-11-19', 74, NULL);

--INSERT INTO Student VALUES('070202', '王波','电子信息工程', '男', '1989-2-18', 74, '多次获得奖学金');

--INSERT INTO Student VALUES('070206', '赵红涛','电子信息工程', '男', '1989-3-20', 72, NULL);

--INSERT INTO Student VALUES('070207', '朱平平','电子信息工程', '女', '1990-1-10', 74, NULL);

--INSERT INTO Student VALUES('070208', '李进','电子信息工程', '男', '1989-9-12', 74, NULL);

--SELECT * FROM STUDENT;