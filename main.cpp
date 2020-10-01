//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"
#include "List.h"
#include "AList.h"
#include <vector>
#include <iostream>
using namespace std;


int main() {
    AList A(6), B(4), C(5);

    A.append(10);
    A.append(20);
    A.append(300);
    B.append(100);
    B.append(200);


//    B = A;
    C = A + B;

    for(C.moveToStart(); !C.isAtEnd(); C.next()) {
        cout << C.getValue() << endl;
    }

    if (A > B) {
        cout << "A es mayor que B" << endl;
    }


}


//
//TEST_CASE( "Testing AList class", "[AList]" ) {
//
//    AList L;
//    L.append(10);
//    L.append(20);
//    CHECK(L.to_string()=="<|10,20>");
//    L.next();
//    CHECK(L.to_string()=="<10|20>");
//    L.next();
//    CHECK(L.to_string()=="<10,20|>");
//    L.next();
//    CHECK(L.to_string()=="<10,20|>");
//    L.append(30);
//    CHECK(L.to_string()=="<10,20|30>");
//    L.remove();
//    CHECK(L.to_string()=="<10,20|>");
//    L.prev();
//    L.prev();
//    L.remove();
//    CHECK(L.to_string()=="<|20>");
//    L.append(40); L.append(50); L.append(60);
//    L.moveToPos(4);
//    CHECK(L.to_string()=="<20,40,50,60|>");
//
//}
