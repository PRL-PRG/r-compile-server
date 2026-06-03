#? stdlib
`resaveRdaFiles` <- function (paths, compress = c("auto", "gzip", "bzip2", "xz"), 
    compression_level, version = NULL) 
{
    if (length(paths) == 1L && dir.exists(paths)) 
        paths <- Sys.glob(c(file.path(paths, "*.rda"), file.path(paths, 
            "*.RData")))
    compress <- match.arg(compress)
    if (missing(compression_level)) 
        compression_level <- switch(compress, gzip = 6L, 9L)
    getVerLoad <- function(file) {
        con <- gzfile(file, "rb")
        on.exit(close(con))
        tryCatch(.Internal(loadInfoFromConn2(con))$version, error = function(e) 1L)
    }
    if (is.null(version)) 
        version <- 2L
    for (p in paths) {
        ver <- max(version, getVerLoad(p))
        env <- new.env(hash = TRUE)
        suppressPackageStartupMessages(load(p, envir = env))
        if (compress == "auto") {
            f1 <- tempfile()
            save(file = f1, list = ls(env, all.names = TRUE), 
                envir = env, version = ver)
            f2 <- tempfile()
            save(file = f2, list = ls(env, all.names = TRUE), 
                envir = env, compress = "bzip2", version = ver)
            ss <- file.size(c(f1, f2)) * c(0.9, 1)
            names(ss) <- c(f1, f2)
            if (ss[1L] > 10240) {
                f3 <- tempfile()
                save(file = f3, list = ls(env, all.names = TRUE), 
                  envir = env, compress = "xz", version = ver)
                ss <- c(ss, file.size(f3))
                names(ss) <- c(f1, f2, f3)
            }
            nm <- names(ss)
            ind <- which.min(ss)
            file.copy(nm[ind], p, overwrite = TRUE)
            unlink(nm)
        }
        else save(file = p, list = ls(env, all.names = TRUE), 
            envir = env, compress = compress, compression_level = compression_level, 
            version = ver)
    }
}
