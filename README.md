#Emscripten-Examples

To compile I used
emcc custom_sqrt.c -s EXPORTED_FUNCTIONS="['_custom_sqrt']" --shell-file custom-shell.html -o main.html
emcc custom_sqrt.c --js-library functions.js --shell-file custom-shell.html -o main.html
