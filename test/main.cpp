#include <iostream>
#include <string>

int main() {
    // Cấp phát động một đối tượng chuỗi
    std::string* str = new std::string();
    *str=" huhuhuhu ";

    // In ra chuỗi
    std::cout << *str << std::endl;

    // Giải phóng bộ nhớ khi không cần thiết nữa
    delete str;

    return 0;
}
