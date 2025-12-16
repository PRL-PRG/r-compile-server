#? stdlib
`package_ff_call_db` <- function (dir) 
{
    ff_call_names <- c(".C", ".Call", ".Fortran", ".External", 
        "base::.C", "base::.Call", "base::.Fortran", "base::.External", 
        ".Call.graphics", ".External.graphics", ".External2")
    predicate <- function(e) {
        (length(e) > 1L) && !is.na(match(deparse(e[[1L]])[1L], 
            ff_call_names))
    }
    calls <- .find_calls_in_package_code(dir, predicate = predicate, 
        recursive = TRUE)
    calls <- unlist(Filter(length, calls))
    if (!length(calls)) 
        return(NULL)
    attr(calls, "dir") <- dir
    calls
}
