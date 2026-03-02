#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<math.h>

int main()
{
    int gd = DETECT, gm;
    float x1, y1, x2, y2, sx, sy, x3, y3, x4, y4;

    /* Take input BEFORE graphics mode */
    printf("Enter the starting point coordinates: "); 
    scanf("%f %f", &x1, &y1);

    printf("Enter the ending point coordinates: "); 
    scanf("%f %f", &x2, &y2);

    printf("Enter scaling factors sx, sy: "); 
    scanf("%f %f", &sx, &sy);

    /* Initialize graphics */
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    /* Draw original line */
    setcolor(5); 
    line(x1, y1, x2, y2);
    outtextxy(x2+2, y2+2, "Original line");

    /* Apply scaling */
    x3 = x1 * sx;
    y3 = y1 * sy;
    x4 = x2 * sx;
    y4 = y2 * sy;

    /* Draw scaled line */
    setcolor(7);
    line(x3, y3, x4, y4); 
    outtextxy(x4+2, y4+2, "Line after scaling");

    getch();
    closegraph();
    return 0;
}
