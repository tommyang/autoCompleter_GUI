#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H

#include <QLineEdit>
#include <QListWidget>
#include <QKeyEvent>
#include "wordlist.h"
class WordList;
class MyLineEdit : public QLineEdit
{
    Q_OBJECT

public:
    QString originalString;
    MyLineEdit(QWidget *parent = 0);
    void setWordList(WordList *);
    ~MyLineEdit();

private slots:
    void storeOriginal(const QString &newString);

protected:
    void keyPressEvent(QKeyEvent *event);


private:
    WordList *wordList;
};

#endif // MYLINEEDIT_H
