#? stdlib
`.refMethodDescription` <- function (methodDefs, fieldnames, otherMethods) 
{
    methodnames <- names(methodDefs)
    methodargs <- vapply(methodDefs, function(x) paste0("(", 
        paste(formalArgs(x), collapse = ", "), ")"), "")
    if (length(methodnames) > 0) {
        .methods.head <- "  \\describe{"
        .methods.body <- paste0("    \\item{\\code{", methodnames, 
            methodargs, "}:}", "{ ~~ }")
        .methods <- c(.methods.head, .methods.body, "  }")
    }
    else .methods <- character()
    methodclasses <- vapply(otherMethods, function(x) if (is(x, 
        "refMethodDef")) 
        x@refClassName
    else "<unknown>", "")
    superclass <- methodclasses != "envRefClass"
    otherMethods <- otherMethods[superclass]
    methodclasses <- methodclasses[superclass]
    if (length(otherMethods)) {
        methodnames <- names(otherMethods)
        methodnames <- gsub("[#].*", "", methodnames)
        .methods <- c(.methods, "\nThe following methods are inherited (from the corresponding class):", 
            paste0(methodnames, " (\"", methodclasses, "\")", 
                collapse = ", "))
    }
    .methods
}
