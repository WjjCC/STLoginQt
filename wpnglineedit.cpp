#include "wpnglineedit.h"
#include <QHBoxLayout>
#include<QBoxLayout>
#include<QDebug>
WPngLineEdit:: WPngLineEdit(const QString &text, QLineEdit *edit, const QString &strImg):QPushButton(text,edit)
{
    QSize size = QSize(13,13);
   // setMinimumSize(size);
    setMaximumSize(size); // 设置按钮的大小为图片的大小
    setFocusPolicy(Qt::NoFocus); // 得到焦点时，不显示虚线框
    setFlat(true);
    //setText(text);
    setCursor(QCursor(Qt::PointingHandCursor));

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->setContentsMargins(5, 1, 1, 1);
    buttonLayout->addStretch();
    buttonLayout->addWidget(this);
    buttonLayout->setDirection(QBoxLayout::RightToLeft);
    edit->setLayout(buttonLayout);

    // 设置输入框中文件输入区，不让输入的文字在被隐藏在按钮下
    edit->setTextMargins(size.width()+7, 1, 1 , 1);

    // 设置style 图片位置url改为自己的。
    QString qss = QString(".WPngLineEdit{background-image:url(:/img/%1);}").arg(strImg);
    setStyleSheet(qss);
    setEnabled(false);
}
