#? stdlib
`fileSnapshot` <- function (path = ".", file.info = TRUE, timestamp = NULL, md5sum = FALSE, 
    digest = NULL, full.names = length(path) > 1, ...) 
{
    if (length(path) > 1 && !full.names) 
        stop("'full.names' must be TRUE for multiple paths.")
    if (length(timestamp) == 1) 
        file.create(timestamp)
    path <- normalizePath(path)
    args <- list(...)
    fullnames <- names <- character(0)
    for (i in seq_along(path)) {
        newnames <- do.call(list.files, c(path = path[i], full.names = full.names, 
            args))
        names <- c(names, newnames)
        if (full.names) 
            fullnames <- names
        else fullnames <- c(fullnames, file.path(path[i], newnames))
    }
    if (file.info) {
        info <- file.info(fullnames)
        if (!full.names) 
            rownames(info) <- names
    }
    else info <- data.frame(row.names = names)
    if (md5sum) 
        info <- data.frame(info, md5sum = suppressWarnings(tools::md5sum(fullnames)), 
            stringsAsFactors = FALSE)
    if (!is.null(digest)) 
        info <- data.frame(info, digest = digest(fullnames), 
            stringsAsFactors = FALSE)
    structure(list(info = info, path = path, timestamp = timestamp, 
        file.info = file.info, md5sum = md5sum, digest = digest, 
        full.names = full.names, args = args), class = "fileSnapshot")
}
