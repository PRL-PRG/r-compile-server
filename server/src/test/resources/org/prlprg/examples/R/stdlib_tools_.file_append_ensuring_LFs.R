#? stdlib
`.file_append_ensuring_LFs` <- function (file1, file2) 
{
    .Call(C_codeFilesAppend, file1, file2)
}
