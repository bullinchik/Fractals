#ifndef FRACTALS_H
#define FRACTALS_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsPolygonItem>
#include <QtSvg/QSvgGenerator>
#include <QFileDialog>
#include <QPainter>
#include <QSpinBox>
#include <QColor>
#include <QPolygon>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_save_1_clicked();

    void on_pushButton_2_clicked();

    void recurs_KV(int &pos_1, int &pos_2,int &roll,int &pos_x,int &pos_y,int red,int green, int blue);

    void cikle_KV(int &pos_1,int &pos_2, int &roll, int &pos_x, int &pos_y, int red, int green, int blue);

    void on_triangel_1_clicked();

    void tri(int x, int y, int side, int red, int green, int blue, int flag);

    void on_action_triggered();

private:
    Ui::MainWindow *ui;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QGraphicsScene *scene_2;
    QGraphicsScene *scene;  // Р“СЂР°С„РёС‡РµСЃРєР°СЏ СЃС†РµРЅР°
    QString path;           // РџСѓС‚СЊ СЃРѕС…СЂР°РЅРµРЅРёСЏ С„Р°Р№Р»Р°
};
#endif // FRACTALS_H
