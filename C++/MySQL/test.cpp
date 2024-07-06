#include <mysql_driver.h>
#include <mysql_connection.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

int main() {
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;

    try {
        // 创建MySQL驱动对象
        driver = sql::mysql::getMySQLDriverManager()->getConnection("tcp://hostname:3306", "root", "root");

        // 创建连接对象
        con = driver->connect("collection");

        // 设置自动提交为false
        con->setAutoCommit(false);

        // 创建SQL语句对象
        sql::Statement *stmt = con->createStatement();

        // 执行SQL查询
        sql::ResultSet *res = stmt->executeQuery("SELECT seal FROM log_table");

        // 遍历结果集并打印每一行的指定列
        while (res->next()) {
            std::cout << "Column Value: " << res->getString("seal") << std::endl;
        }

        // 删除结果集和语句对象
        delete res;
        delete stmt;

        // 提交事务
        con->commit();

        // 关闭连接
        delete con;

    } catch (sql::SQLException &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}