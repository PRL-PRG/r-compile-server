#? stdlib
`.S4methods` <- function (generic.function, class) 
{
    info <- if (!missing(generic.function)) 
        .S4methodsForGeneric(generic.function, class)
    else if (!missing(class)) 
        .S4methodsForClass(generic.function, class)
    else stop("must supply 'generic.function' or 'class'")
    structure(rownames(info), info = info, byclass = missing(generic.function), 
        class = "MethodsFunction")
}
