// Simple Regular Expression Tester
#include <iostream>
#include <regex>

int main()
{
    std::string str, regex_str;
    std::string prev_str, prev_regex_str;
    
    std::cout << "String: ";
    std::getline(std::cin, str);
    prev_str = str;
    
    while(str != "end") {
        
        std::cout << "RegEx to Match(Empty for Previous Regex): ";
        std::getline(std::cin, regex_str);
        if (regex_str == "") {
            regex_str = prev_regex_str;
        } else {
            prev_regex_str = regex_str;
        }
        
        std::regex obj_regexp(regex_str);
        
        if (regex_match(str, obj_regexp)) {
            std::cout << "Match Found !!!" << "\n";
        } else {
            std::cout << "No Match Found !!!!" << "\n";
        }
        std::cout << "String(Empty for Previous String): ";
        std:getline(std::cin, str);
        if (str == "") {
            str = prev_str;
        } else {
            prev_str = str;
        }
    }
    return 0;
}
