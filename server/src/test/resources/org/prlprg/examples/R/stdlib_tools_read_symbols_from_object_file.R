#? stdlib
`read_symbols_from_object_file` <- function (f) 
{
    nm <- Sys.getenv("UserNM")
    if (!nzchar(nm)) {
        nm <- Sys.which("nm")
        if (nzchar(nm)) 
            nm <- shQuote(nm)
    }
    if (!nzchar(nm)) {
        warning("this requires 'nm' to be on the PATH")
        return()
    }
    f <- file_path_as_absolute(f)
    if (!(file.size(f))) 
        return()
    s <- strsplit(system(sprintf("%s -Pg %s", nm, shQuote(f)), 
        intern = TRUE), " +")
    n <- length(s)
    tab <- matrix("", nrow = n, ncol = 4L)
    colnames(tab) <- c("name", "type", "value", "size")
    i <- rep.int(seq_len(n), lengths(s))
    j <- unlist(lapply(s, seq_along))
    tab[n * (j - 1L) + i] <- unlist(s)
    tab
}
