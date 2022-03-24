
shadr@SHADRACK-PC MINGW64 ~/OneDrive/Desktop (master)
$ ssh a2bb0c1f11d2@a2bb0c1f11d2.cd7bab00.alx-cod.online
a2bb0c1f11d2@a2bb0c1f11d2.cd7bab00.alx-cod.online's password:
root@a2bb0c1f11d2:/# ls
0x01-git                       Betty  home       libx32  README.md  sys
0x03_vi                        bin    inserting  media   root       tmp
alx-low_level_programming      boot   lib        mnt     run        usr
alx-pre_course                 dev    lib32      opt     sbin       var
alx-system_engineering-devops  etc    lib64      proc    srv
root@a2bb0c1f11d2:/# cd alx-low_level_programming
root@a2bb0c1f11d2:/alx-low_level_programming# ls
0x00-hello_world              0x03-debugging                    0x06-pointers_arrays_strings
0x01-variables_if_else_while  0x04-more_functions_nested_loops  README.md
0x02-functions_nested_loops   0x05-pointers_arrays_strings
root@a2bb0c1f11d2:/alx-low_level_programming# 0x06-pointers_arrays_strings
bash: 0x06-pointers_arrays_strings: command not found
root@a2bb0c1f11d2:/alx-low_level_programming# cd 0x06-pointers_arrays_strings
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# ls
main.h  _putchar.c  README.md
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# cat >0-strcat.c
#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# git add .
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# git commit -m 'creates file 0'
[master af3515a] creates file 0
 1 file changed, 23 insertions(+), 16 deletions(-)
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 616 bytes | 616.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Slimdaddy254/alx-low_level_programming.git
   2d0ac21..af3515a  master -> master
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# cat >1-strncat.c
#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# git add .
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# git commit -m 'creates file 1'
[master dfec691] creates file 1
 1 file changed, 32 insertions(+)
 create mode 100644 0x06-pointers_arrays_strings/1-strncat.c
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 553 bytes | 553.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Slimdaddy254/alx-low_level_programming.git
   af3515a..dfec691  master -> master
root@a2bb0c1f11d2:/alx-low_level_programming/0x06-pointers_arrays_strings# cat >2-strncpy.c
#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);

}
