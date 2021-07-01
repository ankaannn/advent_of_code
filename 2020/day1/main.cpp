#include <iostream>
#include "day1.hpp"

int main(){
    Day1 day1; 
    std::vector<int> list; 
    list = day1.read_file(); 
    int answer_part1 = day1.part1(list);
    std::cout << "Answer part 1 is: " <<  answer_part1 << std::endl;
    int answer_part2 = day1.part2(list); 
    std::cout << "Answer part 2 is: " << answer_part2 << std::endl; 



    return 0; 
}