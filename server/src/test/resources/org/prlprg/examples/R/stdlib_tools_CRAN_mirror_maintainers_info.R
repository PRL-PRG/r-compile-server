#? stdlib
`CRAN_mirror_maintainers_info` <- function (mirrors, db = NULL, collapse = TRUE) 
{
    if (is.null(db)) 
        db <- utils::getCRANmirrors(all = TRUE)
    mirrors <- sort(unique(mirrors))
    ind <- match(mirrors, as.character(db$URL))
    addresses <- db[ind, "Maintainer"]
    addresses <- gsub("[[:space:]]*#[[:space:]]*", "@", addresses)
    to <- unique(unlist(strsplit(addresses, "[[:space:]]*,[[:space:]]*")))
    head <- list(To = to, CC = "CRAN@R-project.org", Subject = "CRAN mirrors maintained by you", 
        `Reply-To` = "CRAN@R-project.org")
    if (collapse) {
        head$To <- paste(head$To, collapse = ",\n    ")
        head <- sprintf("%s: %s", names(head), unlist(head))
    }
    len <- length(addresses)
    body <- c(if (len > 1L) {
        "Dear maintainers,"
    } else {
        "Dear maintainer,"
    }, "", strwrap(paste(if (length(mirrors) > 1L) {
        "This concerns the following CRAN mirrors"
    } else {
        "This concerns the following CRAN mirror"
    }, "maintained by", if (len > 1L) "one of", "you:")), "", 
        paste0("  ", formatDL(mirrors, addresses, style = "list")))
    list(head = head, body = body)
}
