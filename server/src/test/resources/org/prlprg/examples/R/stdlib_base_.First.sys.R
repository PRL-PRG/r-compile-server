#? stdlib
`.First.sys` <- function () 
{
    for (pkg in getOption("defaultPackages")) {
        res <- require(pkg, quietly = TRUE, warn.conflicts = FALSE, 
            character.only = TRUE)
        if (!res) 
            warning(gettextf("package %s in options(\"defaultPackages\") was not found", 
                sQuote(pkg)), call. = FALSE, domain = NA)
    }
}
