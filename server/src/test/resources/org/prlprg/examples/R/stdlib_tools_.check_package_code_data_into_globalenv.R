#? stdlib
`.check_package_code_data_into_globalenv` <- function (dir) 
{
    predicate <- function(e) {
        if (!is.call(e) || (length(x <- as.character(e[[1L]])) != 
            1L) || (x != "data")) 
            return(FALSE)
        env <- e$envir
        tab <- c("package", "lib.loc", "verbose", "envir")
        if (!is.null(nms <- names(e))) 
            e <- e[nms %notin% tab]
        ((length(e) > 1L) && (is.null(env) || (is.name(env) && 
            as.character(env) == ".GlobalEnv") || (is.call(env) && 
            as.character(env[[1L]]) == "globalenv")))
    }
    calls <- Filter(length, .find_calls_in_package_code(dir, 
        predicate, recursive = TRUE))
    class(calls) <- "check_package_code_data_into_globalenv"
    calls
}
