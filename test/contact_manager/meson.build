contact_manager_sources = [
    'ContactListManagerTest.cpp'
]

contact_manager_deps = [

]

contact_manager_lib_deps = [
    contact_manager_lib
]

contact_manager_tests = executable('contact_manager_tests', 
    [contact_manager_sources, test_main], 
    include_directories : src,
    dependencies : [contact_manager_deps,test_deps], 
    link_with : [contact_manager_lib_deps, test_dep_libs])

test('contact_manager_tests', contact_manager_tests)

all_test_deps += contact_manager_deps
all_test_dep_libs += contact_manager_lib_deps