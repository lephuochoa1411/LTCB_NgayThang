#include <iostream>
using namespace std;
int main() {
    int thang;
    cout << "Nhap ngay vao thang trong nam:"; cin >> thang;
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Thang co 31 ngay\n";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Thang co 30 ngay\n"; 
        break;
    case 2:
        cout << "Thang co 28 hoac 29 ngay:"; 
        break;
    default:
        cout << "Khong co thang"; 

    }
    return 0;
}
    