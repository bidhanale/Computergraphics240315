#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    float x1, y1, x2, y2, x3, y3, x4, y4, a, t;

    /* Take input BEFORE graphics mode */
    printf("Enter coordinates of starting point: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of ending point: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter angle for rotation (degrees): ");
    scanf("%f", &a);

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    /* Draw original line */
    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2 + 2, y2 + 2, "Original line");

    /* Convert degree to radian */
    t = a * (3.14159 / 180);

    /* Rotation about origin */
    x3 = (x1 * cos(t)) - (y1 * sin(t));
    y3 = (x1 * sin(t)) + (y1 * cos(t));

    x4 = (x2 * cos(t)) - (y2 * sin(t));
    y4 = (x2 * sin(t)) + (y2 * cos(t));

    /* Draw rotated line */
    setcolor(7);
    line(x3, y3, x4, y4);
    outtextxy(x4 + 2, y4 + 2, "Line after rotation");

    getch();
    closegraph();
    return 0;
}
