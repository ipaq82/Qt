#include "testqtgit.h"

TestQtGit::TestQtGit(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant TestQtGit::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex TestQtGit::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex TestQtGit::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int TestQtGit::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int TestQtGit::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant TestQtGit::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
