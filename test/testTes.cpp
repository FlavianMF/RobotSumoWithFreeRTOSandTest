#include<unity.h>
#include<Arduino.h>
#include <SOMA.h>

void test_SOMA(void){
    TEST_ASSERT_EQUAL_INT(18, soma(12, 6));
}

int main(int argc, char** argv){
    UNITY_BEGIN();
    RUN_TEST(test_SOMA);
    UNITY_END();

    return 0;
}