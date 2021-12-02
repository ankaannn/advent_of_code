#include <iostream>
#include "day1/day1.hpp"
#include "day2/day2.hpp"

int main(){
    std::cout << "Day1" << std::endl; 
    Day1 day1; 
    std::vector<int> list; 
    list = day1.read_file(); 
    int answer_part1 = day1.part1(list);
    std::cout << "Answer part 1 is: " <<  answer_part1 << std::endl;
    int answer_part2 = day1.part2(list); 
    std::cout << "Answer part 2 is: " << answer_part2 << std::endl; 

    std::cout <<"Day2" << std::endl;
    Day2 day2; 
    std::vector<std::string> list2 = day2.read_file();
    return 0; 
}