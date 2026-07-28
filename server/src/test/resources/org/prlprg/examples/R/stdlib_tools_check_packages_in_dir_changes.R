#? stdlib
`check_packages_in_dir_changes` <- function (dir, old, outputs = FALSE, sources = FALSE, ...) 
{
    dir <- if (inherits(dir, "check_packages_in_dir")) 
        dir <- attr(dir, "dir")
    else normalizePath(dir)
    outdirs <- R_check_outdirs(dir, all = sources, invert = TRUE)
    logs <- file.path(outdirs, "00check.log")
    logs <- logs[file_test("-f", logs)]
    new <- check_packages_in_dir_details(logs = logs, drop_ok = FALSE, 
        ...)
    if (!inherits(old, "check_details")) 
        old <- check_packages_in_dir_details(old, drop_ok = FALSE, 
            ...)
    check_details_changes(new, old, outputs)
}
