#include <string>

class DbClient {
public:
    void execute(const std::string& sql) { (void)sql; }
    void executeQuery(const std::string& sql) { (void)sql; }
};

void runDbLayer() {
    DbClient db;

    std::string createSql = "CREATE TABLE Users (id INT, name TEXT)";
    db.execute(createSql);

    std::string insertSql = "INSERT INTO Users (id, name) VALUES (1, 'Alice')";
    db.execute(insertSql);

    std::string selectSql = "SELECT id, name FROM Users WHERE id = ?";
    db.executeQuery(selectSql);
}

