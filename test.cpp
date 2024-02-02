#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

#include <iostream>
#include <vector>

TEST_CASE("Multiples Function", "[Multiples]"){
    vector<int> v = {1*1,1*2,1*3,1*4};
    REQUIRE(Multiples(1, 4) == v);
}

TEST_CASE("SquaresUntil Function", "[SquareUntil]"){
    vector<int> v = {1,4,9,16,25}
    REQUIRE(SquaresUntil(5) == v);   
}

TEST_CASE("Factorial Function", "[Fatorial]"){
    REQUIRE(Factorial(5 == 120);   
}

TEST_CASE("Sign Function", "[Sign]"){
    REQUIRE(Sign(100) == 1); 
    REQUIRE(Sign(-100) == -1);  
}