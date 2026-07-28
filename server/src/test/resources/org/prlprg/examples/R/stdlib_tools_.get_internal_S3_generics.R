#? stdlib
`.get_internal_S3_generics` <- function (primitive = TRUE) 
{
    c(.internalGenerics, if (primitive) c("[", "[[", "$", "[<-", 
        "[[<-", "$<-", "@", "@<-", .get_S3_primitive_generics()))
}
