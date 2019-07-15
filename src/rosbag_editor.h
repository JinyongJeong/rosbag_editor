#ifndef ROSBAG_EDITOR_H
#define ROSBAG_EDITOR_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QDir>

#include <rosbag/bag.h>
#include <rosbag/view.h>

namespace Ui {
class RosbagEditor;
}

class RosbagEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit RosbagEditor(QWidget *parent = nullptr);
    ~RosbagEditor();

private slots:
    void closeEvent(QCloseEvent *event);
    void on_pushButtonLoad_pressed();

    void on_pushButtonMove_pressed();

    void on_tableWidgetInput_itemSelectionChanged();

    void on_listWidgetOutput_itemSelectionChanged();

    void on_pushButtonRemove_pressed();

    void on_pushButtonSave_pressed();

private:
    Ui::RosbagEditor *ui;
    QString _loade_filename;
    QString _previous_load_path;
    QString _previous_save_path;
    rosbag::Bag _bag;
};

#endif // ROSBAG_EDITOR_H
