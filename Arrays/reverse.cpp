#include <iostream>
#include <stack>
#include <string>
#include<algorithm>

int main() {
    std::string str = "sohel allauddin devalekar";
    std::stack<char> ch;
    std::string result;

    for (char s : str) {
        if (s != ' ') {
            ch.push(s);
        } else {
            while (!ch.empty()) {
                result += ch.top();
                ch.pop();
            }
            result += ' ';
        }
    }

    // Handle the last word
    while (!ch.empty()) {
        result += ch.top();
        ch.pop();
    }

     reverse(result.begin(), result.end());

    std::cout << result << std::endl;

    return 0;
}