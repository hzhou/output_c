/* frame_init */
DUMP_STUB frame_init
/* global_init */
DUMP_STUB global_init
/* meta_init */
DUMP_STUB meta_init

#include <stdio.h>

void M(void);

int main(int argc, char **argv)
{
    M();
    return 0;
}

void M()
{
    /* function local goes in XXX_pre */
    DUMP_STUB M_pre
    $call custom
}

/* exit stubs */
DUMP_STUB meta_exit
DUMP_STUB global_exit
DUMP_STUB frame_exit
/* end of template */
