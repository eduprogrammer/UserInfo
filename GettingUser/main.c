#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>

int main()
{

    uid_t uid;
    struct passwd *pwd;

    uid = getuid();
    pwd = getpwuid(uid);

    printf("### User Info By Eduardo Programador ###\n");

    printf("1. User Name is: %s\n", pwd->pw_name);
    printf("2. User Group is: %d\n",pwd->pw_gid);
    printf("3. User Directory is: %s\n", pwd->pw_dir);
    printf("4. User Id is: %d\n", pwd->pw_uid);
    printf("5. User Shell is: %s\n", pwd->pw_shell);

    printf("Bye!");

    return 0;
}
