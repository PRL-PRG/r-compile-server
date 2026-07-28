#? stdlib
`.Rtest_package_depends_R_version` <- function (dir) 
{
    if (missing(dir)) 
        dir <- "."
    meta <- .read_description(file.path(dir, "DESCRIPTION"))
    deps <- .split_description(meta, verbose = TRUE)$Rdepends2
    status <- 0
    current <- getRversion()
    for (depends in deps) {
        if (length(depends) > 1L) {
            if (depends$op %notin% c("<=", ">=", "<", ">", "==", 
                "!=")) 
                message("WARNING: malformed 'Depends' field in 'DESCRIPTION'")
            else {
                status <- if (inherits(depends$version, "numeric_version")) 
                  !do.call(depends$op, list(current, depends$version))
                else {
                  ver <- R.version
                  if (ver$status %in% c("", "Patched")) 
                    FALSE
                  else !do.call(depends$op, list(ver[["svn rev"]], 
                    as.numeric(sub("^r", "", depends$version))))
                }
            }
            if (status != 0) {
                package <- Sys.getenv("R_PACKAGE_NAME")
                if (!nzchar(package)) 
                  package <- meta["Package"]
                msg <- if (nzchar(package)) 
                  gettextf("ERROR: this R is version %s, package '%s' requires R %s %s", 
                    current, package, depends$op, depends$version)
                else gettextf("ERROR: this R is version %s, required is R %s %s", 
                  current, depends$op, depends$version)
                message(strwrap(msg, exdent = 2L))
                break
            }
        }
    }
    status
}
