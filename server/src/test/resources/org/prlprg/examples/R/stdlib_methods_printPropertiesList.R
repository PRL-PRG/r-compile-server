#? stdlib
`printPropertiesList` <- function (x, propertiesAreCalled) 
{
    if (length(x)) {
        n <- length(x)
        cat("\n", propertiesAreCalled, ":\n", sep = "")
        text <- format(c(names(x), as.character(x)), justify = "right")
        text <- matrix(text, nrow = 2L, ncol = n, byrow = TRUE)
        dimnames(text) <- list(c("Name:", "Class:"), rep.int("", 
            n))
        print(text, quote = FALSE)
    }
}
