#? stdlib
`untar` <- function (tarfile, files = NULL, list = FALSE, exdir = ".", compressed = NA, 
    extras = NULL, verbose = FALSE, restore_times = TRUE, support_old_tars = Sys.getenv("R_SUPPORT_OLD_TARS", 
        FALSE), tar = Sys.getenv("TAR")) 
{
    if (inherits(tarfile, "connection") || identical(tar, "internal")) {
        if (!missing(compressed)) 
            warning("argument 'compressed' is ignored for the internal method")
        return(untar2(tarfile, files, list, exdir, restore_times))
    }
    if (!(is.character(tarfile) && length(tarfile) == 1L)) 
        stop("invalid 'tarfile' argument")
    tarfile <- path.expand(tarfile)
    support_old_tars <- isTRUE(as.logical(support_old_tars))
    TAR <- tar
    if (!nzchar(TAR) && .Platform$OS.type == "windows" && nzchar(Sys.which("tar.exe"))) 
        TAR <- "tar.exe"
    if (!nzchar(TAR) || TAR == "internal") 
        return(untar2(tarfile, files, list, exdir))
    cflag <- ""
    if (!missing(compressed)) 
        warning("untar(compressed=) is deprecated", call. = FALSE, 
            domain = NA)
    if (is.character(compressed)) {
        cflag <- switch(match.arg(compressed, c("gzip", "bzip2", 
            "xz")), gzip = "z", bzip2 = "j", xz = "J")
    }
    else if (is.logical(compressed)) {
        if (is.na(compressed) && support_old_tars) {
            magic <- readBin(tarfile, "raw", n = 6L)
            if (all(magic[1:2] == c(31, 139))) 
                cflag <- "z"
            else if (all(magic[1:2] == c(31, 157))) 
                cflag <- "z"
            else if (rawToChar(magic[1:3]) == "BZh") 
                cflag <- "j"
            else if (all(magic[1:6] == c(253, 55, 122, 88, 90, 
                0))) 
                cflag <- "J"
        }
        else if (isTRUE(compressed)) 
            cflag <- "z"
    }
    else stop("'compressed' must be logical or character")
    if (support_old_tars) {
        if (cflag == "z") 
            if (nzchar(ZIP <- Sys.getenv("R_GZIPCMD"))) {
                TAR <- paste(ZIP, "-dc", shQuote(tarfile), "|", 
                  TAR)
                tarfile <- "-"
                cflag <- ""
            }
            else stop(sprintf("No %s command found", sQuote("gzip")))
        if (cflag == "j") 
            if (nzchar(ZIP <- Sys.getenv("R_BZIPCMD"))) {
                TAR <- paste(ZIP, "-dc", shQuote(tarfile), "|", 
                  TAR)
                tarfile <- "-"
                cflag <- ""
            }
            else stop(sprintf("No %s command found", sQuote("bzip2")))
        if (cflag == "J") 
            if (nzchar(Sys.which("xz"))) {
                TAR <- paste("xz -dc", shQuote(tarfile), "|", 
                  TAR)
                tarfile <- "-"
                cflag <- ""
            }
            else stop(sprintf("No %s command found", sQuote("xz")))
    }
    if (list) {
        cmd <- paste0(TAR, " -", cflag, "tf ", shQuote(tarfile))
        if (length(extras)) 
            cmd <- paste(cmd, extras, collapse = " ")
        if (verbose) 
            message("untar: using cmd = ", sQuote(cmd), domain = NA)
        system(cmd, intern = TRUE)
    }
    else {
        if (!restore_times) 
            cflag <- paste0(cflag, "m")
        cmd <- paste0(TAR, " -", cflag, "xf ", shQuote(tarfile))
        if (!missing(exdir)) {
            if (!dir.exists(exdir)) {
                if (!dir.create(exdir, showWarnings = TRUE, recursive = TRUE)) 
                  stop(gettextf("failed to create directory %s", 
                    sQuote(exdir)), domain = NA)
            }
            cmd <- if (.Platform$OS.type == "windows") 
                paste(cmd, "-C", shQuote(gsub("\\", "/", exdir, 
                  fixed = TRUE)))
            else paste(cmd, "-C", shQuote(exdir))
        }
        if (length(extras)) 
            cmd <- paste(cmd, extras, collapse = " ")
        if (length(files)) 
            cmd <- paste(cmd, paste(shQuote(files), collapse = " "))
        if (verbose) 
            message("untar: using cmd = ", sQuote(cmd), domain = NA)
        res <- system(cmd)
        if (res) 
            warning(sQuote(cmd), " returned error code ", res, 
                domain = NA)
        invisible(res)
    }
}

# Examples
