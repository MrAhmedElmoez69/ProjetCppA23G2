#ifndef TABLE_H
#define TABLE_H
#include<QString>
#include <QSqlQueryModel>
#include <QString>
#include <QSqlQueryModel>
#include<QTableView>


class Table
{
 int NUM_TABLE;
int NB_CHAISES;
QString EMPLACEMENT;
QString DISPONIBILITE;
int DEBARRASSAGE;
public:

  void setNUM_TABLE(int n);
  void setNB_CHAISES(int n);
  void setEMPLACEMENT(QString n);
  void setDISPONIBILITE(QString n);
  void setDEBARRASSAGE(int n);
  int get_NUM_TABLE();
  int get_NB_CHAISES();
  QString get_EMPLACEMENT();
  QString get_DISPONIBILITE();
  int get_DEBARRASSAGE();

    Table(int);
   Table(int,int,QString,QString,int);
    Table();
    bool ajouter();
    bool supprimer(int);
    QSqlQueryModel * afficher();
    bool modifier();
     void recherche(QTableView* table,int NUM_TABLE);

      void tri_Num(QTableView* table);
      void tri_NB(QTableView* table);
    //int lastId();

};

#endif // TABLE_H
#ifndef TABLE_H
#define TABLE_H
#include<QString>
#include <QSqlQueryModel>
#include <QString>
#include <QSqlQueryModel>
#include<QTableView>


class Table
{
 int NUM_TABLE;
int NB_CHAISES;
QString EMPLACEMENT;
QString DISPONIBILITE;
int DEBARRASSAGE;
public:

  void setNUM_TABLE(int n);
  void setNB_CHAISES(int n);
  void setEMPLACEMENT(QString n);
  void setDISPONIBILITE(QString n);
  void setDEBARRASSAGE(int n);
  int get_NUM_TABLE();
  int get_NB_CHAISES();
  QString get_EMPLACEMENT();
  QString get_DISPONIBILITE();
  int get_DEBARRASSAGE();

    Table(int);
   Table(int,int,QString,QString,int);
    Table();
    bool ajouter();
    bool supprimer(int);
    QSqlQueryModel * afficher();
    bool modifier();
     void recherche(QTableView* table,int NUM_TABLE);

      void tri_Num(QTableView* table);
      void tri_NB(QTableView* table);
    //int lastId();

};

#endif // TABLE_H
