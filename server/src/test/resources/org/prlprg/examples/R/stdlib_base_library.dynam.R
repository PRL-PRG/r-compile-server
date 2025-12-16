#? stdlib
`library.dynam` <- function (chname, package, lib.loc, verbose = getOption("verbose"), 
    file.ext = .Platform$dynlib.ext, ...) 
{
    dll_list <- .dynLibs()
    if (missing(chname) || !nzchar(chname)) 
        return(dll_list)
    package
    lib.loc
    r_arch <- .Platform$r_arch
    chname1 <- paste0(chname, file.ext)
    for (pkg in find.package(package, lib.loc, verbose = verbose)) {
        DLLpath <- if (nzchar(r_arch)) 
            file.path(pkg, "libs", r_arch)
        else file.path(pkg, "libs")
        file <- file.path(DLLpath, chname1)
        if (file.exists(file)) 
            break
        else file <- ""
    }
    if (file == "") 
        if (.Platform$OS.type == "windows") 
            stop(gettextf("DLL %s not found: maybe not installed for this architecture?", 
                sQuote(chname)), domain = NA)
        else stop(gettextf("shared object %s not found", sQuote(chname1)), 
            domain = NA)
    file <- file.path(normalizePath(DLLpath, "/", TRUE), chname1)
    ind <- vapply(dll_list, function(x) x[["path"]] == file, 
        NA)
    if (length(ind) && any(ind)) {
        if (verbose) 
            if (.Platform$OS.type == "windows") 
                message(gettextf("DLL %s already loaded", sQuote(chname1)), 
                  domain = NA)
            else message(gettextf("shared object '%s' already loaded", 
                sQuote(chname1)), domain = NA)
        return(invisible(dll_list[[seq_along(dll_list)[ind]]]))
    }
    if (.Platform$OS.type == "windows") {
        PATH <- Sys.getenv("PATH")
        Sys.setenv(PATH = paste(gsub("/", "\\\\", DLLpath), PATH, 
            sep = ";"))
        on.exit(Sys.setenv(PATH = PATH))
    }
    if (verbose) 
        message(gettextf("now dyn.load(\"%s\") ...", file), domain = NA)
    dll <- if ("DLLpath" %in% ...names()) 
        dyn.load(file, ...)
    else dyn.load(file, DLLpath = DLLpath, ...)
    .dynLibs(c(dll_list, list(dll)))
    invisible(dll)
}

# Examples
## Which DLLs were dynamically loaded by packages?
library.dynam()

## More on library.dynam.unload() :
\donttest{require(nlme)
nlme:::.onUnload # shows library.dynam.unload() call
detach("package:nlme")  # by default, unload=FALSE ,  so,
tail(library.dynam(), 2)# nlme still there

## How to unload the DLL ?
## Best is to unload the namespace,  unloadNamespace("nlme")
## If we need to do it separately which should be exceptional:
pd.file <- attr(packageDescription("nlme"), "file")
library.dynam.unload("nlme", libpath = sub("/Meta.*", '', pd.file))
tail(library.dynam(), 2)# 'nlme' is gone now
unloadNamespace("nlme") # now gives warning
}

