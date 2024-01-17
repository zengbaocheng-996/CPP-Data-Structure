#include <iostream>
#include <string>

using namespace std;

int hashFunction(string key, int tableSize)
{
    int hashVal = 0;
    for (int i = 0; i < key.length(); i++)
    {
        hashVal += key[i];
    }
    return hashVal % tableSize;
}

int main()
{
    string testString = "Hello";
    int tableSize = 17;
    int hashIndex = hashFunction(testString, tableSize);
    cout << "Hash index: " << hashIndex << endl;
    getchar();
    return 0;
}