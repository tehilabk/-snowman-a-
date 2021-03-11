#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;



string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

//Good snowman code
TEST_CASE("check good hat") {
    CHECK(snowman(11114411) == string("\n      \n _===_ \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(21114411) == string("\n  ___  \n ..... \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(31114411) == string("\n   _   \n  /_\\ \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(41114411) == string("\n  ___  \n (_*_) \n (.,.) \n ( : ) \n ( : ) \n"));
}

TEST_CASE("check good nose") {
    CHECK(snowman(11114411) == string("\n      \n _===_ \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(22114411) == string("\n  ___  \n ..... \n (...) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(33114411) == string("\n   _   \n  /_\\ \n (._.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(44114411) == string("\n  ___  \n (_*_) \n (. .) \n ( : ) \n ( : ) \n"));
}

TEST_CASE("check good left eye") {
   CHECK(snowman(11114411) == string("\n      \n _===_ \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(22214411) == string("\n  ___  \n .....\n (o..) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(33314411) == string("\n   _   \n  /_\\ \n (O_.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(44414411) == string("\n  ___  \n (_*_) \n (- .) \n ( : ) \n ( : ) \n"));
}

TEST_CASE("check good right eye") {
    CHECK(snowman(11114411) == string("\n      \n _===_ \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(22224411) == string("\n  ___  \n .....\n (o.o) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(33334411) == string("\n   _   \n  /_\\ \n (O_O) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(44444411) == string("\n  ___  \n (_*_) \n (- -) \n ( : ) \n ( : ) \n"));
}

TEST_CASE("check good left arm") {
    CHECK(snowman(11111411) == string("\n      \n _===_ \n (.,.) \n<( : ) \n ( : ) \n"));
    CHECK(snowman(22222411) == string("\n  ___  \n .....\n\\(o.o) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(33333411) == string("\n   _   \n  /_\\ \n (O_O) \n/( : ) \n ( : ) \n"));
    CHECK(snowman(44444411) == string("\n  ___  \n (_*_) \n (- -) \n ( : ) \n ( : ) \n"));

}

TEST_CASE("check good right arm") {
    CHECK(snowman(11111111) == string("\n      \n _===_ \n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(snowman(22222211) == string("\n  ___  \n .....\n\\(o.o)/\n ( : ) \n ( : ) \n"));
    CHECK(snowman(33333311) == string("\n   _   \n  /_\\ \n (O_O) \n/( : )\\\n ( : ) \n"));
    CHECK(snowman(44444411) == string("\n  ___  \n (_*_) \n (- -) \n ( : ) \n ( : ) \n"));
}
TEST_CASE("check good torso") {
    CHECK(snowman(11111111) == string("\n      \n _===_ \n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(snowman(22222221) == string("\n  ___  \n .....\n\\(o.o)/\n (] [) \n ( : ) \n"));
    CHECK(snowman(33333331) == string("\n   _   \n  /_\\ \n (O_O) \n/(> <)\\\n ( : ) \n"));
    CHECK(snowman(44444441) == string("\n  ___  \n (_*_) \n (- -) \n (   ) \n ( : ) \n"));
}

TEST_CASE("check good base") {
    CHECK(snowman(11111111) == string("\n      \n _===_ \n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(snowman(22222222) == string("\n  ___  \n .....\n\\(o.o)/ \n (] [) \n (" ") \n"));
    CHECK(snowman(33333333) == string("\n   _   \n  /_\\ \n (O_O) \n/(> <)\\\n (___) \n"));
    CHECK(snowman(44444444) == string("\n  ___  \n (_*_) \n (- -) \n (   ) \n (   ) \n"));
}



//Bad snowman code

TEST_CASE("Bad snowman- Number out of bounds case") {
    CHECK_THROWS(snowman(51111111));
    CHECK_THROWS(snowman(15111111));
    CHECK_THROWS(snowman(11511111));
    CHECK_THROWS(snowman(11151111));
    CHECK_THROWS(snowman(11111511));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(11111115));

}

TEST_CASE("Bad snowman- Number out of bounds, too small case") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(1111));
    CHECK_THROWS(snowman(11111));
    CHECK_THROWS(snowman(111111));
    CHECK_THROWS(snowman(1111111));
  
}

TEST_CASE("Bad snowman- Number out of bounds, too small case") {
   CHECK_THROWS(snowman(111111111));
    
}

TEST_CASE("Bad snowman- Negative case"){ 
    CHECK_THROWS(snowman(-11111111));                                     
   
}

















