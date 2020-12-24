#ifndef JOSSVIEWER_H
#define JOSSVIEWER_H

#include <QMainWindow>

class JossViewer : public QMainWindow
{
    Q_OBJECT

public:
    JossViewer(QWidget *parent = nullptr);
    ~JossViewer();
};
#endif // JOSSVIEWER_H
