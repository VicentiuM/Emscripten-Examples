#Emscripten-Examples

To compile I used
emcc int_sqrt.cpp -s EXPORTED_FUNCTIONS="['_int_sqrt']" --shell-file custom-shell.html -o int_sqrt.html
