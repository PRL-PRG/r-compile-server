#? stdlib
`sessionInfo` <- function (package = NULL) 
{
    z <- list()
    z$R.version <- R.Version()
    z$platform <- z$R.version$platform
    if (nzchar(.Platform$r_arch)) 
        z$platform <- paste(z$platform, .Platform$r_arch, sep = "/")
    sp <- 8 * .Machine$sizeof.pointer
    if (sp != 64) 
        z$platform <- paste0(z$platform, " (", sp, "-bit)")
    z$locale <- Sys.getlocale()
    z$tzone <- Sys.timezone()
    z$tzcode_type <- .Call(C_tzcode_type)
    z$running <- osVersion
    z$RNGkind <- RNGkind()
    if (is.null(package)) {
        package <- grep("^package:", search(), value = TRUE)
        keep <- vapply(package, function(x) x == "package:base" || 
            !is.null(attr(as.environment(x), "path")), NA)
        package <- .rmpkg(package[keep])
    }
    pkgDesc <- lapply(package, packageDescription, encoding = NA)
    if (length(package) == 0) 
        stop("no valid packages were specified")
    basePkgs <- sapply(pkgDesc, function(x) !is.null(x$Priority) && 
        x$Priority == "base")
    z$basePkgs <- package[basePkgs]
    if (any(!basePkgs)) {
        z$otherPkgs <- pkgDesc[!basePkgs]
        names(z$otherPkgs) <- package[!basePkgs]
    }
    loadedOnly <- loadedNamespaces()
    loadedOnly <- loadedOnly[!(loadedOnly %in% package)]
    if (length(loadedOnly)) {
        names(loadedOnly) <- loadedOnly
        pkgDesc <- c(pkgDesc, lapply(loadedOnly, packageDescription, 
            encoding = NA))
        z$loadedOnly <- pkgDesc[loadedOnly]
    }
    z$matprod <- as.character(options("matprod"))
    es <- extSoftVersion()
    z$BLAS <- es[["BLAS"]]
    z$LAPACK <- La_library()
    z$LA_version <- La_version()
    l10n <- l10n_info()
    if (!is.null(l10n[["system.codepage"]])) 
        z$system.codepage <- l10n[["system.codepage"]]
    if (!is.null(l10n[["codepage"]])) 
        z$codepage <- l10n[["codepage"]]
    class(z) <- "sessionInfo"
    z
}
