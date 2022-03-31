#include "unity.h"

extern void account();
void setUp(void)
{

}
void tearDown(void)
{

}
int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(account);
    return (UnityEnd());

}