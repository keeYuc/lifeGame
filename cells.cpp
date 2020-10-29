#include"cells.h"
#include<stdlib.h>
#include<iostream>
cells* myLifeList[HIGH][WIDE];
cells::cells(int x, int y)
{

    auto temp = (cells*) malloc(sizeof(cells));
    temp->x = x;
    temp->y = y;
    temp->id = WIDE * (x - 1) + y;
    temp->life = false;
    myLifeList[x][y] = temp;

}
// cells::~cells()
// {
//     if(myLifeList[])
// }
int cells::getId()
{
    return this->id;
}
void cells::reLife()
{
    if (this->life == false)
    {
        this->life = true;
    } else
    {
        this->life = false;
    }

}
bool cells::isLife()
{
    // std::cout << "yes" << std::endl;
     //!防止四边内存越界
    if (this->x || this->y <= 2)
    {
        this->life = false;
        return false;
    }
    int a = 0;
    if (myLifeList[this->x][this->y + 1]->life == true)
    {
        a++;
    }
    if (myLifeList[this->x][this->y - 1]->life == true)
    {
        a++;
    }
    if (myLifeList[this->x + 1][this->y]->life == true)
    {
        a++;
    }
    if (myLifeList[this->x - 1][this->y]->life == true)
    {
        a++;
    }
    if (myLifeList[this->x + 1][this->y + 1]->life == true)
    {
        a++;
    }
    if (myLifeList[this->x - 1][this->y - 1]->life == true)
    {
        a++;
    }
    if (myLifeList[this->x + 1][this->y - 1]->life == true)
    {
        a++;
    }
    if (myLifeList[this->x - 1][this->y + 1]->life == true)
    {
        a++;
    }

    //111
    //101
    //111
    //*周围有三个则-》》》》活
    //*周围两个-》》》不变
    //*else ->>>>死
    if (a >= 3)
    {
        this->life = true;
        return true;
    }
    if (a < 2)
    {
        this->life = false;
    }
    return this->life;
}