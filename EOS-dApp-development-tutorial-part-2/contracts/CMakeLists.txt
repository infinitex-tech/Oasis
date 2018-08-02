set(DEFAULT_SYSTEM_INCLUDE_FOLDERS ${CMAKE_SOURCE_DIR}/contracts/libc++/upstream/include ${CMAKE_SOURCE_DIR}/contracts/musl/upstream/include ${Boost_INCLUDE_DIR})
set(STANDARD_INCLUDE_FOLDERS ${CMAKE_SOURCE_DIR}/contracts ${CMAKE_SOURCE_DIR}/externals/magic_get/include)

add_subdirectory(eosiolib)
add_subdirectory(musl)
add_subdirectory(libc++)

# Your contracts (add the name of the folder which contains you smart contract)
add_subdirectory(Players)
add_subdirectory(Marketplace)