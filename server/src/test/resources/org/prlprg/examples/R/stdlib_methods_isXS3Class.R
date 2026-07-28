#? stdlib
`isXS3Class` <- function (classDef) 
{
    ".S3Class" %in% names(classDef@slots)
}
