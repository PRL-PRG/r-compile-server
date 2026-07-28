#? stdlib
`.check_packages_used_in_tests` <- function (dir, testdir, lib.loc = NULL) 
{
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    else dir <- file_path_as_absolute(dir)
    dfile <- file.path(dir, "DESCRIPTION")
    db <- .read_description(dfile)
    testsrcdir <- file.path(dir, testdir)
    od <- setwd(testsrcdir)
    on.exit(setwd(od))
    Rinfiles <- list.files(".", pattern = "\\.Rin$")
    Rfiles <- list.files(".", pattern = "\\.[rR]$")
    if (testdir != "tests") {
        use_subdirs <- FALSE
    }
    else {
        use_subdirs <- Sys.getenv("_R_CHECK_PACKAGES_USED_IN_TESTS_USE_SUBDIRS_", 
            "FALSE")
        use_subdirs <- config_val_to_logical(use_subdirs)
        if (use_subdirs) {
            subdirs <- c("testthat", "testit", "unitizer", "RUnit")
            subdirs <- subdirs[dir.exists(subdirs)]
            if (length(subdirs)) {
                Rfiles <- c(Rfiles, unlist(lapply(subdirs, list.files, 
                  pattern = "\\.[rR]$", full.names = TRUE), use.names = FALSE))
            }
            else {
                use_subdirs <- FALSE
            }
        }
    }
    res <- .check_packages_used_helper(db, c(Rinfiles, Rfiles))
    if (any(lengths(bad <- res[1L:3L]))) {
        repos <- .get_standard_repository_URLs()
        available <- utils::available.packages(repos = repos)
        if (nrow(available)) 
            res[1L:3L] <- lapply(bad, intersect, available[, 
                "Package"])
    }
    res
}
