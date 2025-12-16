#? stdlib
`latex_tag` <- function (x, tag) 
{
    if (!is.null(x)) 
        attr(x, "latex_tag") <- tag
    x
}
