#? stdlib
`.aspell_package_defaults` <- function (dir, encoding = "unknown") 
{
    dfile <- file.path(dir, ".aspell", "defaults.R")
    if (!file_test("-f", dfile)) 
        return(NULL)
    exprs <- parse(dfile, encoding = encoding)
    envir <- new.env()
    for (e in exprs) eval(e, envir)
    as.list(envir)
}
