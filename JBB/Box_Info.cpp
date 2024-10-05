#include <iostream>
using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void displayBox(box b) {
    cout << "Maker: " << b.maker << "\n";
    cout << "Height: " << b.height << "\n";
    cout << "Width: " << b.width << "\n";
    cout << "Length: " << b.length << "\n";
    cout << "Volume: " << b.volume << "\n";
}

void setVolume(box *b) {
    b->volume = b->height * b->width * b->length;
}

int main() {
    box myBox = {"Peacemaker Manufacturer(PM)", 5.0, 3.0, 4.0, 0.0};

    setVolume(&myBox);

    cout << "Displaying Box values: \n";
    displayBox(myBox);

    return 0;
}
