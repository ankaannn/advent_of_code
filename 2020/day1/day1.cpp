#include "day1.hpp"

std::vector<int> Day1::read_file(){
    //open file
    std::ifstream myfile("/home/annika/Dropbox/Programmering/advent_of_code/2020/day1/input.txt");
    if(!myfile.good()){
        std::cout << "can not open file" << std::endl; 
    }
    //create a list and get the numbers
    std::vector<int> my_list;
    std::string temp_string;
    while(getline(myfile, temp_string).good() != false){
        my_list.push_back(std::stoi(temp_string)); 
    } 
    return my_list;

}

int Day1::part1(std::vector<int> list){
    for(int value1 : list){
        for(int value2 : list){
            if(value1 + value2 == 2020){
                return value1 * value2; 
            }
        }
    }
    return -1;
}

int Day1::part2(std::vector<int> list){
    for(int value1 : list){
        for(int value2 : list){
            for(int value3 : list){
                if(value1 + value2 + value3 == 2020){
                    return value1 * value2 * value3; 
                }
            }
        }
    }
    return -1;
}