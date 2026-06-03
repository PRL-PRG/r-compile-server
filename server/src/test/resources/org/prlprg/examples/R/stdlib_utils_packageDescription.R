#? stdlib
`packageDescription` <- function (pkg, lib.loc = NULL, fields = NULL, drop = TRUE, encoding = "") 
{
    retval <- list()
    if (!is.null(fields)) {
        fields <- as.character(fields)
        retval[fields] <- NA
    }
    pkgpath <- if (is.null(lib.loc)) {
        if (pkg == "base") 
            file.path(.Library, "base")
        else if (isNamespaceLoaded(pkg)) 
            getNamespaceInfo(pkg, "path")
        else if ((envname <- paste0("package:", pkg)) %in% search()) {
            attr(as.environment(envname), "path")
        }
    }
    if (is.null(pkgpath)) 
        pkgpath <- ""
    if (pkgpath == "") {
        for (lib in lib.loc %||% .libPaths()) if (file.access(file.path(lib, 
            pkg), 5) == 0L) {
            pkgpath <- file.path(lib, pkg)
            break
        }
    }
    if (pkgpath == "") {
        warning(gettextf("no package '%s' was found", pkg), domain = NA)
        return(NA)
    }
    if (file.exists(file <- file.path(pkgpath, "Meta", "package.rds"))) {
        desc <- readRDS(file)$DESCRIPTION
        if (length(desc) < 1) 
            stop(gettextf("metadata of package '%s' is corrupt", 
                pkg), domain = NA)
        desc <- as.list(desc)
    }
    else if (file.exists(file <- file.path(pkgpath, "DESCRIPTION"))) {
        dcf <- read.dcf(file = file)
        if (NROW(dcf) < 1L) 
            stop(gettextf("DESCRIPTION file of package '%s' is corrupt", 
                pkg), domain = NA)
        desc <- as.list(dcf[1, ])
    }
    else file <- ""
    if (nzchar(file)) {
        if (is.null(pkgname <- desc[["Package"]]) || (pkgname != 
            pkg)) {
            warning(gettextf("no package '%s' was found", pkg), 
                domain = NA)
            return(NA)
        }
        enc <- desc[["Encoding"]]
        if (!is.null(enc) && !is.na(encoding)) {
            if (missing(encoding) && Sys.getlocale("LC_CTYPE") == 
                "C") 
                encoding <- "ASCII//TRANSLIT"
            if (encoding != enc) {
                newdesc <- try(lapply(desc, iconv, from = enc, 
                  to = encoding))
                dOk <- function(nd) !inherits(nd, "try-error") && 
                  !anyNA(nd)
                ok <- dOk(newdesc)
                if (!ok && !endsWith(encoding, "//TRANSLIT")) 
                  ok <- dOk(newdesc <- try(lapply(desc, iconv, 
                    from = enc, to = paste0(encoding, "//TRANSLIT"))))
                if (!ok) 
                  ok <- dOk(newdesc <- try(lapply(desc, iconv, 
                    from = enc, to = "ASCII//TRANSLIT", sub = "?")))
                if (ok) 
                  desc <- newdesc
                else warning("'DESCRIPTION' file has an 'Encoding' field and re-encoding is not possible", 
                  call. = FALSE)
            }
        }
        if (!is.null(fields)) {
            ok <- names(desc) %in% fields
            retval[names(desc)[ok]] <- desc[ok]
        }
        else retval[names(desc)] <- desc
    }
    if ((file == "") || (length(retval) == 0)) {
        warning(gettextf("DESCRIPTION file of package '%s' is missing or broken", 
            pkg), domain = NA)
        return(NA)
    }
    if (drop && length(fields) == 1L) 
        return(retval[[1L]])
    class(retval) <- "packageDescription"
    if (!is.null(fields)) 
        attr(retval, "fields") <- fields
    attr(retval, "file") <- file
    retval
}
