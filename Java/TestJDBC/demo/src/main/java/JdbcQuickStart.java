import java.sql.*;

public class JdbcQuickStart {
    public static void main(String[] args) {
        // 第一步：加载数据库驱动
        // 这一步告诉JVM我们想要使用哪个数据库的驱动程序。
        // 不同的数据库需要不同的驱动类名，例如MySQL通常使用`com.mysql.cj.jdbc.Driver`。
        // 注意：从Java 6开始，可以通过SPI（Service Provider Interface）自动加载驱动，所以这一步通常可以省略。
        
        //如果try段内的代码没有异常，则路过catch，执行后面的语句
        try {
            Class.forName("com.mysql.cj.jdbc.Driver"); // 加载MySQL驱动（示例）
        } catch (ClassNotFoundException e) {
            System.out.println("无法找到数据库驱动类");
            e.printStackTrace();
            return;
        }

        // 第二步：建立数据库连接
        // 使用数据库URL、用户名和密码建立连接。
        // 数据库URL的格式通常为：jdbc:mysql://hostname:port/database_name
        String url = "jdbc:mysql://localhost:3306/homo"; // 替换为你的数据库URL
        String username = "root"; // 替换为你的数据库用户名
        String password = "root"; // 替换为你的数据库密码
        Connection connection = null;
        //尝试用用户名和密码与mysql建立连接
        try {
            connection = DriverManager.getConnection(url, username, password);
        } catch (SQLException e) {
            System.out.println("无法建立数据库连接");
            e.printStackTrace();
            return;
        }

        // 第三步：创建语句对象
        // 创建一个Statement对象，用于执行SQL语句。
        Statement statement = null;
        try {
            statement = connection.createStatement();
        } catch (SQLException e) {
            System.out.println("无法创建Statement对象");
            e.printStackTrace();
            return;
        }

        // 第四步：执行SQL语句
        // 使用Statement对象执行SQL查询语句，并获取结果集。
        // SQL语句不区分大小写
        String sqlQuery = "SELECT UserId FROM UserInfo WHERE PASSWD = \'114514\' "; // 替换为你的SQL查询语句
        ResultSet resultSet = null;
        try {
            //用executeQuery()方法，SQL语句为参数，用此方法发送语句到mysql数据库，并返回结果
            resultSet = statement.executeQuery(sqlQuery);
        } catch (SQLException e) {
            System.out.println("无法执行SQL查询语句");
            e.printStackTrace();
            return;
        }

        // 第五步：处理结果集
        // 遍历结果集，打印每一行的数据。
        try {
            while (resultSet.next()) {
                String UserId = resultSet.getString("userid"); // 假设有一个名为id的列
                // String name = resultSet.getString("name"); // 假设有一个名为name的列
                System.out.println("UserId: " + UserId);
            }
        } catch (SQLException e) {
            System.out.println("无法处理结果集");
            e.printStackTrace();
        }

        // 第六步：关闭资源
        // 在使用完ResultSet、Statement和Connection对象后，应该显式地关闭它们，
        // 以释放数据库资源，避免内存泄漏。通常使用finally块来确保即使发生异常也能关闭资源。
        try {
            if (resultSet != null) {
                resultSet.close();
            }
            if (statement != null) {
                statement.close();
            }
            if (connection != null) {
                connection.close();
            }
        } catch (SQLException e) {
            System.out.println("无法关闭数据库资源");
            e.printStackTrace();
        }
    }
}