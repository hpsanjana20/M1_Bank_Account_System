#include "unity.h"
extern void Urban();
extern void Rural();

void setUp(void)
{

}
void tearDown(void)
{

}
int main(void)
{
    UnityBegin(NULL);
    RUN_TEST (Urban);
    RUN_TEST (Rural);
    return (UnityEnd());
}
