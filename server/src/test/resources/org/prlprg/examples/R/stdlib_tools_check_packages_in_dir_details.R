#? stdlib
`check_packages_in_dir_details` <- function (dir, logs = NULL, drop_ok = TRUE, ...) 
{
    db_from_logs <- function(logs, drop_ok, ...) {
        out <- lapply(logs, analyze_check_log, drop_ok, ...)
        out <- out[lengths(out) > 0L]
        if (!length(out)) 
            return(matrix(character(), ncol = 6L))
        chunks <- lapply(out, `[[`, "Chunks")
        package <- vapply(out, `[[`, "", "Package")
        lens <- lengths(chunks)
        cbind(rep.int(package, lens), rep.int(vapply(out, `[[`, 
            "", "Version"), lens), matrix(as.character(unlist(chunks)), 
            ncol = 3L, byrow = TRUE), rep.int(vapply(out, `[[`, 
            "", "Flags"), lens))
    }
    if (is.null(logs)) {
        if (inherits(dir, "check_packages_in_dir")) 
            dir <- attr(dir, "dir")
        logs <- Sys.glob(file.path(dir, "*.Rcheck", "00check.log"))
    }
    db <- db_from_logs(logs, drop_ok, ...)
    colnames(db) <- c("Package", "Version", "Check", "Status", 
        "Output", "Flags")
    lqa <- "'|‘"
    rqa <- "'|’"
    checks <- db[, "Check"]
    checks <- sub(sprintf("checking whether package (%s).*(%s) can be installed", 
        lqa, rqa), "checking whether package can be installed", 
        checks, perl = TRUE)
    checks <- sub("creating .*-Ex.R", "checking examples creation", 
        checks, perl = TRUE)
    checks <- sub("creating .*-manual\\.tex", "checking manual creation", 
        checks, perl = TRUE)
    checks <- sub("checking .*-manual\\.tex", "checking manual", 
        checks, perl = TRUE)
    checks <- sub(sprintf("checking package vignettes in (%s)inst/doc(%s)", 
        lqa, rqa), "checking package vignettes", checks, perl = TRUE)
    checks <- sub("^checking *", "", checks, perl = TRUE)
    db[, "Check"] <- checks
    db[, "Output"] <- sub("[[:space:]]+$", "", db[, "Output"], 
        perl = TRUE)
    db <- as.data.frame(db, stringsAsFactors = FALSE)
    class(db) <- c("check_details", "data.frame")
    db
}
