#include "CppUtils/StringUtils/split.hpp"

#include "CppUtils/TestUtils/assertEqualElements.hpp"


using std::string;
using std::vector;


namespace CppUtils {


TEST(splitTest, successfulSplit) {
    assertEqualElements(
        { "this", "is", "a", "sentence!" },
        split("this is a sentence!", ' ')
    );
}


TEST(splitTest, emptyString) {
    assertEqualElements(vector<string>(), split("", ' '));
}


TEST(splitTest, emptyStringsAroundDelimiter) {
    assertEqualElements({ "", "src1" } , split("=src1" , '='));
    assertEqualElements({ "test" }     , split("test=" , '='));
    assertEqualElements({ "" }         , split("="     , '='));
}


} // namespace CppUtils