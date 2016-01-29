/*
 * Author: Huayin Zhou
 * Description: WordList is a customized QListWidget to keep track of the text
 * changes in QLineEdit and print strings to the changes accordingly by
 * calling pa3 function:
 * vector<std::string> autocomplete(unsigned int num_words, std::string prefix).
 * Date: 01/28/2015
 */
#ifndef WORDLIST_H
#define WORDLIST_H

#include <QListWidget>
#include <QString>
#include <QLineEdit>

class WordList : public QListWidget
{
    Q_OBJECT

public:
    WordList(QWidget *parent = 0);
    ~WordList();

private slots:
    void setItems(const QString &newString);

private:
    QLineEdit *lineEdit;
};

#endif // WORDLIST_H