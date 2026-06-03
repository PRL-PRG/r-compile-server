#? stdlib
`.find_calls_in_file` <- function (file, encoding = NA, predicate = NULL, recursive = FALSE) 
{
    .find_calls(.parse_code_file(file, encoding), predicate, 
        recursive)
}
