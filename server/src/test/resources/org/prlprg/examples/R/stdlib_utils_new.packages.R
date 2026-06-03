#? stdlib
`new.packages` <- function (lib.loc = NULL, repos = getOption("repos"), contriburl = contrib.url(repos, 
    type), instPkgs = installed.packages(lib.loc = lib.loc, ...), 
    method, available = NULL, ask = FALSE, ..., type = getOption("pkgType")) 
{
    if (!is.character(type)) 
        stop("invalid 'type'; must be a character string")
    ask
    if (type == "both" && (!missing(contriburl) || !is.null(available))) {
        stop("specifying 'contriburl' or 'available' requires a single type, not type = \"both\"")
    }
    if (is.null(lib.loc)) 
        lib.loc <- .libPaths()
    if (!is.matrix(instPkgs)) 
        stop(gettextf("no installed packages for (invalid?) 'lib.loc=%s'", 
            lib.loc), domain = NA)
    if (is.null(available)) 
        available <- available.packages(contriburl = contriburl, 
            method = method, ...)
    installed <- unique(instPkgs[, "Package"])
    poss <- sort(unique(available[, "Package"]))
    res <- setdiff(poss, installed)
    update <- character()
    graphics <- FALSE
    if (is.character(ask) && ask == "graphics") {
        ask <- TRUE
        if (.Platform$OS.type == "windows" || .Platform$GUI == 
            "AQUA" || (capabilities("tcltk") && capabilities("X11"))) 
            graphics <- TRUE
    }
    if (isTRUE(ask)) {
        if (length(res)) 
            update <- res[match(select.list(res, multiple = TRUE, 
                title = "New packages to be installed", graphics = graphics), 
                res)]
        else message("no new packages are available")
    }
    if (length(update)) {
        if (type == "both") 
            install.packages(update, lib = lib.loc[1L], method = method, 
                type = type, ...)
        else install.packages(update, lib = lib.loc[1L], contriburl = contriburl, 
            method = method, available = available, type = type, 
            ...)
        dirs <- list.files(lib.loc[1L])
        updated <- update[update %in% dirs]
        res <- res[!res %in% updated]
    }
    res
}
