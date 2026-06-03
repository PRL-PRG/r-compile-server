#? stdlib
`.read_repositories` <- function (file) 
{
    db <- read.delim(file, header = TRUE, comment.char = "#", 
        colClasses = c(rep.int("character", 3L), rep.int("logical", 
            4L)))
    db[, "URL"] <- .expand_BioC_repository_URLs(db[, "URL"])
    db
}
