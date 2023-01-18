list(APPEND PROJECTS
        "BestProtection"
        "FutureBalance"
        "FutureEnergy"
        "SolarStormPrediction"
        "SoundToWords")

foreach(PROJECT IN LISTS PROJECTS)
    configure_file(
        ${CMAKE_SOURCE_DIR}/CMakeLists.txt.in
        ${CMAKE_SOURCE_DIR}/challenges/${PROJECT}/CMakeLists.txt
        @ONLY)

    add_subdirectory(${PROJECT})
endforeach()

enable_testing()