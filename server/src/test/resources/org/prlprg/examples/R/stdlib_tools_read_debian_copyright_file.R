#? stdlib
`read_debian_copyright_file` <- function (file, keep = TRUE) 
{
    select <- function(x, i, vars, keep = TRUE) {
        pos <- match(vars, colnames(x), nomatch = 0L)
        if (keep && any(!pos)) {
            x <- cbind(x, NA_character_)
            pos[!pos] <- ncol(x)
        }
        y <- x[i, pos, drop = FALSE]
        colnames(y) <- vars
        y
    }
    fields_in_header_para <- c("Format", "Upstream-Name", "Upstream-Contact", 
        "Source", "Disclaimer", "Comment", "License", "Copyright")
    fields_in_files_para <- c("Files", "Copyright", "License", 
        "Comment")
    fields_in_license_para <- c("License", "Comment")
    x <- tryCatch(read.dcf(file, keep.white = TRUE), error = identity)
    if (inherits(x, "error") || !length(x)) 
        return()
    header <- drop(select(x, 1L, fields_in_header_para, keep))
    if (is.na(fmt <- header["Format"]) || !grepl("copyright-format", 
        fmt)) 
        return()
    pos <- which(!is.na(x[, "Files"]))
    list(header = header, files = select(x, pos, fields_in_files_para, 
        keep), licenses = select(x, -c(1L, pos), fields_in_license_para, 
        keep))
}
