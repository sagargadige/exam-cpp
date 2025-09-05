#include<iostream>
using namespace std;

// Base class
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

    virtual void calculateArea() = 0;
    virtual void display() const = 0;
};

// Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r, string c) {
        radius = r;
        setColor(c);
    }

    void calculateArea() override {
        float a = 3.14 * radius * radius;
        setArea(a);
    }

    void display() const override {
        cout << "\nShape: Circle\n";
        cout << "Radius: " << radius << "\n";
        cout << "Color: " << getColor() << "\n";
        cout << "Area: " << getArea() << "\n";
    }
};

// Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w, string c) {
        length = l;
        width = w;
        setColor(c);
    }

    void calculateArea() override {
        float a = length * width;
        setArea(a);
    }

    void display() const override {
        cout << "\nShape: Rectangle\n";
        cout << "Length: " << length << ", Width: " << width << "\n";
        cout << "Color: " << getColor() << "\n";
        cout << "Area: " << getArea() << "\n";
    }
};

int main() {
    const int size = 2;
    Shape* shapes[size];

    float radius;
    string circleColor;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter color of the circle: ";
    cin >> circleColor;
    shapes[0] = new Circle(radius, circleColor);
    shapes[0]->calculateArea();

    float length, width;
    string rectangleColor;
    cout << "\nEnter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Enter color of the rectangle: ";
    cin >> rectangleColor;
    shapes[1] = new Rectangle(length, width, rectangleColor);
    shapes[1]->calculateArea();

    cout << "\n--- Shape Details ---\n";
    for (int i = 0; i < size; i++) {
        shapes[i]->display();
    }

    for (int i = 0; i < size; i++) {
        delete shapes[i];
    }

    return 0;
}