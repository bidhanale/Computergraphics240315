#include<direct.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void draw_circle(int, int, int);
void symmetry(int, int, int, int);

int main() {
    int xc, yc, R;
    int gd = DETECT, gm;
    
    // Initialize graphics mode (path specific to Turbo C3)
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    printf("Enter the center of the circle:\n");
    printf("Xc =");
    scanf("%d", &xc);
    printf("Yc =");
    scanf("%d", &yc);
    printf("Enter the radius of the circle: ");
    scanf("%d", &R);

    draw_circle(xc, yc, R);

    getch();
    closegraph();
    return 0;
}

void draw_circle(int xc, int yc, int rad) {
    int x = 0;
    int y = rad;
    int p = 1 - rad; // Initial decision parameter

    symmetry(x, y, xc, yc);

    for (x = 0; y > x; x++) {
        if (p < 0) {
            p += 2 * x + 3;
        } else {
            p += 2 * (x - y) + 5;
            y--;
        }
        symmetry(x, y, xc, yc);
        delay(50); // Visual delay to see the circle being drawn
    }
}

void symmetry(int x, int y, int xc, int yc) {
    // Plots 8 points based on circle symmetry
    putpixel(xc + x, yc - y, GREEN); // Octant 1
    delay(50);
    putpixel(xc + y, yc - x, GREEN); // Octant 2
    delay(50);
    putpixel(xc + y, yc + x, GREEN); // Octant 3
    delay(50);
    putpixel(xc + x, yc + y, GREEN); // Octant 4
    delay(50);
    putpixel(xc - x, yc + y, GREEN); // Octant 5
    delay(50);
    putpixel(xc - y, yc + x, GREEN); // Octant 6
    delay(50);
    putpixel(xc - y, yc - x, GREEN); // Octant 7
    delay(50);
    putpixel(xc - x, yc - y, GREEN); // Octant 8
    delay(50);
}
