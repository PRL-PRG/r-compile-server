#? stdlib
`file_test` <- function (op, x, y) 
{
    switch(op, `-f` = !is.na(isdir <- file.info(x, extra_cols = FALSE)$isdir) & 
        !isdir, `-d` = dir.exists(x), `-h` = (!is.na(y <- Sys.readlink(x)) & 
        nzchar(y)), `-L` = (!is.na(y <- Sys.readlink(x)) & nzchar(y)), 
        `-nt` = (!is.na(mt.x <- file.mtime(x)) & !is.na(mt.y <- file.mtime(y)) & 
            (mt.x > mt.y)), `-ot` = (!is.na(mt.x <- file.mtime(x)) & 
            !is.na(mt.y <- file.mtime(y)) & (mt.x < mt.y)), `-x` = (file.access(x, 
            1L) == 0L), `-w` = (file.access(x, 2L) == 0L), `-r` = (file.access(x, 
            4L) == 0L), stop(gettextf("test '%s' is not available", 
            op), domain = NA))
}

# Examples
dir <- file.path(R.home(), "library", "stats")
file_test("-d", dir)
file_test("-nt", file.path(dir, "R"), file.path(dir, "demo"))

