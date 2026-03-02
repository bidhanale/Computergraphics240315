#include <stdio.h>
#include <graphics.h>

int main()  
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw three pixels at different positions
    putpixel(100, 100, WHITE);   // Pixel 1
    putpixel(200, 150, RED);     // Pixel 2
    putpixel(300, 200, GREEN);   // Pixel 3

    // Optional: Remove this duplicate pixel (same as Pixel 1)
    // putpixel(100, 100, 4); 

    // Draw a BLUE line
    setcolor(BLUE);
    line(50, 50, 200, 50);

    // Draw a GREEN rectangle
    setcolor(GREEN);
    rectangle(50, 100, 200, 200);

    // Draw a YELLOW circle
    setcolor(YELLOW);
    circle(300, 150, 50);

    getch();
    closegraph();
    return 0;
}
