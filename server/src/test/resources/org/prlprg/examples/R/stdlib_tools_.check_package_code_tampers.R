#? stdlib
`.check_package_code_tampers` <- function (dir) 
{
    dfile <- file.path(dir, "DESCRIPTION")
    pkgname <- if (file.exists(dfile)) 
        .read_description(dfile)["Package"]
    else ""
    predicate <- function(e) {
        if (length(e) <= 1L) 
            return(FALSE)
        if (as.character(e[[1L]])[1L] %in% "unlockBinding") {
            e3 <- as.character(e[[3L]])
            if (e3[[1L]] == "asNamespace") 
                e3 <- as.character(e[[3L]][[2L]])
            return(e3 != pkgname)
        }
        if ((as.character(e[[1L]])[1L] %in% ".Internal") && as.character(e[[2L]][[1L]]) == 
            "unlockBinding") 
            return(TRUE)
        if (as.character(e[[1L]])[1L] %in% "assignInNamespace") {
            e3 <- as.character(e[[4L]])
            if (e3[[1L]] == "asNamespace") 
                e3 <- as.character(e[[4L]][[2L]])
            return(e3 != pkgname)
        }
        FALSE
    }
    x <- Filter(length, .find_calls_in_package_code(dir, predicate, 
        recursive = TRUE))
    if (length(x)) 
        writeLines(unlist(Map(.format_calls_in_file, x, names(x))))
    invisible(x)
}
