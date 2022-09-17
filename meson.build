project('contact-manager', 'cpp',
  version : '1.0',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

project_source_files = [
  'contact_manager.cpp',
  'Contact.cpp',
  'ContactListManager.cpp'
]

exe = executable('contact_manager', project_source_files,
  install : true)

test('basic', exe)
