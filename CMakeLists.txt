cmake_minimum_required(VERSION 3.2)
PROJECT(test_calibration)
#PROJECT(AFFIEN)
find_package(Eigen3 REQUIRED)
set(USE_OPENCV  1)
if(USE_OPENCV)
    find_package(OpenCV REQUIRED)
    # ${OpenCV_INCLUDE_DIRS}
endif()
include_directories(${PROJECT_NAME} ${Eigen3_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS} /usr/local/include/eigen3)
link_directories(${PROJECT_NAME} ${Eigen3_LIBRARY_DIRS} ${OpenCV_LIBRARY_DIRS})
# aux_source_directory(SRC_LIST .)

#add_executable(${PROJECT_NAME} main.cpp)
#target_link_libraries(${PROJECT_NAME} ${Eigen3_LIBRARIES}  ${OpenCV_LIBRARIES})
add_executable(${PROJECT_NAME} test_calibration.cpp)
target_link_libraries(${PROJECT_NAME} ${Eigen3_LIBRARIES}  ${OpenCV_LIBRARIES})
