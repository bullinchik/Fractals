#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "function.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void KV(int roll);

void MainWindow::on_save_1_clicked()
{
    // Заберём путь к файлу и его имененем, который будем создавать
    QString newPath = QFileDialog::getSaveFileName(this, tr("Save SVG"),
        path, tr("SVG files (*.svg)"));

    if (newPath.isEmpty())
        return;

    path = newPath;

    QSvgGenerator generator;        // Создаём объект генератора файла
    generator.setFileName(path);    // Устанавливаем путь к файлу, куда будет сохраняться векторная графика
    generator.setSize(QSize(scene->width(), scene->height()));  // Устанавливаем размеры рабочей области документа в миллиметрах
    generator.setViewBox(QRect(0, 0, scene->width(), scene->height())); // Устанавливаем рабочую область в координатах
    generator.setTitle(tr("SVG Example"));                          // Титульное название документа
    generator.setDescription(tr("File created by SVG Example"));    // Описание документа

    // С помощью класса QPainter
    QPainter painter;
    painter.begin(&generator);  // Устанавливаем устройство/объект в котором будем производить отрисовку
    scene->render(&painter);    // Отрисовываем содержимое сцены с помощью painter в целевое устройство/объект
    painter.end();              // Заканчиваем отрисовку

    // По окончанию отрисовки получим векторный файл с содержимым графической сцены
}


void MainWindow::on_pushButton_2_clicked()
{   
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,400,400);

    QSpinBox *spinbox = new QSpinBox;
    spinbox->setRange(0,11);
    int roll = spinbox->value();
    // Создаём первый красный прямоугольник на графической сцене
    QGraphicsRectItem *rect1 = new QGraphicsRectItem();
    rect1->setRect(10,50,100,50);
    rect1->setBrush(QBrush(Qt::red));
    rect1->setPen(QPen(QBrush(Qt::black),2));
    scene->addItem(rect1);

    // И создаём второй синий прямоугольник на графической сцене
    QGraphicsRectItem *rect2 = new QGraphicsRectItem();
    rect2->setRect(150,100,115,75);
    rect2->setBrush(QBrush(Qt::blue));
    rect2->setPen(QPen(QBrush(Qt::black),2));
    scene->addItem(rect2);;
    KV(roll);
}
