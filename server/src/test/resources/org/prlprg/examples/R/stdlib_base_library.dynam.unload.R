#? stdlib
`library.dynam.unload` <- function (chname, libpath, verbose = getOption("verbose"), file.ext = .Platform$dynlib.ext) 
{
    dll_list <- .dynLibs()
    if (missing(chname) || nchar(chname, "c") == 0L) 
        if (.Platform$OS.type == "windows") 
            stop("no DLL was specified")
        else stop("no shared object was specified")
    libpath <- normalizePath(libpath, "/", TRUE)
    chname1 <- paste0(chname, file.ext)
    file <- if (nzchar(.Platform$r_arch)) 
        file.path(libpath, "libs", .Platform$r_arch, chname1)
    else file.path(libpath, "libs", chname1)
    pos <- which(vapply(dll_list, function(x) x[["path"]] == 
        file, NA))
    if (!length(pos)) 
        if (.Platform$OS.type == "windows") 
            stop(gettextf("DLL %s was not loaded", sQuote(chname1)), 
                domain = NA)
        else stop(gettextf("shared object %s was not loaded", 
            sQuote(chname1)), domain = NA)
    if (!file.exists(file)) 
        if (.Platform$OS.type == "windows") 
            stop(gettextf("DLL %s not found", sQuote(chname1)), 
                domain = NA)
        else stop(gettextf("shared object '%s' not found", sQuote(chname1)), 
            domain = NA)
    if (verbose) 
        message(gettextf("now dyn.unload(\"%s\") ...", file), 
            domain = NA)
    dyn.unload(file)
    .dynLibs(dll_list[-pos])
    invisible(dll_list[[pos]])
}
