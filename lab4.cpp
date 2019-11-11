#include <iostream>
#include <tuple>

#include "vertex.h"
#include "square.h"
#include "rectangle.h"
#include "trapeze.h"

#include "templates.h"

enum Commands{
    cmd_quit,
    cmd_sqr,
    cmd_rect,
    cmd_trpz
};

template<class T>
void process() {
    T object(std::cin);
    //void read(std::cin, object);
    print(object, std::cout);
    std::cout << "Center: [" << center(object) << "]" << std::endl;
    std::cout << "Area: " << area(object) << std::endl;
}


int main(){
    for (;;){
        int command;
        std::cin >> command;
        switch (command){
            case cmd_quit:
                exit(0);
            case cmd_sqr:
                process<square<int>>();
                break;
            case cmd_rect:
                process<rectangle<int>>();
                break;
            case cmd_trpz:
                process<trapeze<int>>();
                break;
        }
    }
}
