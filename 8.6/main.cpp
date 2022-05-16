#include <iostream>
#include <cstring>

using namespace std;

void strcopy(char target[], char source[])
{
    int index = 0;

    do
        target[index] = source[index];
    while (target[index++] != 0);
}

int main()
{
    char message[] = {"You're C++ programmer. "};
    char answer[120];

    strcopy(answer, message);
    cout << answer;

    strncpy(answer, "But in the moment low-level... ", sizeof("But in the moment low-level... "));
    cout << answer;

    strcpy(answer, "Don't worry about it.");
    cout << answer;
}