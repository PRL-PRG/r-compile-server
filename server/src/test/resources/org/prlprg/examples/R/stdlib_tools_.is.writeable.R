#? stdlib
`.is.writeable` <- function (dir) 
{
    ok <- TRUE
    fn <- file.path(dir, paste0("_test_dir_", Sys.getpid()))
    res <- try(dir.create(fn, showWarnings = FALSE))
    if (inherits(res, "try-error") || !res) 
        ok <- FALSE
    else unlink(fn, recursive = TRUE)
    if (ok) {
        fn <- file.path(dir, paste0("_test_file_", Sys.getpid()))
        res <- try(file.create(fn, showWarnings = FALSE))
        if (inherits(res, "try-error") || !res) 
            ok <- FALSE
        else unlink(fn)
    }
    ok
}
