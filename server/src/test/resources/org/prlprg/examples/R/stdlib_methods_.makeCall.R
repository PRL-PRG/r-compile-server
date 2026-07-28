#? stdlib
`.makeCall` <- function (name, x) 
{
    n <- length(argls <- formals(x))
    noDeflt <- if (n > 0) 
        vapply(argls, function(x) !is.name(x) || nzchar(as.character(x)), 
            NA)
    if (n) {
        arg.names <- names(argls)
    }
    Call <- paste0("$", name, "(")
    for (i in seq_len(n)) {
        Call <- paste0(Call, arg.names[i], if (noDeflt[[i]]) 
            " = ")
        if (i != n) 
            Call <- paste0(Call, ", ")
    }
    paste0(Call, ")\n")
}
