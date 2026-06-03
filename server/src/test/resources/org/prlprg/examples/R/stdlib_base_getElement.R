#? stdlib
`getElement` <- function (object, name) 
{
    if (isS4(object)) 
        methods::slot(object, name)
    else object[[name, exact = TRUE]]
}
