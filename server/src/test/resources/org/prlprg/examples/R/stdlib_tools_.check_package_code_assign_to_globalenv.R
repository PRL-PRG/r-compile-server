#? stdlib
`.check_package_code_assign_to_globalenv` <- function (dir) 
{
    predicate <- function(e) {
        if (!is.call(e) || (length(x <- as.character(e[[1L]])) != 
            1L) || (x != "assign")) 
            return(FALSE)
        e <- e[as.character(e) != "..."]
        mc <- tryCatch(match.call(base::assign, e), error = identity)
        if (inherits(mc, "error") || identical(mc$x, ".Random.seed")) 
            return(FALSE)
        if (!is.null(env <- mc$envir) && identical(tryCatch(eval(env), 
            error = identity), globalenv())) 
            return(TRUE)
        if (!is.null(pos <- mc$pos) && identical(tryCatch(eval(call("as.environment", 
            pos)), error = identity), globalenv())) 
            return(TRUE)
        FALSE
    }
    calls <- Filter(length, .find_calls_in_package_code(dir, 
        predicate, recursive = TRUE))
    class(calls) <- "check_package_code_assign_to_globalenv"
    calls
}
