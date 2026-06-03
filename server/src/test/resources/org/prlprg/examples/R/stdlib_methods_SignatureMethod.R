#? stdlib
`SignatureMethod` <- function (names, signature, definition) 
{
    .MlistDefunct("SignatureMethod()")
    n <- length(signature)
    if (n > length(names)) 
        stop("arguments 'names' and 'signature' must have the same length")
    if (n == 0) 
        return(definition)
    Class <- signature[[n]]
    name <- names[[n]]
    m <- MethodsList(name)
    slot(m, "methods")[[Class]] <- definition
    slot(m, "argument") <- as.name(name)
    SignatureMethod(names[-n], signature[-n], m)
}
