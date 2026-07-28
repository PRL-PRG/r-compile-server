#? stdlib
`Rd_contents` <- function (db) 
{
    if (!length(db)) {
        out <- list2DF(list(File = character(), Name = character(), 
            Type = character(), Title = character(), Encoding = character(), 
            Aliases = list(), Concepts = list(), Keywords = list()))
        return(out)
    }
    entries <- c("Name", "Type", "Title", "Aliases", "Concepts", 
        "Keywords", "Encoding")
    contents <- vector("list", length(db) * length(entries))
    dim(contents) <- c(length(db), length(entries))
    for (i in seq_along(db)) {
        contents[i, ] <- Rd_info(db[[i]])
    }
    colnames(contents) <- entries
    title <- .Rd_format_title(unlist(contents[, "Title"]))
    out <- list2DF(list(File = basename(names(db)), Name = unlist(contents[, 
        "Name"]), Type = unlist(contents[, "Type"]), Title = title, 
        Encoding = unlist(contents[, "Encoding"]), Aliases = contents[, 
            "Aliases"], Concepts = contents[, "Concepts"], Keywords = contents[, 
            "Keywords"]))
    out
}
