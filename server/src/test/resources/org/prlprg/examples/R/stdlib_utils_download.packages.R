#? stdlib
`download.packages` <- function (pkgs, destdir, available = NULL, repos = getOption("repos"), 
    contriburl = contrib.url(repos, type), method, type = getOption("pkgType"), 
    ...) 
{
    if (!is.character(type)) 
        stop("invalid 'type'; must be a character string")
    nonlocalcran <- !all(startsWith(contriburl, "file:"))
    if (nonlocalcran && !dir.exists(destdir)) 
        stop("'destdir' is not a directory")
    type <- resolvePkgType(type)
    if (is.null(available)) 
        available <- available.packages(contriburl = contriburl, 
            method = method, ...)
    retval <- matrix(character(), 0L, 2L)
    for (p in unique(pkgs)) {
        ok <- (available[, "Package"] == p)
        ok <- ok & !is.na(ok)
        if (!any(ok)) 
            warning(gettextf("no package %s at the repositories", 
                sQuote(p)), domain = NA, immediate. = TRUE)
        else {
            if (sum(ok) > 1L) {
                vers <- package_version(available[ok, "Version"])
                keep <- vers == max(vers)
                keep[duplicated(keep)] <- FALSE
                ok[ok][!keep] <- FALSE
            }
            if (startsWith(type, "mac.binary")) 
                type <- "mac.binary"
            File <- available[ok, "File"]
            fn <- paste0(p, "_", available[ok, "Version"], switch(type, 
                source = ".tar.gz", mac.binary = ".tgz", win.binary = ".zip", 
                stop("invalid 'type'")))
            have_fn <- !is.na(File)
            fn[have_fn] <- File[have_fn]
            repos <- available[ok, "Repository"]
            if (startsWith(repos, "file:")) {
                if (startsWith(repos, "file:///")) {
                  fn <- paste(substring(repos, 8L), fn, sep = "/")
                  if (.Platform$OS.type == "windows") {
                    if (length(grep("^/[A-Za-z]:", fn))) 
                      fn <- substring(fn, 2L)
                  }
                }
                else {
                  fn <- paste(substring(repos, 6L), fn, sep = "/")
                }
                if (file.exists(fn)) 
                  retval <- rbind(retval, c(p, fn))
                else warning(gettextf("package %s does not exist on the local repository", 
                  sQuote(p)), domain = NA, immediate. = TRUE)
            }
            else {
                url <- paste(repos, fn, sep = "/")
                destfile <- file.path(destdir, fn)
                res <- try(download.file(url, destfile, method, 
                  mode = "wb", ...))
                if (!inherits(res, "try-error") && res == 0L) 
                  retval <- rbind(retval, c(p, destfile))
                else warning(gettextf("download of package %s failed", 
                  sQuote(p)), domain = NA, immediate. = TRUE)
            }
        }
    }
    retval
}
