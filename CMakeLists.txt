cmake_minimum_required(VERSION 3.10)
project(PICProject C)

# Set the path to your CC5X compiler script
set(CC5X_COMPILER "${CMAKE_SOURCE_DIR}/cc5x-crossover.sh")

# Device selection
set(PIC_DEVICE "16F15313")

# Directory structure
set(SRCDIR "${CMAKE_SOURCE_DIR}/src")
set(INCLUDEDIR "${CMAKE_SOURCE_DIR}/include")
set(OUTPUTDIR "${CMAKE_SOURCE_DIR}/output")

# Gather all source files
file(GLOB SOURCES "${SRCDIR}/*.c")

# Create a custom target with a valid name
add_custom_target(build_all)

# Add custom commands for each source file
foreach(SOURCE_FILE ${SOURCES})
    get_filename_component(FILENAME ${SOURCE_FILE} NAME_WE)
    
    add_custom_command(
        OUTPUT ${OUTPUTDIR}/${FILENAME}.hex
        COMMAND mkdir -p ${OUTPUTDIR}
        COMMAND ${CC5X_COMPILER} ${SOURCE_FILE} -p${PIC_DEVICE} -a -L -V -o${OUTPUTDIR}/${FILENAME}
        DEPENDS ${SOURCE_FILE}
        COMMENT "Compiling ${SOURCE_FILE} with CC5X"
    )
    
    # Add the output to the build_all target
    add_custom_target(${FILENAME}_target DEPENDS ${OUTPUTDIR}/${FILENAME}.hex)
    add_dependencies(build_all ${FILENAME}_target)
endforeach()

# Custom clean target
add_custom_target(clean_all
    COMMAND rm -f ${OUTPUTDIR}/*.hex ${OUTPUTDIR}/*.asm ${OUTPUTDIR}/*.lst
    COMMENT "Cleaning output files"
)