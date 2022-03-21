/*
** EPITECH PROJECT, 2022
** Test LZW for Giantman
** File description:
** Xavier VINCENT - Hugo DUBOIS
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "giantman.h"

Test(lzw_decoding, basic_lzw_decoding_null_ptr)
{
    int returned_value = lzw_decoding(NULL);

    cr_assert_eq(returned_value, ERROR);
}

Test(lzw_decoding, basic_lzw_decoding, .init = cr_redirect_stdout)
{
    unsigned short *file_data = malloc(sizeof(unsigned short) * 6);
    file_data[0] = (unsigned short)'S';
    file_data[1] = (unsigned short)'A';
    file_data[2] = (unsigned short)'L';
    file_data[3] = (unsigned short)'U';
    file_data[4] = (unsigned short)'T';
    file_data[5] = (unsigned short)' ';
    file_data[6] = (unsigned short)128;
    file_data[7] = (unsigned short)130;
    file_data[8] = (unsigned short)'T';
    int returned_value = lzw_decoding(file_data);

    cr_assert_stdout_eq_str("SALUT SALUT");
    cr_assert_eq(returned_value, SUCCESS);
    free(file_data);
}
