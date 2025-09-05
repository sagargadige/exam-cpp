#include<iostream>
using namespace std;

// Parent class
class Shape {
private:
    string color;
    float area;

protected:
    void setArea(float a) {
        area = a;
    }

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    float getArea() const {
        return area;
    }

    void displayArea() {
        cout << "Color: " << color << endl;
        cout << "Area: " << area << endl;
    }
};

// Child class: Circle
class Circle : public Shape {
private:
    float radius;

public:
    void setRadius(float r) {
        radius = r;
    }

    void calculateArea() {
        float a = 3.14 * radius * radius;
        setArea(a);
    }
};

// Child class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        float a = length * width;
        setArea(a);
    }
};

int main() {

        // Circle
    float radius;
    string circleColor;
    
    Circle c;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter color of the circle: ";
    cin >> circleColor;

    c.setRadius(radius);
    c.setColor(circleColor);
    c.calculateArea();
    c.displayArea();

        // Rectangle
    float length, width;
    string rectangleColor;
    
    Rectangle r;

    cout << "\nEnter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Enter color of the rectangle: ";
    cin >> rectangleColor;

    r.setDimensions(length, width);
    r.setColor(rectangleColor);
    r.calculateArea();
    r.displayArea();

    cout<<"---------------Circle---------------"<<endl;
    c.calculateArea();
    c.displayArea();
    cout<<"-------------Rectangle--------------"<<endl;
    r.calculateArea();
    r.displayArea();
    cout<<"------------------------------------"<<endl;

    return 0;
}