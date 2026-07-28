#? stdlib
`summarize_check_packages_in_dir_results` <- function (dir, all = TRUE, full = FALSE, ...) 
{
    dir <- normalizePath(dir)
    outdirs <- R_check_outdirs(dir, all = all)
    logs <- file.path(outdirs, "00check.log")
    logs <- logs[file_test("-f", logs)]
    results <- check_packages_in_dir_results(logs = logs, ...)
    writeLines("Check status summary:")
    tab <- check_packages_in_dir_results_summary(results)
    rownames(tab) <- paste0("  ", rownames(tab))
    print(tab)
    writeLines("")
    writeLines("Check results summary:")
    Map(function(p, r) {
        writeLines(c(sprintf("%s ... %s", p, r$status), r$lines))
    }, names(results), results)
    if (full && !all(as.character(unlist(lapply(results, `[[`, 
        "status"))) == "OK")) {
        writeLines(c("", "Check results details:"))
        details <- check_packages_in_dir_details(logs = logs, 
            ...)
        writeLines(paste(format(details), collapse = "\n\n"))
        invisible(TRUE)
    }
    else {
        invisible(FALSE)
    }
}
