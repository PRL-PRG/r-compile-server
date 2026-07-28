#? stdlib
`format.check_make_vars` <- function (x, ...) 
{
    .fmt <- function(x) {
        s <- Map(c, gettextf("Non-portable flags in variable '%s':", 
            names(x)), sprintf("  %s", lapply(x, paste, collapse = " ")))
        as.character(unlist(s))
    }
    .fmt2 <- function(x) {
        s <- Map(c, gettextf("Non-portable flags in file '%s':", 
            names(x)), sprintf("  %s", lapply(x, paste, collapse = " ")))
        as.character(unlist(s))
    }
    c(character(), if (length(bad <- x$pflags)) .fmt(bad), if (length(bad <- x$p2flags)) .fmt2(bad), 
        if (length(bad <- x$uflags)) {
            c(gettextf("Variables overriding user/site settings:"), 
                sprintf("  %s", bad))
        }, if (length(x$paths) > 1L) {
            c(sprintf("Package has both %s and %s.", sQuote("src/Makevars.in"), 
                sQuote("src/Makevars")), strwrap(sprintf("Installation with --no-configure' is unlikely to work.  If you intended %s to be used on Windows, rename it to %s otherwise remove it.  If %s created %s, you need a %s script.", 
                sQuote("src/Makevars"), sQuote("src/Makevars.win"), 
                sQuote("configure"), sQuote("src/Makevars"), 
                sQuote("cleanup"))))
        })
}
