#include <QCoreApplication>
#include <QDebug>

void display(QString* value){
    qInfo()<<"The pointer:"<<value;
    qInfo()<<"The object:"<<&(*value)<<" A copy of the pointer!!";
    qInfo()<<"The data:"<<*value;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name="Ngoc Anh nu!!!";
    QString* description=new QString("Hello World");
    display(&name); // đây là một pointer nó trỏ vào một ô nhớ trong heap có chứa giá trị name
    display(description);
    delete description; //description now become a dagling pointer tức nó chỉ tồn tại vật vờ méo trỏ vào j cả
    display(description);
    return a.exec();
}
