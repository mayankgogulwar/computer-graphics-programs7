
#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    int x = 50, y = 200;
    int r = 20;

    initgraph(&gd, &gm, "");

    while (!kbhit())
    {
        cleardevice();

        /* Draw ground */
        line(0, 400, getmaxx(), 400);

        /* Draw ball */
        setcolor(WHITE);
        circle(x, y, r);
        setfillstyle(SOLID_FILL, RED);
        floodfill(x, y, WHITE);

        /* Move the ball */
        x = x + 5;

        /* Reset position */
        if (x > getmaxx() - r)
            x = r;

        delay(50);
    }

    closegraph();
    return 0;
}
