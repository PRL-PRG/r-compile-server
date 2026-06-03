#? stdlib
`getKnownS3generics` <- function () 
c(names(.knownS3Generics), tools:::.get_internal_S3_generics())
