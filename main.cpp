#include <stdio.h>
#include <RInside.h>

int main(int argc, char **argv)
{
	printf("hello world\n");
    RInside R(argc, argv);
    R["txt"] = "Hello!\n";
    R.parseEvalQ("cat(txt)");
	return 0;
}
