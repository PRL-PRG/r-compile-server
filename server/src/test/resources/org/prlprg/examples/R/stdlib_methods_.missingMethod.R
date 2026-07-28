#? stdlib
`.missingMethod` <- function (f, message = "", method) 
{
    if (nzchar(message)) 
        message <- paste0("(", message, ")")
    message <- paste("for function", f, message)
    if (is(method, "MethodDefinition")) {
        target <- paste(.dQ(method@target), collapse = ", ")
        defined <- paste(.dQ(method@defined), collapse = ", ")
        message <- paste("Required method", message, "not defined for signature", 
            target)
        if (!identical(target, defined)) 
            message <- paste(message, ", required for signature", 
                defined)
    }
    else message <- paste("Required method not defined", message)
    message
}
