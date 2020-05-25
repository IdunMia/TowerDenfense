#include "enemy.h"
#include <QPainter>
#include <QTime>

Enemy::Enemy(){
    //setStyleSheet("background-color:white;");
    leftDirection = false;
    rightDirection = true;
    upDirection = false;
    downDirection = false;
    inGame = true;

    /*
    resize(B_WIDTH, B_HEIGHT);
    loadImages();
    initGame();
    */
}

void Enemy::mousePressEvent(QMouseEvent *event)
{
    mx = event->x();
    my = event->y();



    QWidget::mousePressEvent(event);


}
