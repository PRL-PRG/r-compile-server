#? stdlib
`CRAN_package_maintainers_info` <- function (packages, db = NULL, collapse = TRUE) 
{
    if (is.null(db)) 
        db <- CRAN_package_maintainers_db()
    ind <- match(packages, db[, "Package"])
    addresses <- db[ind, "Address"]
    to <- sort(unique(addresses))
    head <- list(To = to, CC = "CRAN@R-project.org", Subject = "CRAN packages maintained by you", 
        `Reply-To` = "CRAN@R-project.org")
    if (collapse) {
        head$To <- paste(head$To, collapse = ",\n    ")
        head <- sprintf("%s: %s", names(head), unlist(head))
    }
    lst <- split(db[ind, "Package"], db[ind, "Maintainer"])
    len <- length(addresses)
    body <- c(if (len > 1L) {
        "Dear maintainers,"
    } else {
        "Dear maintainer,"
    }, "", if (length(packages) > 1L) {
        "This concerns the CRAN packages"
    } else {
        "This concerns the CRAN package"
    }, "", paste(strwrap(paste(sort(packages), collapse = " "), 
        indent = 2L, exdent = 2L), collapse = "\n"), "", paste("maintained by", 
        if (len > 1L) "one of", "you:"), "", paste0("  ", formatDL(vapply(lst, 
        paste, "", collapse = " "), style = "list")))
    list(head = head, body = body)
}
