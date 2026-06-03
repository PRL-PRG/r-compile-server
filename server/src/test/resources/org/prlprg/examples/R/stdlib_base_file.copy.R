#? stdlib
`file.copy` <- function (from, to, overwrite = recursive, recursive = FALSE, 
    copy.mode = TRUE, copy.date = FALSE) 
{
    if (!(nf <- length(from))) 
        return(logical())
    if (!(nt <- length(to))) 
        stop("no files to copy to")
    if (nt == 1 && dir.exists(to)) {
        if (recursive && to %in% from) 
            stop("attempt to copy a directory to itself")
        if (.Platform$OS.type == "windows") {
            from <- gsub("/", "\\", from, fixed = TRUE)
            to <- gsub("/", "\\", to, fixed = TRUE)
        }
        return(.Internal(file.copy(from, to, overwrite, recursive, 
            copy.mode, copy.date)))
    }
    else if (nf > nt) 
        stop("more 'from' files than 'to' files")
    else if (recursive) 
        warning("'recursive' will be ignored as 'to' is not a single existing directory")
    if (nt > nf) 
        from <- rep_len(from, length.out = nt)
    okay <- file.exists(from)
    if (!overwrite) 
        okay[file.exists(to)] <- FALSE
    else {
        dirtofile <- dir.exists(from[okay]) & file.exists(to[okay]) & 
            !dir.exists(to[okay])
        if (any(dirtofile)) {
            warning("cannot overwrite a non-directory with a directory")
            okay[okay] <- !dirtofile
        }
    }
    fromdir <- dir.exists(from[okay])
    if (any(fromdir)) {
        warning("directories are omitted unless 'recursive = TRUE'")
        okay[okay] <- !fromdir
    }
    if (any(from[okay] %in% to[okay])) 
        stop("file can not be copied both 'from' and 'to'")
    if (any(okay)) {
        okay[okay] <- file.create(to[okay])
        if (any(okay)) {
            okay[okay] <- file.append(to[okay], from[okay])
            if (copy.mode || copy.date) {
                fi <- file.info(from[okay], extra_cols = FALSE)
                if (copy.mode) 
                  Sys.chmod(to[okay], fi$mode, TRUE)
                if (copy.date) 
                  Sys.setFileTime(to[okay], fi$mtime)
            }
        }
    }
    okay
}
