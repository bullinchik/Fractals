#include "Fractals.h"
#include "ui_mainwindow.h"
#include "Info.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Fractals");
    setFixedSize(1000,870); //Фискируем размер окна
    scene = new QGraphicsScene();   // Инициализируем графическую сцену
    ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену в graphicsView
    scene->setSceneRect(0,0,750,750); // Устанавливаем область графической сцены
}

MainWindow::~MainWindow()
{
    delete ui;
}

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
    painter.begin(&generator);  // Устанавливаем устройство/объект в котором будем производить отрисовкуre
    scene->render(&painter);    // Отрисовываем содержимое сцены с помощью painter в целевое устройство/объект
    painter.end();              // Заканчиваем отрисовку

    // По окончанию отрисовки получим векторный файл с содержимым графической сцены
}



//Функция построения салфетки Серпинского
void MainWindow::cikle_KV(int &pos_1,int &pos_2, int &roll, int &pos_x, int &pos_y,int red, int green, int blue){
    int arr_pos[5] = {243,81,27,9,3};
    pos_2 = pos_y;

    for (int i = 0; i <3 ;i++ ) {


        pos_1 = pos_x;

        for (int j =0;j<3 ;j++ ) {
            QGraphicsRectItem *rect1 = new QGraphicsRectItem;\
            //Создание белого квадрата на графической сцене
            rect1->setRect(pos_1,pos_2,arr_pos[roll-1],arr_pos[roll-1]);
            rect1->setBrush(QBrush(Qt::white));
            scene->addItem(rect1);
            //смещение позиции по оси х верхнего левого угла строемого выреза в квадрате
            pos_1+=3*arr_pos[roll-1];
        }

// изменение позиции по оси Y
        pos_2+=3*arr_pos[roll-1];
    }
// смещение на позицию построения следующего набора квадратов по Х
    pos_x +=9*arr_pos[roll-1];

    //Проверка не выходят ли наши координаты за пределеы большого цветного квадрата по оси Х и Y
    if ((pos_y+6*arr_pos[roll-1])>(729-2*arr_pos[roll-1])&&(pos_x+3*arr_pos[roll-1])>(729- 2*arr_pos[roll-1]))
       {
        // изменение начальной точки построение на более высокий уровень
           pos_x =1 + arr_pos[roll-2];
           pos_y = 1 + arr_pos[roll-2];
           roll--;
           // рекурсивное обращение к самой себе
           recurs_KV(pos_1,pos_2,roll,pos_x,pos_y, red, green , blue);
       }
    else


        if ((pos_x+3*arr_pos[roll-1])>(729- 2*arr_pos[roll-1]))

        {
            //проверка на выход координаты начала построения по оси Х
            pos_x= 1+ arr_pos[roll-1];
            pos_y+=9*arr_pos[roll-1];
            cikle_KV(pos_1,pos_2,roll,pos_x,pos_y, red, green , blue);
        }


    else

        {//обращение к построению большого выреза в центре
        recurs_KV(pos_1,pos_2,roll,pos_x,pos_y,red,green,blue);
    }
}




//Функция обработки нажатия на кнопку
void MainWindow::on_pushButton_2_clicked()
{
    //очистка сцены перед построением фигуры
    scene->clear();
    spinBox = new QSpinBox;
    //обработка глубины рекурсии квадрата
    int roll = ui->spinBox->value();

    int pos_1=1;
    int pos_2=1;
    int pos_x = 1;
    int pos_y=1;
    int arr_pos[6] = {243,81,27,9,3};


    pos_x = pos_x+ arr_pos[roll-1];
    pos_y = pos_y+ arr_pos[roll-1];

    //обработка цвета фрактала
    int red = ui->spinBox_3->value();
    int green =  ui->spinBox_4->value();
    int blue = ui->spinBox_5->value();

    //проверка на минимальность глубины построения
    if (roll == 0)
    {
        //построение простого квадрата
        QGraphicsRectItem *rect1 = new QGraphicsRectItem;
        rect1->setRect(1,1,729,729);
        rect1->setBrush(QBrush(QColor(red,green,blue)));
        scene->addItem(rect1);
    }

    else

    {
        //построение простого квадрата и вызов рекурсивной функции
        QGraphicsRectItem *rect1 = new QGraphicsRectItem;
        rect1->setRect(1,1,729,729);
        rect1->setBrush(QBrush(QColor(red,green,blue)));
        scene->addItem(rect1);
        recurs_KV(pos_1,pos_2,roll,pos_x,pos_y,red,green,blue);
    }

}

//функция построение наибольшего квадрата
void MainWindow::recurs_KV(int &pos_1, int &pos_2,int &roll,int &pos_x,int &pos_y, int red,int green, int blue){

    if (roll== 0){
        return ;
    }

    else if (roll == 1) {
// построение большого квадрата в центре
        QGraphicsRectItem *rect1 = new QGraphicsRectItem;
        rect1->setRect(244,244, 243, 243);
        rect1->setBrush(QBrush(QColor(Qt::white)));
        scene->addItem(rect1);
        roll--;
    }

    else

    {
        //обращение к рекрусивной функции в случае ошибки вызова функции
        cikle_KV(pos_1,pos_2,roll,pos_x,pos_y, red, green, blue);
    }
}


//функция построения треугольника серпинского
void MainWindow::on_triangel_1_clicked()
{
    //очищение сцены перед построением фигуры
    scene->clear();

    spinBox_2 = new QSpinBox;
    int roll = ui->spinBox_2->value();

    int flag=2;
    //переменная, для определения числа рекурсивных обрпащений

    for (int i=0;i < roll ;i++ ) {
        flag*=2;
    }

    int sidestart = 524; // начальные значения шага в трегольнике
    int xstart = 64; // начальные значения икса в треугольнике
    int ystart = 524;// начальные значения Y в треугольнике

    int red = ui->spinBox_3->value();
    int green =  ui->spinBox_4->value();
    int blue = ui->spinBox_5->value();

    tri(xstart,ystart,sidestart, red,green,blue,flag); //вызов функции построения треугольника
}




void MainWindow::tri(int x, int y, int side, int red, int green, int blue,int flag){
    // определение трех вершин треугольника по одной и имеющемуся шагу
    int x2 =  x +side/2;
    int y2 = y - side;
    int x3 = x + side;
    int y3 = y;

    //создание объекта класса полигон, дочерний класс класса сцена
    QPolygon polygon;
    //он необходим для построение многоугольников
    QPen pen = QPen(3);
    QBrush brush;

    if (flag/2>2){
        //определение необходимости закрашивания треугольника в цвета пользователя
        brush = QBrush(Qt::white);}

    else

    {

         brush = QBrush(QColor(red,green,blue));
    }
    //создание треугольника
    polygon<<QPoint(x,y)<<QPoint(x2,y2)<<QPoint(x3,y3);
    scene->addPolygon(polygon,pen,brush); //добавление треугольника на сцену
    side =side /2; //уменьшение шага на два
    flag/=2;//уменьшение количества рекурсивных обращений на два

    if (flag>2)

    {
        //вызов этой же функции три раза для создания трех треугольников по углам
        tri(x,y,side,red,green,blue,flag);
        tri(x+side,y,side,red,green,blue,flag);
        tri(x+(side/2),y-(side),side,red,green,blue,flag);

    }

}

//функция обработки нажатия на кнопку информационного меню для вызоыва таковой
void MainWindow::on_action_triggered()
{
    Dialog window;
    window.setModal(true);
    window.exec();
}

