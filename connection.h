#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connection
{
    QSqlDatabase bd;

public:
    Connection();
    bool createconnection();
    void closeconnection();
};

#endif // CONNECTION_H