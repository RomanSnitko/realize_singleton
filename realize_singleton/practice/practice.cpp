#include <iostream>
//one example 
class Singleton {
private:
    Singleton() {} //can not create an object from outside
    static Singleton* ptr;
    Singleton(const Singleton&) = delete; //delete constructor of copy
    Singleton& operator=(const Singleton&) = delete; //can not appropriate
    
public:
    static Singleton& getObject() {
        if (ptr == nullptr) {
            ptr = new Singleton();
        }
        return *ptr;
    }
};

Singleton* Singleton::ptr = nullptr;

class 

int main(){
    Singleton& s = Singleton::getObject();
}
