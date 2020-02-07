//TODO : MAKING CALCULATOR
//*Code written by: Rizky Fajar Ertanto
#include <iostream>
#include <iomanip>
#include <ctime> //?included this to make delay function
#include <cstdlib> //?included this library to use system("cls")
using namespace std;


//*Base class for shapes
class shape
{
    protected:
        float width, height; //?what can be used by derived class
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
        void set_width(float number) 
        {
            width = number;
        }
        void set_height(float number) 
        {
            height = number;
        }
};


//*Derived class from shape class
class square: public shape
{
    public:
        float area()
        {
            return width*width;
        }
        float perimeter()
        {
            return 4*width;
        }
};

class rectangle: public shape
{
    public:
        float area() 
        {
            return width*height;
        }
        float perimeter()
        {
            return 2*(width+height);
        }
};

class triangle: public shape
{
    public:
        float area()
        {
            return width*height/2;
        }
        float perimeter()
        {
            return width*3;
        }
};

class circle: public shape
{
    //*height = radius in this class
    public:
        float area()
        {
            return 3.14*height*height; 
        }
        float perimeter()
        {
            return 6.28*height;
        }
};


//!DECLARING FUNCTIONS
int basic_menu(int choice);
int advanced_menu(int choice);
int shape_menu(int choice);
void delay(int duration); //*delay duration is in millisecond
int power(int number, int power_value);
int factorial(int number);


//!MENUS
int main()
{
    int choice;

    system("cls");
    cout << "===================================" << endl;
    cout << "==      MY MATHS CALCULATOR      ==" << endl;
    cout << "==  WRITTEN BY: RIZKY F ERTANTO  ==" << endl;
    cout << "===================================" << endl;
    cout << "==           MAIN MENU           ==" << endl;
    cout << "===================================" << endl;
    cout << "1. BASIC MATHS OPERATIONS" << endl;
    cout << "2. ADVANCE MATHS OPERATIONS" << endl;
    cout << "3. 2D SHAPES" << endl;
    cout << "Pick a menu: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            basic_menu(choice);
        break;
        case 2:
            advanced_menu(choice);
        break;
        case 3:
            shape_menu(choice);
        break;
        default:
            cout << "MENU NOT AVAILABLE! PICK AGAIN!" << endl;
            delay(500);
            main();
        break;
    }
}

//*Basic maths operator (+,-,*,/)
int basic_menu(int choice) 
{
    float first_number, second_number, answer;
    char resp; //response
    
    system("cls");
    cout << "===================================" << endl;
    cout << "==     BASIC MATHS OPERATIONS    ==" << endl;
    cout << "===================================" << endl;
    cout << "1. ADDITION" << endl;
    cout << "2. SUBTRACTION" << endl;
    cout << "3. MULTIPLICATION" << endl;
    cout << "4. DIVISION" << endl;
    cout << "5. BACK TO MAIN MENU" << endl;
    cout << "Pick one: ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
        case 1:
            cout << "============" << endl;
            cout << "= ADDITION =" << endl;
            cout << "============" << endl;
            cout << "Input first number: ";
            cin >> first_number;
            cout << "Input second number: ";
            cin >> second_number;
            answer = first_number+second_number;
            cout << first_number << "+" << second_number << " = " << fixed << setprecision(2) << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to BASIC MATHS OPERATIONS menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    basic_menu(choice);
            }
        break;
        case 2:
            cout << "===============" << endl;
            cout << "= SUBTRACTION =" << endl;
            cout << "===============" << endl;
            cout << "Input first number: ";
            cin >> first_number;
            cout << "Input second number: ";
            cin >> second_number;
            answer = first_number-second_number;
            cout << first_number << "-" << second_number << " = " << fixed << setprecision(2) << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to BASIC MATHS OPERATIONS menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    basic_menu(choice);
            }
        break;
        case 3:
            cout << "==================" << endl;
            cout << "= MULTIPLICATION =" << endl;
            cout << "==================" << endl;
            cout << "Input first number: ";
            cin >> first_number;
            cout << "Input second number: ";
            cin >> second_number;
            answer = first_number*second_number;
            cout << first_number << "*" << second_number << " = " << fixed << setprecision(2) << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to BASIC MATHS OPERATIONS menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    basic_menu(choice);
            }
        break;
        case 4:
            cout << "============" << endl;
            cout << "= DIVISION =" << endl;
            cout << "============" << endl;
            cout << "Input first number: ";
            cin >> first_number;
            cout << "Input second number: ";
            cin >> second_number;
            answer = first_number/second_number;
            cout << first_number << "/" << second_number << " = " << fixed << setprecision(2) << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to BASIC MATHS OPERATIONS menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    basic_menu(choice);
            }
        break;
        case 5:
            main();
        break;
        default:
            cout << "OPERATION NOT AVAILABLE! PICK AGAIN!" << endl;
            delay(500);
            basic_menu(choice);
        break;
    }

    return 0;
}

int advanced_menu(int choice) 
{
    //*Advance math operator (^,!,%)
    int first_number, second_number, answer;
    char resp; //response
    
    system("cls");
    cout << "===================================" << endl;
    cout << "==    ADVANCE MATHS OPERATIONS   ==" << endl;
    cout << "===================================" << endl;
    cout << "1. EXPONENTIATION" << endl;
    cout << "2. MODULO" << endl;
    cout << "3. FACTORIAL" << endl;
    cout << "4. BACK TO MAIN MENU" << endl;
    cout << "Pick one: ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
        case 1:
            cout << "==================" << endl;
            cout << "= EXPONENTIATION =" << endl;
            cout << "==================" << endl;
            cout << "Input first number: ";
            cin >> first_number;
            cout << "Input second number: ";
            cin >> second_number;
            answer = power(first_number, second_number);
            cout << first_number << "^" << second_number << " = " << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to ADVANCE MATHS OPERATIONS menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    advanced_menu(choice);
            }
        break;
        case 2:
            cout << "==========" << endl;
            cout << "= MODULO =" << endl;
            cout << "==========" << endl;
            cout << "Input first number: ";
            cin >> first_number;
            cout << "Input second number: ";
            cin >> second_number;
            answer = first_number%second_number;
            cout << first_number << "\%" << second_number << " = " << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to ADVANCE MATHS OPERATIONS menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    advanced_menu(choice);
            }
        break;
        case 3:
            cout << "=============" << endl;
            cout << "= FACTORIAL =" << endl;
            cout << "=============" << endl;
            cout << "Input a number: ";
            cin >> first_number;
            answer = factorial(first_number);
            cout << first_number << "!" << " = " << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to ADVANCE MATHS OPERATIONS menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    advanced_menu(choice);
            }
        break;
        case 4:
            main();
        break;
        default:
            cout << "OPERATION NOT AVAILABLE! PICK AGAIN!" << endl;
            delay(500);
            advanced_menu(choice);
        break;
    }

    return 0;
}

int shape_menu(int choice)
{
    float width, height, answer;
    char resp;
    square sq;
    rectangle rect;
    triangle tri;
    circle cir;

    system("cls");
    cout << "===================================" << endl;
    cout << "==           2D SHAPES           ==" << endl;
    cout << "===================================" << endl;
    cout << "1. SQUARE" << endl;
    cout << "2. RECTANGLE" << endl;
    cout << "3. TRIANGLE" << endl;
    cout << "4. CIRCLE" << endl;
    cout << "5. BACK TO MAIN MENU" << endl;
    cout << "Pick one: ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
        case 1:
            cout << "==========" << endl;
            cout << "= SQUARE =" << endl;
            cout << "==========" << endl;
            cout << "Input square's side: ";
            cin >> width;
            sq.set_width(width);
            answer = sq.area();
            cout << "----------------" << endl;
            cout << "Square's side = " << fixed << setprecision(2) << width << endl;
            cout << "Square's area = " << fixed << setprecision(2) << answer << endl;
            answer = sq.perimeter();
            cout << "Square's perimeter = " << fixed << setprecision(2) << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to 2D SHAPES menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    shape_menu(choice);
            }
        break;
        case 2:
            cout << "============" << endl;
            cout << "= RECTANGLE =" << endl;
            cout << "============" << endl;
            cout << "Input rectangle's width: ";
            cin >> width;
            cout << "Input rectangle's length: ";
            cin >> height;
            rect.set_width(width);
            rect.set_height(height);
            answer = rect.area();
            cout << "--------------------" << endl;
            cout << "rectangle's width = " << fixed << setprecision(2) << width << endl;
            cout << "rectangle's length = " << fixed << setprecision(2) << height << endl;
            cout << "rectangle's area = " << fixed << setprecision(2) << answer << endl;
            answer = rect.perimeter();
            cout << "rectangle's perimeter = " << fixed << setprecision(2) << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to 2D SHAPES menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    shape_menu(choice);
            }
        break;
        case 3:
            cout << "============" << endl;
            cout << "= TRIANGLE =" << endl;
            cout << "============" << endl;
            cout << "Input triangle's base/width: ";
            cin >> width;
            cout << "Input triangle's height: ";
            cin >> height;
            tri.set_width(width);
            tri.set_height(height);
            answer = tri.area();
            cout << "------------------------" << endl;
            cout << "triangle's base/width = " << fixed << setprecision(2) << width << endl;
            cout << "triangle's height = " << fixed << setprecision(2) << height << endl;
            cout << "triangle's area = " << fixed << setprecision(2) << answer << endl;
            answer = tri.perimeter();
            cout << "triangle's perimeter = " << fixed << setprecision(2) << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to 2D SHAPES menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    shape_menu(choice);
            }
        break;
        case 4:
            cout << "==========" << endl;
            cout << "= CIRCLE =" << endl;
            cout << "==========" << endl;
            cout << "Input circle's radius: ";
            cin >> height;
            cir.set_height(height);
            answer = cir.area();
            cout << "------------------" << endl;
            cout << "Circle's radius = " << fixed << setprecision(2) << height << endl;
            cout << "circle's area = " << fixed << setprecision(2) << answer << endl;
            answer = cir.perimeter();
            cout << "circle's perimeter = " << fixed << setprecision(2) << answer << endl;
            cout << endl << "Back to MAIN MENU (y/n)? ";
            cin >> resp;
            if(resp == 'y' || resp == 'Y')
                main();
            else
            {
                cout << "Go to 2D SHAPES menu (y/n)? ";
                cin >> resp;
                if(resp == 'y' || resp == 'Y')
                    shape_menu(choice);
            }
        break;
        case 5:
            main();
        break;
        default:
            cout << "SHAPE NOT AVAILABLE! PICK AGAIN!" << endl;
            delay(500);
            shape_menu(choice);
        break;
    }

    return 0;
}


//!ADDITIONAL FUNCTION NEEDED
int power(int number, int power_value) //*Actual function to calculate exponentiation
{
    int res = 1;

    for(power_value;power_value>=1;--power_value)
        res*=number;
    
    return res;
}

int factorial(int number)
{
    int res = 1; //the one that'll be returned
    
    for(number;number>0;number--)
        res*=number;
    
    return res;
}

void delay(int duration) 
{
    clock_t clock_var = clock();
    
    while(clock() < clock_var+duration);
}
