#? stdlib
`zip` <- function (zipfile, files, flags = "-r9X", extras = "", zip = Sys.getenv("R_ZIPCMD", 
    "zip")) 
{
    if (missing(flags) && (!is.character(files) || !length(files))) 
        stop("'files' must be a character vector specifying one or more filepaths")
    if (!is.character(zip) || length(zip) != 1L || !nzchar(zip)) 
        stop(gettextf("'%s' must be a non-empty character string", 
            "zip"), domain = NA)
    args <- c(flags, shQuote(path.expand(zipfile)), shQuote(files), 
        extras)
    if (sum(nchar(c(args, Sys.getenv()))) + length(args) > 8000) {
        args <- c(flags, "-@", shQuote(path.expand(zipfile)), 
            extras)
        input <- files
    }
    else input <- NULL
    if (.Platform$OS.type == "windows") 
        invisible(system2(zip, args, input = input, invisible = TRUE))
    else invisible(system2(zip, args, input = input))
}

# Examples
