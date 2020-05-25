#ifndef ENEMY_H
#define ENEMY_H
#include <QWidget>
#include <QMouseEvent>


class Enemy
{
public:
    Enemy();
    int mx;
    int my;

protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void mousePressEvent(QMouseEvent *event);

private:

    static const int B_WIDTH = 2000;
    static const int B_HEIGHT = 1500;
    static const int RAND_POS = 30;
    static const int DELAY = 100;

    int timerId;
    int timerId2;


    bool leftDirection;
    bool rightDirection;
    bool upDirection;
    bool downDirection;
    bool inGame;

    /*

    void loadImages();
    void initGame();
    void checkApple();
    void checkCollision();
    void move();
    void doDrawing();
    */
};

class Dementor: public Enemy
{

private:
    QImage demon;
    QImage snake;


};

class DeathEater: public Enemy
{

private:
    QImage bella;
    QImage draco;
    QImage snape;
    QImage lucius;
    QImage dracoq;
    QImage snapeq;


};

class Voldemort: public DeathEater
{

private:
    QImage volde;
    QImage voldeq;

};


#endif // ENEMY_H
