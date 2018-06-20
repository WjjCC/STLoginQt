#ifndef WPNGLINEEDIT_H
#define WPNGLINEEDIT_H

#include<QPushButton>
#include<QString>
#include<QLineEdit>
#include<QComboBox>
class WPngLineEdit:public QPushButton
{
    Q_OBJECT
public:
   explicit WPngLineEdit(const QString &text, QLineEdit *edit, const QString &strImg);

};

#endif // WPNGLINEEDIT_H
