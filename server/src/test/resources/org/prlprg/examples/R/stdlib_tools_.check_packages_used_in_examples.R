#? stdlib
`.check_packages_used_in_examples` <- function (package, dir, lib.loc = NULL) 
{
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        dfile <- file.path(dir, "DESCRIPTION")
        db <- .read_description(dfile)
    }
    else if (!missing(dir)) {
        if (!dir.exists(dir)) 
            stop(gettextf("directory '%s' does not exist", dir), 
                domain = NA)
        else dir <- file_path_as_absolute(dir)
        dfile <- file.path(dir, "DESCRIPTION")
        db <- .read_description(dfile)
    }
    pkg_name <- db["Package"]
    file <- .createExdotR(pkg_name, dir, silent = TRUE, commentDonttest = FALSE, 
        installed = !missing(package))
    if (is.null(file)) 
        return(invisible(NULL))
    enc <- db["Encoding"]
    if (!is.na(enc) && (Sys.getlocale("LC_CTYPE") %notin% c("C", 
        "POSIX"))) {
        lines <- iconv(readLines(file, warn = FALSE), from = "UTF-8", 
            to = "", sub = "byte")
        con <- textConnection(lines)
        on.exit(close(con), add = TRUE)
    }
    else con <- file
    .check_packages_used_helper(db, con)
}
