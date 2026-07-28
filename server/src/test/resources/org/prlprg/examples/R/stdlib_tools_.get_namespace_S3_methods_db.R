#? stdlib
`.get_namespace_S3_methods_db` <- function (nsInfo) 
{
    S3_methods_db <- nsInfo$S3methods
    if (!length(S3_methods_db)) 
        return(matrix(character(), ncol = 4L))
    idx <- is.na(S3_methods_db[, 3L])
    S3_methods_db[idx, 3L] <- paste(S3_methods_db[idx, 1L], S3_methods_db[idx, 
        2L], sep = ".")
    S3_methods_db
}
