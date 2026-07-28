#? stdlib
`.printNames` <- function (header, names, separateLine = TRUE) 
{
    names <- paste0("\"", names, "\"")
    if (separateLine) {
        cat(header, "\n", sep = "")
        cat(names, sep = ", ", fill = TRUE, labels = "    ")
    }
    else {
        cat(header, ": ", sep = "")
        cat(names, sep = ", ", fill = TRUE)
    }
    cat("\n")
}
