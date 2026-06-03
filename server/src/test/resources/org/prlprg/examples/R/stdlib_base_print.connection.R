#? stdlib
`print.connection` <- function (x, ...) 
{
    usumm <- tryCatch(unlist(summary(x)), error = function(e) {
    })
    if (is.null(usumm)) {
        cl <- oldClass(x)
        cl <- cl[cl != "connection"]
        cat("A connection, ", if (length(cl)) 
            paste0("specifically, ", paste(sQuote(cl), collapse = ", "), 
                ", "), "but invalid.\n", sep = "")
    }
    else {
        cat("A connection with")
        print(cbind(` ` = usumm), ...)
    }
    invisible(x)
}
