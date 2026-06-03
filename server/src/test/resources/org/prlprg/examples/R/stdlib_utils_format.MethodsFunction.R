#? stdlib
`format.MethodsFunction` <- function (x, byclass = attr(x, "byclass"), ...) 
{
    info <- attr(x, "info")
    if (byclass) 
        unique(info$generic)
    else paste0(rownames(info), visible = ifelse(info$visible, 
        "", "*"))
}
