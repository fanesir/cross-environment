cmake_minimum_required(VERSION 3.16.3)
project(test_code)


find_package(QT NAMES Qt5 COMPONENTS Core Widgets Network)
find_package(Qt5 COMPONENTS Core Widgets Network)

INCLUDE_DIRECTORIES(/home/user/mxe/usr/x86_64-w64-mingw32.static/qt5/include)#在這輸入編譯會輸出exe檔案


#兩個 /usr/include/x86_64-linux-gnu/qt5 /usr/include/x86_64-linux-gnu/qt5/QtWidgets 
message("path = ${Qt5_Gui_INCLUDE_DIRS}")

LINK_DIRECTORIES(/home/user/mxe/usr/x86_64-w64-mingw32.static/qt5/lib) 


SET(CMAKE_CXX_FLAGS "-fPIC")
SET(CMAKE_CXX_STANDARD 11)


# Qt特有的编译器需要打开，默认是关闭的
SET(CMAKE_AUTOMOC ON)#V
SET(CMAKE_AUTORCC ON)
SET(CMAKE_AUTOUIC ON)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)


set (WIN32_RESOURCES ${CMAKE_CURRENT_SOURCE_DIR}/res.qrc)

set(appicon "${CMAKE_CURRENT_SOURCE_DIR}/appicon.rc")


#
add_executable(lanshare  main.cpp 
settings.cpp 
singleinstance.cpp 
util.cpp 
ui/mainwindow.cpp 
ui/receiverselectordialog.cpp /
    ui/aboutdialog.cpp /
    ui/settingsdialog.cpp /
    transfer/devicebroadcaster.cpp /
    transfer/receiver.cpp /
    transfer/sender.cpp /
    transfer/transfer.cpp /
    transfer/transferserver.cpp /
    model/device.cpp /
    model/devicelistmodel.cpp /
    model/transferinfo.cpp /
    model/transfertablemodel.cpp /     
    ${WIN32_RESOURCES}
    ${appicon})
target_link_libraries(lanshare  Qt5::Widgets Qt5::Network )






