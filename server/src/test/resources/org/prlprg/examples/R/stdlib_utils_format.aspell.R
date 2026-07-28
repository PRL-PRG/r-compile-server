#? stdlib
`format.aspell` <- function (x, sort = TRUE, verbose = FALSE, indent = 2L, ...) 
{
    if (!nrow(x)) 
        return(character())
    if (sort) 
        x <- x[order(x$Original, x$File, x$Line, x$Column), ]
    from <- split(sprintf("%s:%d:%d", x$File, x$Line, x$Column), 
        x$Original)
    if (verbose) {
        unlist(Map(function(w, f, s) {
            sprintf("Word: %s\nFrom: %s\n%s", w, paste0(c("", 
                rep.int("      ", length(f) - 1L)), f, collapse = "\n"), 
                paste(strwrap(paste("Suggestions:", paste(s[[1L]], 
                  collapse = " ")), exdent = 6L, indent = 0L), 
                  collapse = "\n"))
        }, names(from), from, split(x$Suggestions, x$Original)))
    }
    else {
        sep <- sprintf("\n%s", strrep(" ", indent))
        paste(names(from), vapply(from, paste, "", collapse = sep), 
            sep = sep)
    }
}
