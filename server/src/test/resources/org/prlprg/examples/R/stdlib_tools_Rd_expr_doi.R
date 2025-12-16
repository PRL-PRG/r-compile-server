#? stdlib
`Rd_expr_doi` <- function (x) 
{
    x <- .canonicalize_doi(x)
    u <- Rd_escape_specials(urlify_doi(x))
    x <- Rd_escape_specials(x)
    y <- gsub("/", "\\out{\\slash{}}", fixed = TRUE, gsub("-", 
        "\\out{\\-}", x, fixed = TRUE))
    sprintf("\\ifelse{text}{%s}{\\ifelse{latex}{%s}{%s}}", sprintf("doi:%s <https://doi.org/%s>", 
        x, u), sprintf("\\href{https://doi.org/%s}{doi:%s}", 
        u, y), sprintf("\\href{https://doi.org/%s}{doi:%s}", 
        u, x))
}
