/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright 2021  <copyright holder> <email>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License or (at your option) version 3 or any later version
 * accepted by the membership of KDE e.V. (or its successor approved
 * by the membership of KDE e.V.), which shall act as a proxy
 * defined in Section 14 of version 3 of the license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QString>
#include <QSqlDatabase>

/**
 * A "driver" for QuarryDB.
 * 
 * @remarks QuarryDB drivers are DBManager instances 
 * that interface with one of Qt5's SQL Drivers.
 */
class DBManager
{
public:
    /**
     * Default constructor
     */
    DBManager(const QString& path);

    /**
     * Destructor
     */
    ~DBManager();
    
    virtual QString getSQLType() const { return QString::fromStdString("QSQLITE"); };
    
    virtual bool executeQuery(const QString& query) { return true; };
    
    virtual bool createTable(const QString& name

private:
    QSqlDatabase m_db;
    QString filename;
};

#endif // DBMANAGER_H
