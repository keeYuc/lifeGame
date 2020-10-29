#include<iostream>

#include"cells.h"
#include<unistd.h>
extern const int HIGH;
extern const int WIDE;


int main()
{
    srand(time(nullptr));
    //初始化
    for (int i = 1;i <= HIGH;i++)
    {
        for (int k = 1;k <= WIDE;k++)
        {
            cells(i, k);


        }
    }
    //*随机产生n个活细胞
    int n = 250;
    for (int i = 0;i < n;i++)
    {
        //std::cout << "yes2" << std::endl;

        int x = rand() % (WIDE - 1) + 1;
        int y = rand() % (HIGH - 1) + 1;
        // std::cout << x << "----" << y << std::endl;
        myLifeList[x][y]->life = true;

    }
    while (1)
    {   //*循环判断是否存活
        for (int i = 1;i <= HIGH;i++)
        {
            for (int k = 1;k <= WIDE;k++)
            {

                //*输出到屏幕


                if (myLifeList[i][k]->isLife())
                {
                    std::cout << "#";

                } else
                {
                    std::cout << " ";
                }
            }std::cout << "\n";
        }
        sleep(1);

    }

}