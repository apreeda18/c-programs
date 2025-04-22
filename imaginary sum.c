# include <stdio.h>
# include <string.h>
struct vector {
    int x;
    
    int y;
    };
    void calcSum(struct vector v1, struct vector v2, struct vector sum);
    int main()
    {
        int x,y,sum;
        printf("enter vector v1 ");
        printf("enter vectro v2");

    }
    void calcSum(struct vector v1, struct vector v2, struct vector sum) {
        sum.x = v1.x + v2.x;
        sum.y = v1.y + v2.y;
        printf("sum of x is : %d\n", sum.x);
        printf("sum of y is : %d\n", sum.y);
        }