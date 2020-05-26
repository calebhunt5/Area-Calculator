
#include <stdio.h>

float Square(float height, float width);
float Circle(float rad);
float Triangle(float height, float base);
float Parallelogram(float base, float height);
float Trapezoid(float base, float roof, float height);

//function that returns the area of a square
float Square(float height, float width)
{
    float area =height*width;
    
    return area;
}

//function that returns the area of a Circle
float Circle(float rad)
{
    rad =rad*rad;
    float area =3.14*rad;
    
    return area;
}

//function that returns the area of a Triangle
float Triangle(float height, float base)
{
    height =height/2;
    float area =height*base;
    
    return area;
}

//function that returns the area of a Parallelogram
float Parallelogram(float base, float height)
{
    float area =base*height;
    
    return area;
}

//function that returns the area of a Trapezoid
float Trapezoid(float base, float roof, float height)
{
    base =base+roof;
    base =base/2;
    float area =base*height;
    
    return area;
}

//Class that is a demo for the previous functions
int main()
{
    //prompt for user to choose a shape
    int op;
    printf("What shape do you want to find the area of? (square =1, circle =2, triangle =3, parallellogram =4, trapezoid =5) \n");
    scanf("%d", &op);
    
    //if the user picks square they are prompted for proper values, then recieve the area
    if(op == 1)
    {
        float h;
        float w;
        printf("I need a height and width.\n");
        scanf("%f %f", &h, &w);
        float area =Square(h, w);
        printf("Area of the square: %f", area);
    }
    
    //if the user picks circle they are prompted for the proper values, then recieve the area
    else if(op == 2)
    {
        float rad;
        printf("I need a radius.\n");
        scanf("%f", &rad);
        float area =Circle(rad);
        printf("Area of the circle: %f", area);
    }
    
    //if the user picks triangle they are prompted for the proper values, then recieve the area
    else if(op == 3)
    {
        float h;
        float b;
        printf("I need a height and a base.\n");
        scanf("%f %f", &h, &b);
        float area =Triangle(h, b);
        printf("Area of the triangle: %f", area);
    }
    
    //if the user picks parallelogram they are prompted for the proper values, then recieve the area
    else if(op == 4)
    {
        float b; 
        float h;
        printf("I need a base and a height.\n");
        scanf("%f %f", &b, &h);
        float area =Parallelogram(b, h);
        printf("Area of the parallelogram: %f", area);
    }
    
    //if the user picks trapezoid they are prompted for the proper values, then recieve the area
    else if(op == 5)
    {
        float b;
        float r;
        float h;
        printf("I need a base1, a base2, and a height.\n");
        scanf("%f %f %f", &b, &r, &h);
        float area =Trapezoid(b, r, h);
        printf("Area of the trapezoid: %f", area);
    }
    
    //if the user picks an option that does not exist
    else
    {
        printf("That was not an option.");
    }
    
    return 0;
}
