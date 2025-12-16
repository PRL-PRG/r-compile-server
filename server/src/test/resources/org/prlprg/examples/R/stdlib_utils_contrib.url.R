#? stdlib
`contrib.url` <- function (repos, type = getOption("pkgType")) 
{
    if (!is.character(type)) 
        stop("invalid 'type'; must be a character string")
    type <- resolvePkgType(type)
    if (is.null(repos)) 
        return(NULL)
    if (!length(repos)) 
        return(character())
    if ("@CRAN@" %in% repos && interactive()) {
        cat(gettext("--- Please select a CRAN mirror for use in this session ---"), 
            "\n", sep = "")
        flush.console()
        chooseCRANmirror()
        m <- match("@CRAN@", repos)
        nm <- names(repos)
        repos[m] <- getOption("repos")["CRAN"]
        if (is.null(nm)) 
            nm <- rep.int("", length(repos))
        nm[m] <- "CRAN"
        names(repos) <- nm
    }
    if ("@CRAN@" %in% repos) 
        stop("trying to use CRAN without setting a mirror")
    ver <- paste(R.version$major, strsplit(R.version$minor, ".", 
        fixed = TRUE)[[1L]][1L], sep = ".")
    mac.path <- "macosx"
    if (substr(type, 1L, 11L) == "mac.binary.") {
        mac.path <- paste(mac.path, substring(type, 12L), sep = "/")
        type <- "mac.binary"
    }
    res <- switch(type, source = paste(gsub("/$", "", repos), 
        "src", "contrib", sep = "/"), mac.binary = paste(gsub("/$", 
        "", repos), "bin", mac.path, "contrib", ver, sep = "/"), 
        win.binary = paste(gsub("/$", "", repos), "bin", "windows", 
            "contrib", ver, sep = "/"), stop("invalid 'type'"))
    res
}

# Examples
