add_executable(book-manage main.cpp)
target_link_libraries(book-manage book-manage_main book-manage_isbn book-manage_sql book-manage_setting pthread boost_system boost_filesystem jsoncpp sqlite3)
