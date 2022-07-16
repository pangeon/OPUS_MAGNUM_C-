#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;
long counter;

void memory_protector(); 

int main() 
{
    set_new_handler(memory_protector);

    try 
    {
        // I can create infinite number of arrays[10000] is not possible !
        for(counter = 1;; counter++) new int[10000]; 
        
    } 
    catch (std::bad_alloc &exeception) 
    {
        cout << "Catch exeception std::bad_alloc" << endl;
    }
}
void memory_protector() 
{
    cout << "Handler function: ran out memory = " << counter << endl;
    exit(1);
    throw bad_alloc();
};