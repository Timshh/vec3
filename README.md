# Vector3

Header-only lib for 3D-vector on C++

## Installation (CMake)

include(FetchContent)

FetchContent_Declare(
    Vector3
    GIT_REPOSITORY https://github.com/Timshh/Vec3.git
    GIT_TAG main
)

FetchContent_MakeAvailable(Vector3)

target_link_libraries(MyApp PRIVATE Vector3)