#ifndef __FILATTI_TEST_HPP__
#define __FILATTI_TEST_HPP__

#include <string>
std::string IMAGE_FILE_1("../tests/test1.jpg");
std::string IMAGE_FILE_2("../tests/test2.jpg");
std::string IMAGE_FILE_400_400("../tests/test_400_400.jpg");
std::string IMAGE_FILE_640_360("../tests/test_640_360.jpg");

#include <chrono>
inline std::chrono::milliseconds get_current_milliseconds() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch());
}

#endif //__FILATTI_TEST_HPP__
