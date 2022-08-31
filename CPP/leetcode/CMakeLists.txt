#工程名称
project(leetcode)
 
#将所有以 .cpp 为后缀名的源文件添加到变量 src 中
file(GLOB_RECURSE src "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
 
#添加头文件可能的路径(系统头文件在 Clangd 知道编译器是什么的时候就确定了路径)
include_directories(
    #根目录的 gsl 库
    ${CMAKE_SOURCE_DIR}/gsl
)
 
#将 src 对应的文件作为最终生成可执行文件的部分源文件
#add_executable(工程名称 参数1 参数2 ...)
#变量需要以${变量名}的形式引用
add_executable(leetcode ${src})