#? stdlib
`isMixin` <- function (classDef) 
{
    val <- 0
    cc <- classDef@contains
    for (cl in cc) {
        if (cl@distance > 1 || val > 1) 
            break
        val <- val + 1
    }
    val > 1
}
