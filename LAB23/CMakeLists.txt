cmake_minimum_required(VERSION 3.27)
project(LAB23 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Domain)
include_directories(DynamicArray)
include_directories(Repository)
include_directories(Service)
include_directories(Tests)
include_directories(UI)

add_executable(LAB23
        Domain/domain.c
        Domain/domain.h
        DynamicArray/dynamic_array.c
        DynamicArray/dynamic_array.h
        Repository/repository.c
        Repository/repository.h
        Repository/undoredorepository.c
        Repository/undoredorepository.h
        Service/service.c
        Service/service.h
        Tests/tests.c
        Tests/tests.h
        UI/ui.c
        UI/ui.h
        main.c
        main.h)
