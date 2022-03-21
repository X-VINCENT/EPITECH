/*
** EPITECH PROJECT, 2021
** Basic LS L file for My LS
** File description:
** Xavier VINCENT
*/

#include "my_ls.h"

void print_total(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *dirent;
    struct stat st;
    int total = 0;
    char *new_path = malloc(sizeof(char) * my_strlen(path) + 1024);

    while (dirent = readdir(dir)) {
        new_path = my_strcat(path, dirent->d_name);
        if (lstat(new_path, &st) == 0)
            total += (dirent->d_name[0] != '.') ? st.st_blocks : 0;
    }
    closedir(dir);
    free(new_path);
    my_printf("total ");
    my_put_nbr(total / 2);
    my_printf("\n");
}

void ls_l_permissions(struct stat st)
{
    char *permissions = malloc(sizeof(char) * 11);

    permissions[0] = (S_ISDIR(st.st_mode)) ? 'd' :
        (S_ISCHR(st.st_mode)) ? 'c' :
        (S_ISBLK(st.st_mode)) ? 'b' : '-';
    permissions[1] = (st.st_mode & S_IRUSR) ? 'r' : '-';
    permissions[2] = (st.st_mode & S_IWUSR) ? 'w' : '-';
    permissions[3] = (st.st_mode & S_IXUSR) ? 'x' : '-';
    permissions[4] = (st.st_mode & S_IRGRP) ? 'r' : '-';
    permissions[5] = (st.st_mode & S_IWGRP) ? 'w' : '-';
    permissions[6] = (st.st_mode & S_IXGRP) ? 'x' : '-';
    permissions[7] = (st.st_mode & S_IROTH) ? 'r' : '-';
    permissions[8] = (st.st_mode & S_IWOTH) ? 'w' : '-';
    permissions[9] = (st.st_mode & S_IXOTH) ? 'x' :
        (st.st_mode & S_ISVTX) ? 'T' : '-';
    permissions[10] = '\0';
    my_printf("%s ", permissions);
    free(permissions);
}

void edit_date(char *date)
{
    for (int i = 4; i < 16; i += 1)
        date[i - 4] = date[i];
    date[12] = '\0';
    my_printf(" %s", date);
}

void basic_ls_l_bis(struct stat st)
{
    struct passwd *pwd = getpwuid(st.st_uid);
    struct group *grp = getgrgid(st.st_gid);
    char *date = ctime(&st.st_mtime);

    ls_l_permissions(st);
    my_put_nbr(st.st_nlink);
    my_printf(" %s ", pwd->pw_name);
    my_printf("%s ", grp->gr_name);
    my_put_nbr(st.st_size);
    edit_date(date);
}

void basic_ls_l(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *dirent;
    struct stat st;
    char *new_path = malloc(sizeof(char) * my_strlen(path) + 128);

    print_total(path);
    while (dirent = readdir(dir))
        if (dirent->d_name[0] != '.') {
            new_path = my_strcat(path, dirent->d_name);
            stat(new_path, &st);
            basic_ls_l_bis(st);
            my_printf(" %s\n", dirent->d_name);
            new_path = '\0';
        }
    closedir(dir);
    free(new_path);
}
