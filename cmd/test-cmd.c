#include <common.h>
#include <command.h>

int do_testcmd(struct cmd_tb1 *cmdtp, int flag, int argc, char *const argv[])
{
    printf("Hellow world\n");

}

U_BOOT_CMD(
        testcmd, 1, 1, do_testcmd,
        "testcmd:",
        "this is a test command"
);

