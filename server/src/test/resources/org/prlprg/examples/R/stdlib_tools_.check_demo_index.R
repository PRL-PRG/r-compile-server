#? stdlib
`.check_demo_index` <- function (demoDir) 
{
    if (!dir.exists(demoDir)) 
        stop(gettextf("directory '%s' does not exist", demoDir), 
            domain = NA)
    info_from_build <- .build_demo_index(demoDir)
    info_from_index <- tryCatch(read.00Index(file.path(demoDir, 
        "00Index")), error = function(e) stop(gettextf("cannot read index information in file '%s'", 
        file.path(demoDir, "00Index")), domain = NA))
    bad_entries <- list(missing_from_index = info_from_build[grep("^[[:space:]]*$", 
        info_from_build[, 2L]), 1L], missing_from_demos = info_from_index[info_from_index[, 
        1L] %notin% info_from_build[, 1L], 1L])
    class(bad_entries) <- "check_demo_index"
    bad_entries
}
