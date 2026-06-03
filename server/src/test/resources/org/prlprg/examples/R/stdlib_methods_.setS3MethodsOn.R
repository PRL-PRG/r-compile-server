#? stdlib
`.setS3MethodsOn` <- function (classDef) 
{
    ext <- extends(classDef)
    slots <- classDef@slots
    if (is.na(match(".S3Class", names(slots)))) {
        slots$.S3Class <- getClass("oldClass")@slots$.S3Class
        classDef@slots <- slots
    }
    proto <- classDef@prototype
    if (is.null(proto)) 
        proto <- defaultPrototype()
    attr(proto, ".S3Class") <- ext
    classDef@prototype <- proto
    classDef
}
