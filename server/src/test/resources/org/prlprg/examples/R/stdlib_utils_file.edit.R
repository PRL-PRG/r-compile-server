#? stdlib
`file.edit` <- function (..., title = file, editor = getOption("editor"), fileEncoding = "") 
{
    file <- path.expand(c(...))
    title <- rep_len(as.character(title), length(file))
    if (nzchar(fileEncoding) && fileEncoding != "native.enc") {
        tfile <- file
        for (i in seq_along(file)) {
            tfile <- tempfile()
            con <- file(file[i], encoding = fileEncoding)
            writeLines(readLines(con), tfile)
            close(con)
            file[i] <- tfile
        }
    }
    if (is.function(editor)) 
        invisible(editor(file = file, title = title))
    else invisible(.External2(C_fileedit, file, title, editor))
}

# Examples


