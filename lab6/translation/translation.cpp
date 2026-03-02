#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, tx, ty;
    int x3, y3, x4, y4;

    // Take all input BEFORE initializing graphics
    printf("Enter the starting point of line segment: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the ending point of line segment: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter translation distances tx, ty: ");
    scanf("%d %d", &tx, &ty);

    // Initialize graphics
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    // Draw original line
    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2 + 2, y2 + 2, "Original line");

    // Apply translation
    x3 = x1 + tx;
    y3 = y1 + ty;
    x4 = x2 + tx;
    y4 = y2 + ty;

    // Draw translated line
    setcolor(7);
    line(x3, y3, x4, y4);
    outtextxy(x4 + 2, y4 + 2, "Line after translation");

    getch();      // Hold screen
    closegraph(); // Close graphics window

    return 0; // Standard main return
}
