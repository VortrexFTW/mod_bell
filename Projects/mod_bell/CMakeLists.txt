disable_rtti()

file(GLOB_RECURSE SOURCES *.cpp *.h)

new_library_shared(mod_bell "${SOURCES}" "")

math(EXPR _CMAKE_BITS "${CMAKE_SIZEOF_VOID_P} * 8")

set_target_properties(mod_bell PROPERTIES FOLDER modules)
