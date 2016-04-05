#Emscripten-Examples

To compile I used
emcc custom_sqrt.cpp -s EXPORTED_FUNCTIONS="['_custom_sqrt']" --shell-file custom-shell.html -o sqrt.html
