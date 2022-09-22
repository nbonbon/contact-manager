project(
  'contact-manager', 
  'cpp',
  version : '1.0',
  default_options : [
    'warning_level=3',
    'cpp_std=c++11'
  ]
)

project_sources = []
project_header_files = []
project_test_sources = []

src = include_directories('src/contact_manager')

subdir('src')

contact_manager_exe_dependency_libs = [
  contact_manager_lib
]

contact_manager_exe_dependencies = [

]

contact_manager_exe = executable(
  'contact_manager_exe',
  main_source,
  include_directories : src,
  dependencies : contact_manager_exe_dependencies,
  link_with : contact_manager_exe_dependency_libs,
  install : true
)

gtest = subproject('gtest')
subdir('test')