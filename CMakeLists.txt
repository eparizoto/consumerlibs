# Sets the minimum version of CMake required to build your native library.
# This ensures that a certain set of CMake features is available to
# your build.

cmake_minimum_required(VERSION 3.4.1)


add_library( mynativecalcs
             SHARED
             IMPORTED )

set_target_properties( # Specifies the target library.
                    mynativecalcs

                    # Specifies the parameter you want to define.
                    PROPERTIES IMPORTED_LOCATION

                    # Provides the path to the library you want to import.
                    ${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/jniLibs/${ANDROID_ABI}/libmynativecalcsJNI.so )




################## # Generating our JNI library ##################
add_library( # Specifies the name of the library.
             calcsJNI

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             app/src/main/jni/mynativecalcsJNI.c )

 # Specifies a path to native header files.
 #include_directories(app/src/main/jni/)

target_link_libraries(calcsJNI mynativecalcs)