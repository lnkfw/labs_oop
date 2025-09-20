# CMake generated Testfile for 
# Source directory: /workspaces/Programming/labs_oop/lab_001
# Build directory: /workspaces/Programming/labs_oop/lab_001/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MyProjectTests "/workspaces/Programming/labs_oop/lab_001/build/tests")
set_tests_properties(MyProjectTests PROPERTIES  _BACKTRACE_TRIPLES "/workspaces/Programming/labs_oop/lab_001/CMakeLists.txt;36;add_test;/workspaces/Programming/labs_oop/lab_001/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
