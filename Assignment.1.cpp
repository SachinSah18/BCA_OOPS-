#include<iostream>

class Box {
private:
    int length;
    int width;

public:
    void getDimensions(int l, int w); 
    void showDimensions() const; 
};

void Box::getDimensions(int l, int w) {
    length = l;
    width = w;
}

void Box::showDimensions() const {
    std::cout << "Length: " << length << ", Width: " << width << std::endl;
}

int main() {
    Box box_1, box_2; 
    box_1.getDimensions(10, 5);
    box_2.getDimensions(15, 10);

    box_1.showDimensions();
    box_2.showDimensions();

   
    return 0;
}
