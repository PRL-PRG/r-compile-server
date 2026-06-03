#? stdlib
`.citation` <- function (x, package = NULL) 
{
    class(x) <- c("citation", "bibentry")
    attr(x, "package") <- package
    x
}
