#include <Arduino.h>
#include <unity.h>
#include <SOMA.h>

void test_SOMA(void){
    TEST_ASSERT_EQUAL_INT(18, soma(12, 6));
}

void setup(){
    UNITY_BEGIN();
    RUN_TEST(test_SOMA);
    UNITY_END();
}

void loop(){


}