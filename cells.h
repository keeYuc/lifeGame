#ifndef CELLS_H
#define CELLS_H
const int HIGH = 80;
const int WIDE = 80;

class cells
{
    int id;
    int x;
    int y;

public:
    bool life;
    cells(int x, int y);
    // ~cells();
    int getId();
    void reLife();
    bool isLife();

};
extern cells* myLifeList[HIGH][WIDE];
#endif