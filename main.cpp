#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

#define KEY_A 97
#define KEY_S 115
#define KEY_X 120
#define KEY_Q 113

void showList(std::vector<int> a){
    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main(){

    unsigned int microsecond = 1000000;

    std::vector<int> t = {};
    std::cout << "Hello, this is a small program!" << std::endl;
    usleep(2 * microsecond);
    std::cout << "Here you can manipulate a vector (a set of data) with keyboard input!" << std::endl;
    usleep(2 * microsecond);
    std::cout << "A - stands for adding an element to the end of your vector," << std::endl;
    usleep(1 * microsecond);
    std::cout << "X - stands for removing the last element," << std::endl;
    usleep(1 * microsecond);
    std::cout << "S - stands for showing your current vector," << std::endl;
    usleep(1 * microsecond);
    std::cout << "CTRL + C - to quit the program." << std::endl;
    usleep(2 * microsecond);
    std::cout << "Make sure you have Caps Lock toggled off!" << std::endl;

    char key = getchar();
    int value = key;
    int n = 0;
 
    while(value != KEY_Q){
        
        switch(getchar()){
            
        case KEY_A:            
            std::cout << "Give me the number you want to add to your vector:";
            std::cin >> n;
            t.push_back(n);
            break;
        case KEY_X:
            t.pop_back();
            break;
        case KEY_S:
            if(t.size() == 0){
                std::cout << "Your vector is currently empty!" << std::endl;
            } else{
                showList(t);
            }
            break;
        }
 
        key = getchar();
        value = key;
    }

    system("pause");
    return 0;
}