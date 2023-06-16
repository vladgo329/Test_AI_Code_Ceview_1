#include <iostream>
#include <thread>
#include <mutex>

std::mutex resourceMutex;
int* sharedVariable = nullptr;

void initializeVariable() {
    std::lock_guard<std::mutex> lock(resourceMutex);
    sharedVariable = new int(42);
    std::cout << "Variable initialized." << std::endl;
}

void deleteVariable() {
    std::cout << "Trying to delete variable..." << std::endl;
    std::lock_guard<std::mutex> lock(resourceMutex);
    delete sharedVariable;
    sharedVariable = nullptr;
    std::cout << "Variable deleted." << std::endl;
}

void useVariable() {
    std::cout << "Trying to use variable..." << std::endl;
    std::lock_guard<std::mutex> lock(resourceMutex);
    if (sharedVariable != nullptr) {
        std::cout << "Variable value: " << *sharedVariable << std::endl;
    } else {
        std::cout << "ERROR: Variable is null!" << std::endl;
    }
}

int main() {
    std::thread initializerThread(initializeVariable);
    std::thread deleterThread(deleteVariable);
    std::thread userThread(useVariable);

    initializerThread.join();
    deleterThread.join();
    userThread.join();

    return 0;
}
