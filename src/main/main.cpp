#include <iostream>
#include <staticlib/staticlibrary.h>
#include <sharedlib/sharedlibrary.h>
int main() {
   Static::hello();
   Shared::hello();

        return 0;
}
