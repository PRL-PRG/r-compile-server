#? stdlib
`get_CITATION_entry_fields` <- function (file, encoding = "ASCII") 
{
    exprs <- .parse_CITATION_file(file, encoding)
    FOO1 <- FOO2 <- function() match.call(expand.dots = FALSE)
    formals(FOO1) <- formals(utils::citEntry)
    formals(FOO2) <- formals(utils::bibentry)
    get_names_of_nonempty_fields <- function(x) {
        names(x)[vapply(x, function(e) {
            length(e) && !(is.character(e) && all(grepl("^[[:space:]]*$", 
                e)))
        }, NA)]
    }
    out <- lapply(exprs, function(e) {
        nm <- as.character(e[[1L]])
        if (nm == "citEntry") {
            e[[1L]] <- as.name("FOO1")
            e <- as.list(eval(e))
            entry <- e$entry
            fields <- get_names_of_nonempty_fields(e$...)
        }
        else if (nm == "bibentry") {
            e[[1L]] <- as.name("FOO2")
            e <- as.list(eval(e))
            entry <- e$bibtype
            fields <- get_names_of_nonempty_fields(c(e$..., as.list(e$other)[-1L]))
        }
        else return()
        entry <- if (!is.character(entry)) 
            NA_character_
        else entry[1L]
        list(entry = entry, fields = as.character(fields))
    })
    out <- Filter(Negate(is.null), out)
    if (!length(out)) 
        return(NULL)
    entries <- sapply(out, `[[`, 1L)
    fields <- lapply(out, `[[`, 2L)
    out <- data.frame(File = file, Entry = entries, stringsAsFactors = FALSE)
    out$Fields <- fields
    out
}
