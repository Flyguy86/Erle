file(REMOVE_RECURSE
  "CMakeFiles/uncrustify"
  "CMakeFiles/uncrustify-complete"
  "external_project/src/uncrustify-stamp/uncrustify-install"
  "external_project/src/uncrustify-stamp/uncrustify-mkdir"
  "external_project/src/uncrustify-stamp/uncrustify-download"
  "external_project/src/uncrustify-stamp/uncrustify-update"
  "external_project/src/uncrustify-stamp/uncrustify-patch"
  "external_project/src/uncrustify-stamp/uncrustify-configure"
  "external_project/src/uncrustify-stamp/uncrustify-build"
  "external_project/src/uncrustify-stamp/uncrustify-copy_source"
)

# Per-language clean rules from dependency scanning.
foreach(lang)
  include(CMakeFiles/uncrustify.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
