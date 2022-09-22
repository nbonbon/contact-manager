all_test_deps = []
all_test_dep_libs = []
project_test_sources = []

gtest_dep = gtest.get_variable('gtest_dep')

test_main = files('tests_main.cpp')

test_deps = [
    gtest_dep
]

test_dep_libs = [

]

subdir('contact_manager')

# This executable contains all the tests
project_test_sources += test_main
all_test_deps += test_deps
all_test_dep_libs += test_dep_libs

all_testes = executable(
    'all_tests', 
    test_main, 
    include_directories : src, 
    dependencies : test_deps, 
    link_with : test_dep_libs
)