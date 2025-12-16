#? stdlib
`add_datalist` <- function (pkgpath, force = FALSE, small.size = 1024^2) 
{
    dlist <- file.path(pkgpath, "data", "datalist")
    if (!force && file.exists(dlist)) 
        return()
    size <- sum(file.size(Sys.glob(file.path(pkgpath, "data", 
        "*"))))
    if (size <= small.size) 
        return()
    z <- list_data_in_pkg(dir = pkgpath, use_datalist = FALSE)
    if (!length(z)) 
        return()
    con <- file(dlist, "w")
    for (nm in names(z)) {
        zz <- z[[nm]]
        if (length(zz) == 1L && zz == nm) 
            writeLines(nm, con)
        else cat(nm, ": ", paste(zz, collapse = " "), "\n", sep = "", 
            file = con)
    }
    close(con)
    invisible()
}

# Examples
