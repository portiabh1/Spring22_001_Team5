#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "Sign testing", "[sign]") {
  REQUIRE( Sign(6) == 1 );
  REQUIRE( Factorial(-1000) == -1 );
  REQUIRE( Factorial(0) == 0 );
  REQUIRE( Factorial(1234892379248) == 1 );
  REQUIRE( Factorial(-2039873628719) == -1 );
}
