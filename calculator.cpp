//  design a multipurpose calculator
#include <iostream>
#include <cmath>
using namespace std;
float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero." << endl;
        return 0; 
    } 
    return a / b;
}
float celfah(float celcius) {
    double fahrenheit = (celcius * 9.0 / 5.0) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return fahrenheit;
}
float fahcel(float fahrenheit) {
    double celcius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << celcius << endl;
    return celcius;
}
float inrtousd(float INR) {
    double USD = INR / 74.0; 
    cout << "Amount in USD: " << USD << endl;
    return USD;
}
float usdtodollar(float USD) {
    double INR = USD * 74.0; 
    cout << "Amount in INR: " << INR << endl;
    return INR;
}
float areacircle(float radius) {
    double PI = 3.14;
    double area = PI * radius * radius;
    cout << "Area of the circle: " << area << endl;
    return area;
}
float areaRectangle(float length, float width) {
    double area = length * width;
    cout << "Area of the rectangle: " << area << endl;
    return area;
}
float areaTriangle(float base, float height) {
    double area = 0.5 * base * height;
    cout << "Area of the triangle: " << area << endl;
    return area;
}
float voulumeCylinder(float radius, float height) {
    double PI = 3.14;
    double volume = PI * radius * radius * height;
    cout << "Volume of the cylinder: " << volume << endl;
    return volume;
}
float volumeSphere(float radius) {
    double PI = 3.14;
    double volume = (4.0 / 3.0) * PI * radius * radius * radius;
    cout << "Volume of the sphere: " << volume << endl;
    return volume;
}
float squareroot(float a) {
    if (a < 0) {
        cout << "Error: Cannot calculate square root of a negative number." << endl;
        return -1; 
    }
    double result = sqrt(a);
    cout << "Square root: " << result << endl;
    return result;
}
float power(float a, float b) {
    double result = pow(a, b);
    cout << "Result of " << a << " raised to the power of " << b << ": " << result << endl;
    return result;
}
int main(){
    int choice;
    cin>>choice;
    while(choice!=0){
        if(choice==1){
        int choice1;
        cout << "Enter Choice for Addition(1),Subtraction(2),Multiply(3) and Divide(4)" << endl;
        cin>>choice1;
        if (choice1==1){
            float a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Sum: " << add(a, b) << endl;
            
        }
        else if (choice1==2){
            float a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Difference: " << subtract(a, b) << endl;
        }
        else if (choice1==3){
            float a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Product: " << multiply(a, b) << endl;
        }
        else if (choice1==4){
            float a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Quotient: " << divide(a, b) << endl;
        }else{
            cout << "Invalid choice." << endl;
        }
    }else if(choice==2){
        int choice2;

        cout<<"Enter Choice cel-feh(1),fel-cel(2),inr-usd(3) and usd-inr(4)"<<endl;
        cin >> choice2;
        if(choice2==1){
            float celcius;
            cout << "Enter temperature in Celsius: ";
            cin >> celcius;
            celfah(celcius);
        }else if(choice2==2){
            float fahrenheit;
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            fahcel(fahrenheit);
        }else if(choice2==3){
            float INR;
            cout << "Enter amount in INR: ";
            cin >> INR;
            inrtousd(INR);
        }else if(choice2==4){
            float USD;
            cout << "Enter amount in USD: ";
            cin >> USD;
            usdtodollar(USD);

    }
}else if(choice==3){
    int choice3;
    cout << "Enter Choice areaofcircle(1),areaofrectangle(2),areaoftriangle(3),volumeofcylinder(4) and volumeofsphere(4)" << endl;
    cin >> choice3;
    if(choice3==1){
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        areacircle(radius);
    }else if(choice3==2){
        float length, width;
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
        areaRectangle(length, width);
        
}else if(choice3==3){
        float base, height;
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;
        areaTriangle(base, height);
    }else if(choice3==4){
        float radius, height;
        cout << "Enter radius and height of the cylinder: ";
        cin >> radius >> height;
        voulumeCylinder(radius, height);
    }else if(choice3==5){
        float radius;
        cout << "Enter radius of the sphere: ";
        cin >> radius;
        volumeSphere(radius);
}else{
        cout << "Invalid choice." << endl;
    }
}else if(choice==4){
    int choice4;
    cout << "Enter Choice squarerott(1) and power(2)" << endl;
    cin >> choice4;
    if(choice4==1){
        float a;
        cout << "Enter the radius of the circle: ";
        cin >> a;
        squareroot(a);
    }else if(choice4==2){
        float a,b;
        cout << "Enter the number to find the power: ";
        cin >> a>>b;
        power(a,b);
    }else{
        cout << "Invalid choice." << endl;
    }
}
        cout << "Enter your choice (1-Calculator, 2-Temperature Conversion, 3-Area/Volume Calculation, 4-Square Root/Power, 0-Exit): ";
        cin >> choice;
    }
}