#? stdlib
`.check_package_code_attach` <- function (dir) 
{
    predicate <- function(e) ((length(x <- as.character(e[[1L]])) == 
        1L) && (x == "attach"))
    calls <- Filter(length, .find_calls_in_package_code(dir, 
        predicate, recursive = TRUE))
    class(calls) <- "check_package_code_attach"
    calls
}
