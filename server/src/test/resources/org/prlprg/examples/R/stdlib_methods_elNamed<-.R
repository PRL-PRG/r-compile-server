#? stdlib
`elNamed<-` <- function (x, name, value) 
{
    x[[name]] <- value
    x
}
