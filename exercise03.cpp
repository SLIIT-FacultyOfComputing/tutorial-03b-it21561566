#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct box {
  int Height , Width, Length ;
} ;
// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    box b1 ;
    box b2 ;
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> b1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> b1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> b1.Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> b2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> b2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> b2.Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(b1.Height , b1.Width , b1.Length)
             + volume(b2.Height , b2.Width , b2.Length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
// Implement the functions here
int volume(int height, int width, int length){
  return height * width * length ;
}