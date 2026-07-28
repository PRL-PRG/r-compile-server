#? stdlib
`.simpleInheritanceGeneric` <- function (fdef) 
{
    identical(attr(fdef@signature, "simpleOnly"), TRUE)
}
