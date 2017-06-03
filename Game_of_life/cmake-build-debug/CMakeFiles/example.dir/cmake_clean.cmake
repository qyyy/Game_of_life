file(REMOVE_RECURSE
  "example.pdb"
  "example.exe"
  "example.exe.manifest"
  "libexample.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/example.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
