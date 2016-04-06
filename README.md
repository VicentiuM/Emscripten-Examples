#Emscripten-Examples

To compile I used
emcc custom.c -o main.html -s EXPORTED_FUNCTIONS="['_custom_sqrt','_js_is_even']" --js-library functions.js --shell-file custom_shell.html
