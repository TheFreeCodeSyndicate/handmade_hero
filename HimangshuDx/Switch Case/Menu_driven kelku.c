//simple menu-driven calculator.
//menu-driven unit converter.
//menu-driven area calculator.

#include<stdio.h>
#include<math.h>
#define pi 3.14

int main()
{
    char choice; 

    printf("\n---WELCOME TO THE MENU-DRIVEN CALCULATOR---\n");

    printf("\n\nPlease Select an option from the menu below: \n");
    printf("1. Simple Calculator\n");
    printf("2. Unit Converter\n");
    printf("3. Area Calculator\n");
    printf("4. Percentage Calculator\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch(choice)
    {
        int  ek,dui,uttor;
        case '1':
        {
            char operator;
            printf("\nYou have selected Simple Calculator.\n");
            printf("\n\nEnter an Operator ( + , - , x , / ): ");
            scanf(" %c", &operator);      //error ahi asil ei line tut
            //Solution: Leading space " %c" e previous inputor pisot thoka Enter/newline skip kori actual character tu read kore.
            printf("\nEnter two numbers:\n");
            scanf("%d %d", &ek, &dui);
            switch(operator)
            {
                case '+':
                    uttor = ek + dui;
                    printf("\n%d + %d = %d", ek, dui, uttor);
                    break;
                case '-':
                    uttor = ek - dui;
                    printf("\n%d - %d = %d", ek, dui, uttor);
                    break;
                case 'x':
                    uttor = ek * dui;
                    printf("\n%d x %d = %d", ek, dui, uttor);
                    break;
                case '/':
                    if(dui != 0)
                    {
                        uttor = ek / dui;
                        printf("\n%d / %d = %d", ek, dui, uttor);
                    }
                    else
                    {
                        printf("\nError: Division by zero is not allowed.");
                    }
                    break;
                default:
                printf("\nError: You entered an invalid operator.");
            }
            break;
        }

        case '2':
        {
            int unit;
            printf("\nYou have selected Unit Converter.\n");
            printf("\n\nSelect One conversion from the given menu below: \n");
            printf("1. Celsius to Fahrenheit\n");
            printf("2. Fahrenheit to Celsius\n");
            printf("3. Kilometers to Meters\n");
            printf("4. Meters to Kilometers\n");
            printf("5. Meters to Centimeters\n");
            printf("6. Centimeters to Meters\n");
            printf("7. Kilograms to Grams\n");
            printf("8. Grams to Kilograms\n");
            printf("9. Kilobytes to Megabytes.\n");
            printf("10. Megabytes to Kelobytes.\n");
            printf("Enter your choice(1-10): ");
            scanf("%d", &unit);
            switch(unit)
            {
                case 1:
                {
                    float c,f;
                    printf("\nYou have selected Celsius to Fahrenheit.\n");
                    printf("\nEnter the value in Celsius: ");
                    scanf("%f",&c);
                    f = (c * 9/5) + 32;
                    printf("\n%.2f Celsius = %.2f Fahrenheit\n", c, f);
                    break;
                }
                case 2:
                {
                    float f,c;
                    printf("\nYou have selected Fahrenheit to Celsius.\n");
                    printf("\nEnter the value in Fahrenheit: ");
                    scanf("%f",&f);
                    c = (f - 32) * 5/9;
                    printf("\n%.2f Fahrenheit = %.2f Celsius\n", f, c);
                    break;
                }
                case 3:
                {
                    float km,mtr;
                    printf("\nYou have selected Kilometers to Meters.\n");
                    printf("\nEnter the value in Kilometers: ");
                    scanf("%f",&km);
                    mtr=km*1000;
                    printf("\n%.2f Kilometers = %.2f Meters\n", km,mtr);
                    break;
                }
                case 4:
                {
                    float km,mtr;
                    printf("\nYou have selected Meters to Kilometers.\n");
                    printf("\nEnter the value in Meter: ");
                    scanf("%f",&mtr);
                    km=mtr/1000;
                    printf("\n%.2f Kilometers = %2.f Meters.",km,mtr);
                    break;
                }
                case 5:
                {
                    float cm,mtr;
                    printf("\nYou have selected Meters to Centimeters.\n");
                    printf("\nEnter the value in Meters: ");
                    scanf("%f",&mtr);
                    cm=mtr*100;
                    printf("\n%.2f Meters = %.2f Centemeters.",mtr, cm);
                    break;
                }
                case 6:
                {
                    float cm,mtr;
                    printf("\nYou have selected Centimeters to Meters.\n");
                    printf("\nEnter the value in Centimeters: ");
                    scanf("%f",&cm);
                    mtr=cm/100;
                    printf("\n%.2f Centimeters = %.2f Meters.",cm, mtr);
                    break;
                }
                case 7:
                {
                    float kg,gm;
                    printf("\nYou have selected Kilograms to Grams.\n");
                    printf("\nEnter the value in Kilograms: ");
                    scanf("%f",&kg);
                    gm=kg*1000;
                    printf("\n%.2f Kilograms = %.2f Grams.", kg, gm);
                    break;
                }
                case 8:
                {
                    float kg, gm;
                    printf("\nYou have selected Grams to Kilograms.\n");
                    printf("\nEnter the value in Grams: ");
                    scanf("%f",&gm);
                    kg=gm/1000;
                    printf("\n%.2f Grams = %.2f Kilograms.",gm,kg);
                    break;
                }
                case 9:
                {
                    int mb,kb;
                    printf("\nYou have selected Kilobytes to Megabytes.\n");
                    printf("\nEnter the vaelu in Kilobytes: ");
                    scanf("%d", &kb);
                    mb=kb/1024;
                    printf("\n%d Kilobytes = %d Megabytes", kb,mb);
                    break;
                }
                case 10:
                {
                    int kb,mb;
                    printf("\nYou have selected Megabytes to Kilobytes.\n");
                    printf("\nEnter the value in Megabytes: ");
                    scanf("%d",&mb);
                    kb=mb*1024;
                    printf("\n%d Megabytes = %d Kilobytes.",mb,kb);
                    break;
                }  
                default:
                    printf("\nInvalid Choise. Please Enter a number between 1 to 10.");
            }
            break;
        }

        case '3':
        {
            int area;
            printf("\nYou have selected Area Calculator.\n");
            printf("\n\nSelect One conversion from the given menu below: \n");
            printf("1. Area of a Square.\n");
            printf("2. Area of a Rectangle.\n");
            printf("3. Area of a Circle.\n");
            printf("4. Area of a Triangle.");
            printf("5. Area of a Parallelogram.\n");
            printf("6. Area of a Rhombus.\n");
            printf("7. Area of a Trapezoid.\n");
            printf("8. Area of an Ellipse.\n");
            printf("9. Surface Area of a Cylinder.\n");
            printf("10. Surface Area of a Cube.\n");
            printf("11. Surface Area of a Cone.\n");
            printf("12. Surface Area of a Sphare.\n");
            printf("13. Surface Area of a Hemisphare.\n");
            printf("\nEnter your choice (1-13): ");
            scanf("%d",&area);
            switch(area)
            {
                case 1:
                {   float l;
                    printf("\nSo, you want to find area of a Square..");
                    printf("\nEnter the length of a Square: ");
                    scanf("%f",&l);
                    printf("\nThe area of the Square of length %.2f is: %.2f",l, l*l);
                    break;
                }
                case 2:
                {
                    float l,b;
                    printf("\nSo, you want to find area of a Rectangle..");
                    printf("\nEnter the Length and Breadth of the rectangle: ");
                    scanf("%f %f", &l,&b);
                    printf("\nThe Area of the Rectangle is: %.2f", l*b);
                    break;
                }
                case 3:
                {   float r;
                    printf("\nSo, You want to find the area of a Circle..");
                    printf("\nEnter the Radious of the Circle: ");
                    scanf("%f",&r);
                    printf("\nThe area of the Circle of radious %.2f is: %.2f",r, pi*r*r );
                    break;
                }
                case 4:
                {   float l,b;
                    printf("\nSo,You want to find the area of a Triangle..");
                    printf("\nEnter the perpendicular Height and Base of the Triangle: ");
                    scanf("%f %f", &l,&b);
                    printf("\nThe area of the Triangle is: %.2f", 1/2*(l*b));
                    break;
                }
                case 5:
                {   float b,h;
                    printf("\nSo, You want to find the area of a Parallelogram..");
                    printf("\nEnter the Base and Height of the Parallelogram: ");
                    scanf("%f %f", &b,&h);
                    printf("\nThe area of the Parallelogram is: %.2f", b*h);
                    break;
                }
                case 6: 
                {   float d1,d2;
                    printf("\nSo,You want to find the Area of a Rhombus: ");
                    printf("\nEnter the Right and Left diagonal distances of the Rhombus: ");
                    scanf("%f %f", &d1,&d2);
                    printf("\nThe area of the Rhombus is: %.2f", (d1*d2)/2);
                    break;
                }
                case 7:
                {   float a,b,h;
                    printf("\nSo, You want to find the area of a Trapezoid..");
                    printf("\nEnter the length of tow parallel bases of the Trapazoid: ");
                    scanf("%f %f", &a,&b);
                    printf("\nEnter the height between the perpendicular bases: ");
                    scanf("%f",&h);
                    printf("\nThe Area of the Trapezoid is: %.2f", ((a+b)/2)*h);  
                    break;  
                }
                case 8:
                {   float a,b;
                    printf("\nSo, You want to find the area of an Ellipse..");
                    printf("\nEnter the lenght of semi-Major and Semi-Minor axis respectively: ");
                    scanf("%f %f",&a,&b);
                    printf("\nThe area of the Ellipse is: %.2f", pi*a*b);
                    break;
                }
                case 9:
                {   float r, h;
                    printf("\nSo,You want to find the Surface area of a Cylinder..");
                    printf("\nEnter the Perpendicular Height and the Radious of the cylinder respectively: ");
                    scanf("%f %f", &h,&r);
                    printf("\nThe Surface area of the Cylinder is:  %.2f", 2*(pi*r*h)+2*(pi*r*r));
                    break;
                }
                case 10:
                {   float a;
                    printf("\nSo,You want to find the surface area of a Cube..");
                    printf("\nEntert the length of an Edge of the Cube: ");
                    scanf("%f",&a);
                    printf("\nThe Surface Area of the Cube is: %.2f", 6*a*a);
                    break;
                }
                case 11:
                {   float r,h;
                    printf("\nSo, You want to find the Surface Area of a Cone..");
                    printf("\nEnter the Radious and Perpendicular Height of the Cone respectively: ");
                    scanf("%f %f", &r,&h);
                    printf("\nThe Surface Area of the Cone is: %.2f", pi*r*(r+sqrt((h*h)+r*r)));
                    break;
                }
                case 12:
                {   float r;
                    printf("\nSo, You want to find the Surface area of a Sphare..");
                    printf("\nEnter the Radious of the Sphare: ");
                    scanf("%f",&r);
                    printf("\nThe Surface Area of the Sphare is: %.2f", 4*pi*r*r);
                    break;
                }
                case 13:
                {   float r;
                    printf("\nSo, you want to find the Surface Area of a Hemisphare..");
                    printf("\nEnter the Radious of the Hemisphare: ");
                    scanf("%f", &r);
                    printf("\nThe Surface Area of the Hemisphare is: %.2f", 3*pi*r*r );
                    break;
                }
                default:
                    printf("\nInvalid choise. Please Enter a choise between 1 to 13.");
            }
            break;
        }

        case '4':
        {   int percent;
            printf("\nYou have selected Percentage Calculator.\n");
            printf("\n\nSelect one conversion from the given menu below:\n");
            printf("1. Exam Percentage Calculator.\n");
            printf("2. Basic Percentage.\n");
            printf("3. Percentage Value.\n");
            printf("4. Percentage Increase/Decrease.\n");
            printf("5. Percentage Difference.\n");
            printf("\nEnter your choice(1-5): ");
            scanf("%d", &percent);
            switch(percent)
            {
                case 1:
                {   int n,i;
                    float total, sum=0;
                    printf("\nOk, Let's calculate your exam score..");
                    printf("\nEnter the number of Subjects: ");
                    scanf("%d",&n);
                    if(n<=0)
                    {   printf("\nInvalid Number of Subjects.");
                        break;
                    }
                    printf("Enter the Total Marks of each subject: ");
                    scanf("%f",&total);
                    if(total<=0)
                    {   printf("\nInvalid Total Marks.");
                        break;
                    }
                    printf("Enter the marks you obtained in each subject(Out of %.2f): \n\n", total);
                    float a[n];
                    for(i=0; i<n; i++)
                    {
                        printf("Enter the marks for subject %d: ",i+1);
                        scanf("%f", &a[i]);
                        sum+=a[i];
                    }
                    printf("\nThe total marks you obtained in %d subjects is: %.2f",n,sum);
                    printf("\nYour Score is: %.2f Percent.", (sum/(n*total)*100));
                    break;
                }
                case 2:
                {   float part,whole;
                    printf("\nHere we are going to find what Precentage X is of Y.");
                    printf("\nEnter the Obtained Value: ");
                    scanf("%f", &part);
                    printf("\nEnter the Total Value: ");
                    scanf("%f", &whole);
                    if(whole<=0)
                    {   printf("\nERROR: Total Value Can not be Zeo.");
                        break;
                    }
                    printf("\nResult: %.2f is %.2f Percent of %.2f", part, (part/whole)*100.00,whole);
                    break;
                }
                case 3:
                {   float percent, whole, result;
                    printf("\nHere we'll find X%% of Y.");
                    printf("\nEnter the percentage (X): ");
                    scanf("%f", &percent);
                    printf("Enter the total value (Y): ");
                    scanf("%f", &whole);
                    result = (percent / 100.0) * whole;
                    printf("Result: %.2f%% of %.2f is %.2f\n", percent, whole, result);
                    break;
                }
                case 4:
                {   printf("Let's see Percentage Increase/Decrease (Tax/Discount)..\n");
                    float original, percent, change, finalAmount;
                    int type;
                    printf("\nEnter original amount: ");
                    scanf("%f", &original);
                    printf("Enter percentage rate: ");
                    scanf("%f", &percent);
                    printf("Choose type (1. for Increase/Tax, 2. for Decrease/Discount): ");
                    scanf("%d", &type);
                    change = (percent / 100.0) * original;
                    if (type == 1)
                    {   finalAmount = original + change;
                        printf("Result: %.2f%% Increase adds %.2f. Final Amount = %.2f\n", percent, change, finalAmount);
                    } 
                    else if (type == 2) 
                    {   finalAmount = original - change;
                        printf("Result: %.2f%% Decrease subtracts %.2f. Final Amount = %.2f\n", percent, change, finalAmount);
                    } 
                    else 
                        printf("Invalid type selected.\n");
                }
                case 5:
                {   printf("\nLet's see Percentage difference between Two Numbers..");
                    float num1, num2, difference, average, result;
                    printf("\nEnter first number: ");
                    scanf("%f", &num1);
                    printf("Enter second number: ");
                    scanf("%f", &num2);

                    if ((num1 + num2) == 0) 
                    {   printf("Error: Sum of numbers cannot be zero.\n");
                        break;;
                    }
                    if(num1>num2)
                        difference = num1 - num2;
                    else if (num1<num2)
                        difference = num2- num1;
                    else   
                        printf("ERROR: Both are same value.");
                    average = (num1 + num2) / 2.0;
                    result = (difference / average) * 100.0;
                    printf("Result: The percentage difference between %.2f and %.2f is %.2f%%\n", num1, num2, result);
                    break;
                }
            }
            break;
        }
        default :
            printf("\nInvalid choice. Please select a valid option from the menu.\n");
    }
    
    return 0;
}

//iman lomba hobo buli bhaba nasilu...But it was fun to write.