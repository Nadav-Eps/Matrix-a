#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "Matrix.hpp"
using namespace std;
using namespace zich;
std::vector<double> vec9 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
std::vector<double> vec9_mul2 = {2, 0, 0, 0, 2, 0, 0, 0, 2};//9
std::vector<double> vec9_add = {3, 0, 0, 0, 3, 0, 0, 0, 3};//9
std::vector<double> vec12 = {1, 1, 3, 1, 1, 0, 0, 0, 1, 2, 3, 4};//12
std::vector<double> vec15 = {1, 0, 0, 0, 1, 6, 2, 5, 1, 2, 3, 4, 2, 3, 4};//15
std::vector<double> vec6 = {1, 0, 0, 0, 1, 2};
std::vector<double> vec6_red1 = {0, -1, -1, -1, 0, 1};//6
std::vector<double> vec7 = {1, 0, 8, 0, 1, 5, 7, 0, 1, 1};//7
std::vector<double> vec_neg = {1, -4, 3, -5, 1, 0, 0, 0, 1};//9

TEST_CASE("Checks the constractur works"){
    CHECK_NOTHROW(Matrix a(vec9, 3, 3));
    CHECK_NOTHROW(Matrix b(vec12, 4, 3));
    CHECK_NOTHROW(Matrix c(vec12, 3, 4));
    CHECK_NOTHROW(Matrix d(vec15, 5, 3));
    CHECK_NOTHROW(Matrix e(vec15, 15, 1));
    CHECK_NOTHROW(Matrix f(vec6, 2, 3));
    CHECK_NOTHROW(Matrix g(vec6, 3, 2));
    CHECK_NOTHROW(Matrix h(vec_neg, 3, 3));//checks matrix with negative values

    //checks invalid rows and cols 
    CHECK_THROWS(Matrix k(vec9, 4, 3));
    CHECK_THROWS(Matrix L(vec12, 5, 3));
    CHECK_THROWS(Matrix m(vec15, 4, 3));
    CHECK_THROWS(Matrix m(vec15, 3, 3));
    CHECK_THROWS(Matrix m(vec_neg, 4, 3));
    CHECK_THROWS(Matrix m(vec6, 4, 3));

}

TEST_CASE("Checks the Operators"){
    //First i create some matrix i can use to check the operators
    Matrix a(vec9, 3, 3);
    Matrix a2(vec9_mul2, 3, 3);
    Matrix a3(vec9_add, 3, 3);
    Matrix b(vec12, 4, 3);
    Matrix b1(vec12, 4, 3);
    Matrix c(vec12, 3, 4);
    Matrix d(vec15, 5, 3);
    Matrix e(vec15, 15, 1);
    Matrix f(vec6, 2, 3);
    Matrix fm(vec6_red1, 2, 3);
    Matrix g(vec6, 3, 2);
    Matrix h(vec_neg, 3, 3);

    //lets check the Operator =
    CHECK(b==b1);
    CHECK_FALSE(b==a);
    CHECK_FALSE(e==f);
    CHECK(g!=h);

    //lets check the += -= < > <= >= Operators

    CHECK_NOTHROW(b1+=2);
    CHECK(b1>=b);//after addind 2 to b1 it should be bigger the b
    CHECK(b1>b);
    CHECK_NOTHROW(b1-=3);
    CHECK(b1<=b);//after adding 2 we reduce 3 so it sould be smaller
    CHECK(b1<b);
    CHECK_NOTHROW(b1+=1);
    CHECK(b1==b);//now they should be equal

    //lets check *= -- ++ Operators

    CHECK_NOTHROW(a*=2);
    CHECK(a==a2);//after multiplying a by 2 it should be equal to a2
    CHECK_NOTHROW(a*=0.5);
    CHECK(a!=a2);

    CHECK(f!=fm);//fm is exactly like f but -1 in all 
    CHECK_NOTHROW(f--);
    CHECK(f==fm);//after reducing 1 from f it should be equal to fm
    CHECK_NOTHROW(f++);
    CHECK(f>fm);//affter adding one back to f it should be bigger the fm

    CHECK_NOTHROW(a+=a2);
    CHECK(a==a3);
    CHECK_NOTHROW(a*=b);


}