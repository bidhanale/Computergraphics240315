#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>

int myround(float a); 

int main() 
{
    int gd = DETECT, gm;

    int x1, y1, x2, y2, steps, k;
    float xincr, yincr, x, y, dx, dy;

    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    xincr = dx / steps;
    yincr = dy / steps;

    x = x1;
    y = y1;

    for (k = 0; k <= steps; k++)
    {
        putpixel(myround(x), myround(y), RED);
     
        x += xincr;
        y += yincr;
    }

    outtextxy(200, 20, "DDA Line");
    outtextxy(x1+5, y1-5, "(x1,y1)");
    outtextxy(x2+5, y2+5, "(x2,y2)");

    getch();
    closegraph();
    return 0;
}

int myround(float a)
{
    return (int)(a + 0.5);
}
