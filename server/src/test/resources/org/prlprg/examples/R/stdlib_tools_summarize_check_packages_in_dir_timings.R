#? stdlib
`summarize_check_packages_in_dir_timings` <- function (dir, all = FALSE, full = FALSE) 
{
    dir <- normalizePath(dir)
    tfile <- file.path(dir, "timings.tab")
    if (file_test("-f", tfile)) {
        timings <- utils::read.table(tfile)
        if (!all) {
            rdepends <- Sys.glob(file.path(dir, "rdepends_*.Rcheck"))
            timings <- timings[is.na(match(rownames(timings), 
                sub("rdepends_(.*).Rcheck", "\\1", basename(rdepends)))), 
                ]
        }
        print(timings)
    }
    if (full) {
        tfiles <- Sys.glob(file.path(R_check_outdirs(dir, all = all), 
            "*-Ex.timings"))
        if (length(tfiles)) 
            message("")
        timings <- lapply(tfiles, utils::read.table, header = TRUE)
        timings <- lapply(timings, function(x) x[order(x$user, 
            decreasing = TRUE), ])
        timings <- split(as.data.frame(lapply(do.call(rbind, 
            timings), format)), rep.int(sub("\\.Rcheck$", "", 
            basename(dirname(tfiles))), vapply(timings, nrow, 
            0L)))
        invisible(Map(function(x, y) {
            writeLines(sprintf("Example timings for package '%s':", 
                x))
            cat(rbind(" ", t(as.matrix(y))), sep = c(" ", " ", 
                " ", " ", "\n"))
        }, names(timings), timings))
    }
    invisible()
}
