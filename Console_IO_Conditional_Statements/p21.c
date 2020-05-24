#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,px,py,r;
    printf("Enter 'x' co-ordinate of the center of circle: ");
    scanf("%lf",&x);
    printf("Enter 'y' co-ordinate of the center of circle: ");
    scanf("%lf",&y);
    do
    {
        printf("Enter the radius of the center of circle: ");
        scanf("%lf",&r);
        if(r>0)
            break;
        printf("INVALID Input!!!!\nPlease enter again.\n");
    }while(1);
    printf("\nEnter 'x' co-ordinate of the point: ");
    scanf("%lf",&px);
    printf("Enter 'y' co-ordinate of the point: ");
    scanf("%lf",&py);
    double d=sqrt(pow((px-x),2)+pow((py-y),2));
    if(d<r)
        printf("\nThe point (%lf,%lf) lies WITHIN the circle\n",px,py);
    else
        if(d>r)
            printf("\nThe point (%lf,%lf) lies OUTSIDE the circle\n",px,py);
        else
            printf("\nThe point (%lf,%lf) lies ON the circle\n",px,py);
    return 0;
}
