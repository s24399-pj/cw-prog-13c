#include <iostream>

void fake(int a, int b){
    std::cout << "Zmienna x wynosi: " << a << std::endl;
    std::cout << "Zmienna y wynosi: " << b << std::endl;
    std::swap ( a, b );
    std::cout << "Zmienna x po zamianie wynosi: " << a << std::endl;
    std::cout << "Zmienna y po zamianie wynosi: " << b << std::endl;
}

void refer(int &a, int &b){
    std::cout << "Zmienna x wynosi: " << &a << " Zmienna x wynosi: " << a << std::endl;
    std::cout << "Zmienna y wynosi: " << &b << " Zmienna y wynosi: " << b << std::endl;
    std::swap ( a, b );
    std::cout << "Zmienna y po zamianie wynosi: " << &b << " Zmienna y po zamianie wynosi: " << b << std::endl;
    std::cout << "Zmienna x po zamianie wynosi: " << &a << " Zmienna x po zamianie wynosi: " << a << std::endl;
}

int main(){
    int x = 23, y = 4;
    std::cout << "Zmienna x wynosi: " << x << std::endl;
    std::cout << "Zmienna y wynosi: " << y << std::endl;
    fake(x,y);
    refer(x,y);
    return 0;
}


