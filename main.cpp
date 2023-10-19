#include <iostream>
#include <vector>
#include <string>

std::vector<int> language1(std::vector<int>& L1){
    for(int i = 0; i < 26; i++)
        L1.push_back(i);
    return L1;
}

std::vector<char> language2(std::vector<char>& L2){
    char letter='a';
    for (int i = 0; i < 26; i++) {
        L2.push_back(letter);
        letter++;
    }
    return L2;
}

void print(auto& x){
    for (int i = 0; i < x.size(); i++) {
        std::cout << x[i] << ' ';
    }
    std::cout << std::endl;
}

std::vector<std::string> Concatination(std::vector<int> L1, std::vector<char> L2){
    std::vector<std::string> L3;
    for (int x : L1) {
        for (char y : L2) {
            std::string result;
            result = std::to_string(x) + y;
            L3.push_back(result);
        }
    }
    return L3;
}

int main() {
    std::vector<int> L1;
    std::vector<char> L2;
    std::vector<std::string> L3;

    L1 = language1(L1);
    L2 = language2(L2);
    L3 = Concatination(L1, L2);

    print(L1);
    print(L2);
    print(L3);

    return 0;
}