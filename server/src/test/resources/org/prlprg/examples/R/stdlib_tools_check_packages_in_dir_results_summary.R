#? stdlib
`check_packages_in_dir_results_summary` <- function (results) 
{
    if (!length(results)) 
        return()
    status <- vapply(results, `[[`, "", "status")
    ind <- startsWith(names(results), "rdepends_")
    tab <- table(ifelse(ind, "Reverse depends", "Source packages"), 
        status, deparse.level = 0L)
    tab <- tab[match(c("Source packages", "Reverse depends"), 
        rownames(tab), nomatch = 0L), match(c("FAILURE", "ERROR", 
        "WARNING", "NOTE", "OK"), colnames(tab), nomatch = 0L), 
        drop = FALSE]
    names(dimnames(tab)) <- NULL
    tab
}
