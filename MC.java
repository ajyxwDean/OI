import java.sql.*;  
  
public class CSystem {  
    private static final String DB_URL = "jdbc:sqlite:coin_system.db";  
    private static final String PLAYERS_TABLE = "players";  
  
    public static void main(String[] args) {  
        // 创建数据库连接  
        try (Connection conn = DriverManager.getConnection(DB_URL)) {  
            // 创建表格  
            createPlayersTable(conn);  
  
            // 添加示例玩家数据  
            addPlayer("Alice", 100);  
            addPlayer("Bob", 50);  
  
            // 获取玩家金币数量并打印结果  
            int aliceCoins = getCoins("Alice");  
            int bobCoins = getCoins("Bob");  
            System.out.println("Alice has " + aliceCoins + " coins.");  
            System.out.println("Bob has " + bobCoins + " coins.");  
  
            // 更新玩家金币数量并再次获取结果  
            updateCoins("Alice", 150);  
            int updatedAliceCoins = getCoins("Alice");  
            System.out.println("After update, Alice has " + updatedAliceCoins + " coins.");  
        } catch (SQLException e) {  
            System.err.println("Error: " + e.getMessage());  
        }  
    }  
  
    private static void createPlayersTable(Connection conn) throws SQLException {  
        String createTableSQL = "CREATE TABLE IF NOT EXISTS " + PLAYERS_TABLE + " (name TEXT PRIMARY KEY, coins INTEGER)";  
        try (Statement stmt = conn.createStatement()) {  
            stmt.executeUpdate(createTableSQL);  
        }  
    }  
  
    private static void addPlayer(String name, int coins) throws SQLException {  
        String insertSQL = "INSERT INTO " + PLAYERS_TABLE + " (name, coins) VALUES (?, ?)";  
        try (PreparedStatement pstmt = DB_URL.prepareStatement(insertSQL)) {  
            pstmt.setString(1, name);  
            pstmt.setInt(2, coins);  
            pstmt.executeUpdate();  
        }  
    }  
  
    private static int getCoins(String name) throws SQLException {  
        String selectSQL = "SELECT coins FROM " + PLAYERS_TABLE + " WHERE name = ?";  
        try (PreparedStatement pstmt = DB_URL.prepareStatement(selectSQL)) {  
            pstmt.setString(1, name);  
            try (ResultSet rs = pstmt.executeQuery()) {  
                if (rs.next()) {  
                    return rs.getInt("coins");  
                } else {  
                    return 0; // 玩家不存在时返回0个金币  
                }  
            }  
        }  
    }  
  
    private static void updateCoins(String name, int coins) throws SQLException {  
        String updateSQL = "UPDATE " + PLAYERS_TABLE + " SET coins = ? WHERE name = ?";  
        try (PreparedStatement pstmt = DB_URL.prepareStatement(updateSQL)) {  
            pstmt.setInt(1, coins);  
            pstmt.setString(2, name);  
            pstmt.executeUpdate();  
        }  
    }  
}
