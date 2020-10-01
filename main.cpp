#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"
#include "List.h"
#include "AList.h"
#include <vector>
#include <iostream>
using namespace std;




TEST_CASE( "Testing AList class assignment operator", "[AList]" ) {
    AList A, B;
    A.append(10);   A.append(20);
    B.append(7);    B.append(77);

    CHECK(A.to_string()=="<|10,20>");
    CHECK(B.to_string()=="<|7,77>");

    A = B;
    CHECK(A.to_string()=="<|7,77>");

    A.remove();
    B.append(777);
    CHECK(A.to_string()=="<|77>");
    CHECK(B.to_string()=="<|7,77,777>");
}
