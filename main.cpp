#include <iostream>
#include <vector>
#include <string>

void print(std::vector<std::string>& x) {
    for (std::string& s : x) {
        std::cout << s << ' ';
    }
    std::cout << std::endl;
}

std::vector<std::string> Concatenation(const std::vector<std::string>& L1, const std::vector<std::string>& L2) {
    std::vector<std::string> L3;
    for (const std::string& x : L1) {
        for (const std::string& y : L2) {
            std::string result = x + y;
            L3.push_back(result);
        }
    }
    return L3;
}

int main() {
    std::vector<std::string> L1;
    std::vector<std::string> L2;
    std::vector<std::string> L3;

    std::string x;
    std::string y;

    std::cout << "Введите цепочки для первого языка L1, при завершении заполнения напишите слово EXIT" << std::endl;
    while (true) {
        std::cin >> x;
        if (x == "EXIT") {
            break;
        }
        L1.push_back(x);
    }

    std::cout << "Введите цепочки для второго языка L2, при завершении заполнения напишите слово EXIT" << std::endl;
    while (true) {
        std::cin >> y;
        if (y == "EXIT") {
            break;
        }
        L2.push_back(y);
    }

    L3 = Concatenation(L1, L2);

    print(L1);
    print(L2);
    print(L3);

    return 0;
}
