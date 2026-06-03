#? stdlib
`.canonicalize_doi` <- function (x) 
{
    x <- sub("^((doi|DOI):)?[[:space:]]*https?://(dx[.])?doi[.]org/", 
        "", x)
    sub("^(doi|DOI):", "", x)
}
