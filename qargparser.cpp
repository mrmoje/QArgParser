#include <QApplication>
#include <QStringList>
#include "qargparser.h"

QString QArgByKey(QString key, QChar sep )
{
    bool sepd=sep!=QChar('\0');
    int pos=sepd?qApp->arguments().indexOf(QRegExp('^'+key+sep+"\\S*")):qApp->arguments().indexOf(QRegExp(key));
    return pos==-1?QString::null:
    (sepd?qApp->arguments().at(pos).split(sep).at(1):(++pos<qApp->arguments().size()?qApp->arguments().at(pos):QString::null));
}
