#include <iostream>
#include <thread>  
#include <chrono>  
#include "./check.h" 

int main() {
    _integrity_check integrity_checker;

    while (true) {
        std::cout << "Checking integrity...\n";

        
        if (integrity_checker.check_integrity()) {
            std::cout << "Integrity check failed. .text section has been modified.\n";
        }
        else {
            std::cout << "Integrity check passed. .text section is intact.\n";
        }

  
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    return 0;
}
