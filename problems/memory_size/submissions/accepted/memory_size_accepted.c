#include <stdio.h>

unsigned int findMemorySize(unsigned int memorySize)
{
    if ((memorySize & (memorySize - 1)) == 0)
    {
        return memorySize;
    }
    int powerOfTwo = 1;
    while (powerOfTwo < memorySize)
    {
        powerOfTwo <<= 1;
    }

    return powerOfTwo;
}

int main(int argc, char const *argv[])
{
    unsigned int n, i, dataSize, memSize;
    scanf("%d", &n);

    memSize = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &dataSize);
        memSize += dataSize;
    }
    memSize = findMemorySize(memSize);
    printf("%d", memSize);
}
