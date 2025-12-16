#? stdlib
`.showSource` <- function (object) 
{
    cat("Object of class \"", class(object), "\"\n", sep = "")
    cat("Source environment created ", format(object@dateCreated), 
        "\n")
    if (nzchar(object@packageName)) 
        cat("For package \"", object@packageName, "\"\n", sep = "")
    if (nzchar(object@sourceFile)) 
        cat("From source file \"", object@sourceFile, "\"\n", 
            sep = "")
}
