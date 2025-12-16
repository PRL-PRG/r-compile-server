#? stdlib
`.readPkgDesc` <- function (lib, fields, pkgs = list.files(lib)) 
{
    ret <- matrix(NA_character_, length(pkgs), 2L + length(fields))
    for (i in seq_along(pkgs)) {
        pkgpath <- file.path(lib, pkgs[i])
        if (file.access(pkgpath, 5L)) 
            next
        if (file.exists(file <- file.path(pkgpath, "Meta", "package.rds"))) {
            md <- try(readRDS(file))
            if (inherits(md, "try-error")) 
                next
            desc <- md$DESCRIPTION[fields]
            if (!length(desc)) {
                warning(gettextf("metadata of %s is corrupt", 
                  sQuote(pkgpath)), domain = NA)
                next
            }
            if ("Built" %in% fields) {
                if (is.null(md$Built$R) || !("Built" %in% names(desc))) {
                  warning(gettextf("metadata of %s is corrupt", 
                    sQuote(pkgpath)), domain = NA)
                  next
                }
                desc["Built"] <- as.character(md$Built$R)
            }
            ret[i, ] <- c(pkgs[i], lib, desc)
        }
    }
    ret[!is.na(ret[, 1L]), , drop = FALSE]
}
