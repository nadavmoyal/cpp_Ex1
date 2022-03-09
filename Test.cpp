/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good input") {
	CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
													 "@-------@\n"
													 "@-@@@@@-@\n"
													 "@-@---@-@\n"
													 "@-@@@@@-@\n"
													 "@-------@\n"
													 "@@@@@@@@@"));
                                                     
    CHECK(nospaces(mat(7, 5, 'x', '0')) == nospaces ("xxxxxxx\n"
													 "x00000x\n"
													 "x0xxx0x\n"
													 "x00000x\n"
													 "xxxxxxx\n"));
    CHECK(nospaces(mat(1, 1, '$', '0')) == nospaces ("$\n"));
}

TEST_CASE("zero or negative input to 'col' or 'row':") {
    int i= 0;
    while(i>-1000){
    CHECK_THROWS(mat(i, 5, '$', '%'));
    CHECK_THROWS(mat(3, i, '!', '$'));
    CHECK_THROWS(mat(i, 9, '*', '@'));
    CHECK_THROWS(mat(i+1000, 0, '*', 't'));
    CHECK_THROWS(mat(0, i+1000, '*', 't'));
    i=i-1;
    }
    }

TEST_CASE("even input to 'col' or 'row':") {
    int i=2;
    while(i<1000){
    CHECK_THROWS(mat(i, 5, '$', '%'));
    CHECK_THROWS(mat(3, i, '!', '$'));
    CHECK_THROWS(mat(i, 9, '*', '@'));
    CHECK_THROWS(mat(i+1000, 0, '*', 't'));
    CHECK_THROWS(mat(0, i+1000, '*', 't'));
    i=i+2;
    }
    }

TEST_CASE("even input to 'col' or 'row':") {
    int i=2;
    while(i<1000){
    CHECK_THROWS(mat(i, 5, '$', '%'));
    CHECK_THROWS(mat(3, i, '!', '$'));
    CHECK_THROWS(mat(i, 9, '*', '@'));
    CHECK_THROWS(mat(i+1000, 0, '*', 't'));
    CHECK_THROWS(mat(0, i+1000, '*', 't'));
    i=i+2;
    }
    }

									
TEST_CASE("Bad input") {
    CHECK_THROWS(mat(10, 5, '$', '%'));
    /* Add more test here */
}


/* Add more test cases here */