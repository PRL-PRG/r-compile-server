#? stdlib
`.build_demo_index` <- function (demoDir) 
{
    if (!dir.exists(demoDir)) 
        stop(gettextf("directory '%s' does not exist", demoDir), 
            domain = NA)
    demoFiles <- list_files_with_type(demoDir, "demo")
    demoTopics <- unique(basename(file_path_sans_ext(demoFiles)))
    if (!length(demoTopics)) 
        return(matrix("", 0L, 2L))
    demoIndex <- cbind(demoTopics, "")
    if (file_test("-f", INDEX <- file.path(demoDir, "00Index"))) {
        demoEntries <- tryCatch(read.00Index(INDEX), error = identity)
        if (inherits(demoEntries, "error")) 
            warning(gettextf("cannot read index information in file '%s'", 
                INDEX), domain = NA)
        else {
            idx <- match(demoTopics, demoEntries[, 1L], 0L)
            demoIndex[which(idx != 0L), 2L] <- demoEntries[idx, 
                2L]
        }
    }
    dimnames(demoIndex) <- NULL
    demoIndex
}
