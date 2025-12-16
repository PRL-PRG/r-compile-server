#? stdlib
`packageStatus` <- function (lib.loc = NULL, repositories = NULL, method, type = getOption("pkgType"), 
    ...) 
{
    newestVersion <- function(x) {
        vers <- package_version(x)
        max <- vers[1L]
        for (i in seq_along(vers)) if (max < vers[i]) 
            max <- vers[i]
        which.max(vers == max)
    }
    if (is.null(lib.loc)) 
        lib.loc <- .libPaths()
    if (is.null(repositories)) 
        repositories <- contrib.url(getOption("repos"), type = type)
    char2df <- function(x) {
        y <- list()
        for (k in 1L:ncol(x)) y[[k]] <- x[, k]
        attr(y, "names") <- colnames(x)
        attr(y, "row.names") <- make.unique(y[[1L]])
        class(y) <- "data.frame"
        y
    }
    y <- char2df(installed.packages(lib.loc = lib.loc, ...))
    y[, "Status"] <- rep("ok", nrow(y))
    z <- available.packages(repositories, method, ...)
    ztab <- table(z[, "Package"])
    for (pkg in names(ztab)[ztab > 1]) {
        zrow <- which(z[, "Package"] == pkg)
        znewest <- newestVersion(z[zrow, "Version"])
        z <- z[-zrow[-znewest], ]
    }
    z <- cbind(z, Status = c("not installed", "installed")[1L + 
        z[, "Package"] %in% y$Package])
    z <- char2df(z)
    attr(z, "row.names") <- z$Package
    for (k in seq_len(nrow(y))) {
        pkg <- y[k, "Package"]
        if (pkg %in% z$Package) {
            if (package_version(y[k, "Version"]) < package_version(z[pkg, 
                "Version"])) {
                y[k, "Status"] <- "upgrade"
            }
        }
        else {
            if (!(y[k, "Priority"] %in% "base")) 
                y[k, "Status"] <- "unavailable"
        }
    }
    y$LibPath <- factor(y$LibPath, levels = lib.loc)
    y$Status <- factor(y$Status, levels = c("ok", "upgrade", 
        "unavailable"))
    z$Repository <- factor(z$Repository, levels = repositories)
    z$Status <- factor(z$Status, levels = c("installed", "not installed"))
    retval <- list(inst = y, avail = z)
    class(retval) <- "packageStatus"
    retval
}

# Examples
\donttest{
x <- packageStatus(repositories = contrib.url(findCRANmirror("web")))
print(x)
summary(x)
}

